// inet.h - WinINet
#pragma once
#define NOMINMAX
#include <windows.h>
#include <wininet.h>
#pragma comment(lib, "Wininet.lib")
#include <optional>
#include <string>

namespace Win {

    class Hinternet {
    private:
        HINTERNET h;
    protected:
        Hinternet(HINTERNET h)
            : h(h)
        { }
    public:
        Hinternet(const Hinternet&) = delete;
        Hinternet& operator=(const Hinternet&) = delete;
        Hinternet(Hinternet&& i)
            : h(i.h)
        { }
        Hinternet& operator=(Hinternet&& i) = delete;
        virtual ~Hinternet()
        {
            InternetCloseHandle(h);
        }
        operator const HINTERNET() const
        {
            return h;
        }
    };

    namespace Internet {
        struct Open : public Hinternet {
            Open(LPCTSTR agent = TEXT(""),
                DWORD accessType = INTERNET_OPEN_TYPE_DIRECT,
                LPCTSTR proxyName = NULL,
                LPCTSTR proxyBypass = NULL,
                DWORD flags = 0
            ) : Hinternet(InternetOpen(agent, accessType, proxyName, proxyBypass, flags))
            { }
        };
        // url or file
        struct OpenResource : public Hinternet {
            OpenResource(HINTERNET h)
                : Hinternet(h)
            { }
            template<class BUFFER = std::basic_string<TCHAR>, size_t BUFFER_SIZE = 1024>
            std::optional<BUFFER> ReadFile()
            {
                TCHAR buf[BUFFER_SIZE];
                DWORD n;
                BUFFER buffer;
                while (::InternetReadFile(*this, buf, BUFFER_SIZE, &n) && 0 != n) {
                    buffer.append(buf, n);
                }

                return buffer;
            }
        };
        struct OpenUrl : public OpenResource {
            OpenUrl(const Open& open,
                LPCTSTR   url,
                LPCTSTR   headers = TEXT(""),
                DWORD     headersLength = -1, // NULL terminated headers
                DWORD     flags = INTERNET_FLAG_EXISTING_CONNECT,
                DWORD_PTR context = NULL
            ) : OpenResource(::InternetOpenUrl(open, url, headers, headersLength, flags, context))
            { }
        };
        struct Connect : public Hinternet {
            Connect(const Open& h, 
                LPCTSTR serverName,
                INTERNET_PORT serverPort = INTERNET_DEFAULT_HTTP_PORT,
                LPCTSTR userName = NULL,
                LPCTSTR password = NULL,
                DWORD service = INTERNET_SERVICE_HTTP,
                DWORD flags = 0,
                DWORD_PTR context = NULL
            ) : Hinternet(InternetConnect(h, serverName, serverPort, userName, password, service, flags, context))
            { }
        };

        struct HttpOpenRequest : public OpenResource {
            HttpOpenRequest(const Connect& h,
                LPCTSTR   verb, // TEXT("GET")
                LPCTSTR   objectName,
                LPCTSTR   version = NULL,
                LPCTSTR   referer = NULL,
                LPCTSTR   *acceptTypes = NULL,
                DWORD     flags = 0,
                DWORD_PTR context = NULL
            ) : OpenResource(::HttpOpenRequest(h, verb, objectName, version, referer, acceptTypes, flags, context))
            { }
            BOOL HttpAddRequestHeaders(
                LPCTSTR   headers,
                DWORD     headersLength = -1, // NULL terminated
                DWORD     modifiers = HTTP_ADDREQ_FLAG_ADD_IF_NEW
            )
            {
                return ::HttpAddRequestHeaders(*this, headers, headersLength, modifiers);
            }
            BOOL HttpSendRequest(
                LPCTSTR   headers = TEXT(""),
                DWORD     headersLength = -1, // NULL terminated
                LPVOID    optional = NULL,
                DWORD     optionalLength = 0
            )
            {
                return ::HttpSendRequest(*this, headers, headersLength, optional, optionalLength);
            }
            BOOL HttpQueryInfo(
                DWORD     infoLevel,
                LPVOID    buffer,
                LPDWORD   bufferLength,
                LPDWORD   index
            )
            {
                return ::HttpQueryInfo(*this, infoLevel, buffer, bufferLength, index);
            }
            template<class BUFFER = std::basic_string<TCHAR>>
            std::optional<BUFFER> HttpQueryInfo(DWORD infoLevel)
            {
                BUFFER buffer;
                DWORD bufferLength = 0;

                HttpQueryInfo(infoLevel, nullptr, &bufferLength, NULL);
                DWORD error = GetLastError();
                if (error == ERROR_HTTP_HEADER_NOT_FOUND) {
                    return {};
                }
                if (error == ERROR_INSUFFICIENT_BUFFER) {
                    buffer.resize(bufferLength);
                }
                if (HttpQueryInfo(infoLevel, buffer.data(), &bufferLength, NULL)) {
                    return buffer;
                }
                
                return {};
            }

        };

    };

} // Win
