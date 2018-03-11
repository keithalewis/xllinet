// enum_http_query.cpp - HTTP_QUERY_* enumeration
#include "inet.h"
#include "xll/xll.h"

#ifndef CATEGORY
#define CATEGORY L"INET"
#endif

using namespace xll;

XLL_ENUM(HTTP_QUERY_ACCEPT, HTTP_QUERY_ACCEPT, CATEGORY, L"Retrieves the acceptable media types for the response.");
XLL_ENUM(HTTP_QUERY_ACCEPT_CHARSET, HTTP_QUERY_ACCEPT_CHARSET, CATEGORY, L"Retrieves the acceptable character sets for the response.");
XLL_ENUM(HTTP_QUERY_ACCEPT_ENCODING, HTTP_QUERY_ACCEPT_ENCODING, CATEGORY, L"Retrieves the acceptable content-coding values for the response.");
XLL_ENUM(HTTP_QUERY_ACCEPT_LANGUAGE, HTTP_QUERY_ACCEPT_LANGUAGE, CATEGORY, L"Retrieves the acceptable natural languages for the response.");
XLL_ENUM(HTTP_QUERY_ACCEPT_RANGES, HTTP_QUERY_ACCEPT_RANGES, CATEGORY, L"Retrieves the types of range requests that are accepted for a resource.");
XLL_ENUM(HTTP_QUERY_AGE, HTTP_QUERY_AGE, CATEGORY, L"Retrieves the Age response-header field, which contains the sender's estimate of the amount of time since the response was generated at the origin server.");
XLL_ENUM(HTTP_QUERY_ALLOW, HTTP_QUERY_ALLOW, CATEGORY, L"Receives the HTTP verbs supported by the server.");
XLL_ENUM(HTTP_QUERY_AUTHORIZATION, HTTP_QUERY_AUTHORIZATION, CATEGORY, L"Retrieves the authorization credentials used for a request.");
XLL_ENUM(HTTP_QUERY_CACHE_CONTROL, HTTP_QUERY_CACHE_CONTROL, CATEGORY, L"Retrieves the cache control directives.");
XLL_ENUM(HTTP_QUERY_CONNECTION, HTTP_QUERY_CONNECTION, CATEGORY, L"Retrieves any options that are specified for a particular connection and must not be communicated by proxies over further connections.");
XLL_ENUM(HTTP_QUERY_CONTENT_BASE, HTTP_QUERY_CONTENT_BASE, CATEGORY, L"Retrieves the base URI (Uniform Resource Identifier) for resolving relative URLs within the entity.");
XLL_ENUM(HTTP_QUERY_CONTENT_DESCRIPTION, HTTP_QUERY_CONTENT_DESCRIPTION, CATEGORY, L"Obsolete. Maintained for legacy application compatibility only.");
XLL_ENUM(HTTP_QUERY_CONTENT_DISPOSITION, HTTP_QUERY_CONTENT_DISPOSITION, CATEGORY, L"Obsolete. Maintained for legacy application compatibility only.");
XLL_ENUM(HTTP_QUERY_CONTENT_ENCODING, HTTP_QUERY_CONTENT_ENCODING, CATEGORY, L"Retrieves any additional content codings that have been applied to the entire resource.");
XLL_ENUM(HTTP_QUERY_CONTENT_ID, HTTP_QUERY_CONTENT_ID, CATEGORY, L"Retrieves the content identification.");
XLL_ENUM(HTTP_QUERY_CONTENT_LANGUAGE, HTTP_QUERY_CONTENT_LANGUAGE, CATEGORY, L"Retrieves the language that the content is in.");
XLL_ENUM(HTTP_QUERY_CONTENT_LENGTH, HTTP_QUERY_CONTENT_LENGTH, CATEGORY, L"Retrieves the size of the resource, in bytes.");
XLL_ENUM(HTTP_QUERY_CONTENT_LOCATION, HTTP_QUERY_CONTENT_LOCATION, CATEGORY, L"Retrieves the resource location for the entity enclosed in the message.");
XLL_ENUM(HTTP_QUERY_CONTENT_MD5, HTTP_QUERY_CONTENT_MD5, CATEGORY, L"Retrieves an MD5 digest of the entity-body for the purpose of providing an end-to-end message integrity check (MIC) for the entity-body. For more information, see RFC1864, The Content-MD5 Header Field, at http://ftp.isi.edu/in-notes/rfc1864.txt.");
XLL_ENUM(HTTP_QUERY_CONTENT_RANGE, HTTP_QUERY_CONTENT_RANGE, CATEGORY, L"Retrieves the location in the full entity-body where the partial entity-body should be inserted and the total size of the full entity-body.");
XLL_ENUM(HTTP_QUERY_CONTENT_TRANSFER_ENCODING, HTTP_QUERY_CONTENT_TRANSFER_ENCODING, CATEGORY, L"Receives the additional content coding that has been applied to the resource.");
XLL_ENUM(HTTP_QUERY_CONTENT_TYPE, HTTP_QUERY_CONTENT_TYPE, CATEGORY, L"Receives the content type of the resource (such as text/html).");
XLL_ENUM(HTTP_QUERY_COOKIE, HTTP_QUERY_COOKIE, CATEGORY, L"Retrieves any cookies associated with the request.");
XLL_ENUM(HTTP_QUERY_COST, HTTP_QUERY_COST, CATEGORY, L"No longer supported.");
XLL_ENUM(HTTP_QUERY_CUSTOM, HTTP_QUERY_CUSTOM, CATEGORY, L"Causes HttpQueryInfo to search for the header name specified in lpvBuffer and store the header data in lpvBuffer.");
XLL_ENUM(HTTP_QUERY_DATE, HTTP_QUERY_DATE, CATEGORY, L"Receives the date and time at which the message was originated.");
XLL_ENUM(HTTP_QUERY_DERIVED_FROM, HTTP_QUERY_DERIVED_FROM, CATEGORY, L"No longer supported.");
XLL_ENUM(HTTP_QUERY_ECHO_HEADERS, HTTP_QUERY_ECHO_HEADERS, CATEGORY, L"Not currently implemented.");
XLL_ENUM(HTTP_QUERY_ECHO_HEADERS_CRLF, HTTP_QUERY_ECHO_HEADERS_CRLF, CATEGORY, L"Not currently implemented.");
XLL_ENUM(HTTP_QUERY_ECHO_REPLY, HTTP_QUERY_ECHO_REPLY, CATEGORY, L"Not currently implemented.");
XLL_ENUM(HTTP_QUERY_ECHO_REQUEST, HTTP_QUERY_ECHO_REQUEST, CATEGORY, L"Not currently implemented.");
XLL_ENUM(HTTP_QUERY_ETAG, HTTP_QUERY_ETAG, CATEGORY, L"Retrieves the entity tag for the associated entity.");
XLL_ENUM(HTTP_QUERY_EXPECT, HTTP_QUERY_EXPECT, CATEGORY, L"Retrieves the Expect header, which indicates whether the client application should expect 100 series responses.");
XLL_ENUM(HTTP_QUERY_EXPIRES, HTTP_QUERY_EXPIRES, CATEGORY, L"Receives the date and time after which the resource should be considered outdated.");
XLL_ENUM(HTTP_QUERY_FORWARDED, HTTP_QUERY_FORWARDED, CATEGORY, L"Obsolete. Maintained for legacy application compatibility only.");
XLL_ENUM(HTTP_QUERY_FROM, HTTP_QUERY_FROM, CATEGORY, L"Retrieves the email address for the human user who controls the requesting user agent if the From header is given.");
XLL_ENUM(HTTP_QUERY_HOST, HTTP_QUERY_HOST, CATEGORY, L"Retrieves the Internet host and port number of the resource being requested.");
XLL_ENUM(HTTP_QUERY_IF_MATCH, HTTP_QUERY_IF_MATCH, CATEGORY, L"Retrieves the contents of the If-Match request-header field.");
XLL_ENUM(HTTP_QUERY_IF_MODIFIED_SINCE, HTTP_QUERY_IF_MODIFIED_SINCE, CATEGORY, L"Retrieves the contents of the If-Modified-Since header.");
XLL_ENUM(HTTP_QUERY_IF_NONE_MATCH, HTTP_QUERY_IF_NONE_MATCH, CATEGORY, L"Retrieves the contents of the If-None-Match request-header field.");
XLL_ENUM(HTTP_QUERY_IF_RANGE, HTTP_QUERY_IF_RANGE, CATEGORY, L"Retrieves the contents of the If-Range request-header field. This header enables the client application to verify that the entity related to a partial copy of the entity in the client application cache has not been updated.");
XLL_ENUM(HTTP_QUERY_IF_UNMODIFIED_SINCE, HTTP_QUERY_IF_UNMODIFIED_SINCE, CATEGORY, L"Retrieves the contents of the If-Unmodified-Since request-header field.");
XLL_ENUM(HTTP_QUERY_LAST_MODIFIED, HTTP_QUERY_LAST_MODIFIED, CATEGORY, L"Receives the date and time at which the server believes the resource was last modified.");
XLL_ENUM(HTTP_QUERY_LINK, HTTP_QUERY_LINK, CATEGORY, L"Obsolete. Maintained for legacy application compatibility only.");
XLL_ENUM(HTTP_QUERY_LOCATION, HTTP_QUERY_LOCATION, CATEGORY, L"Retrieves the absolute Uniform Resource Identifier (URI) used in a Location response-header.");
XLL_ENUM(HTTP_QUERY_MAX, HTTP_QUERY_MAX, CATEGORY, L"Not a query flag. Indicates the maximum value of an HTTP_QUERY_* value.");
XLL_ENUM(HTTP_QUERY_MAX_FORWARDS, HTTP_QUERY_MAX_FORWARDS, CATEGORY, L"Retrieves the number of proxies or gateways that can forward the request to the next inbound server.");
XLL_ENUM(HTTP_QUERY_MESSAGE_ID, HTTP_QUERY_MESSAGE_ID, CATEGORY, L"No longer supported.");
XLL_ENUM(HTTP_QUERY_MIME_VERSION, HTTP_QUERY_MIME_VERSION, CATEGORY, L"Receives the version of the MIME protocol that was used to construct the message.");
XLL_ENUM(HTTP_QUERY_ORIG_URI, HTTP_QUERY_ORIG_URI, CATEGORY, L"Obsolete. Maintained for legacy application compatibility only.");
XLL_ENUM(HTTP_QUERY_PRAGMA, HTTP_QUERY_PRAGMA, CATEGORY, L"Receives the implementation-specific directives that might apply to any recipient along the request/response chain.");
XLL_ENUM(HTTP_QUERY_PROXY_AUTHENTICATE, HTTP_QUERY_PROXY_AUTHENTICATE, CATEGORY, L"Retrieves the authentication scheme and realm returned by the proxy.");
XLL_ENUM(HTTP_QUERY_PROXY_AUTHORIZATION, HTTP_QUERY_PROXY_AUTHORIZATION, CATEGORY, L"Retrieves the header that is used to identify the user to a proxy that requires authentication. This header can only be retrieved before the request is sent to the server.");
XLL_ENUM(HTTP_QUERY_PROXY_CONNECTION, HTTP_QUERY_PROXY_CONNECTION, CATEGORY, L"Retrieves the Proxy-Connection header.");
XLL_ENUM(HTTP_QUERY_PUBLIC, HTTP_QUERY_PUBLIC, CATEGORY, L"Receives methods available at this server.");
XLL_ENUM(HTTP_QUERY_RANGE, HTTP_QUERY_RANGE, CATEGORY, L"Retrieves the byte range of an entity.");
XLL_ENUM(HTTP_QUERY_RAW_HEADERS, HTTP_QUERY_RAW_HEADERS, CATEGORY, L"Receives all the headers returned by the server. Each header is terminated by \"\\0\". An additional \"\\0\" terminates the list of headers.");
XLL_ENUM(HTTP_QUERY_RAW_HEADERS_CRLF, HTTP_QUERY_RAW_HEADERS_CRLF, CATEGORY, L"Receives all the headers returned by the server. Each header is separated by a carriage return/line feed (CR/LF) sequence.");
XLL_ENUM(HTTP_QUERY_REFERER, HTTP_QUERY_REFERER, CATEGORY, L"Receives the Uniform Resource Identifier (URI) of the resource where the requested URI was obtained.");
XLL_ENUM(HTTP_QUERY_REFRESH, HTTP_QUERY_REFRESH, CATEGORY, L"Obsolete. Maintained for legacy application compatibility only.");
XLL_ENUM(HTTP_QUERY_REQUEST_METHOD, HTTP_QUERY_REQUEST_METHOD, CATEGORY, L"Receives the HTTP verb that is being used in the request, typically GET or POST.");
XLL_ENUM(HTTP_QUERY_RETRY_AFTER, HTTP_QUERY_RETRY_AFTER, CATEGORY, L"Retrieves the amount of time the service is expected to be unavailable.");
XLL_ENUM(HTTP_QUERY_SERVER, HTTP_QUERY_SERVER, CATEGORY, L"Retrieves data about the software used by the origin server to handle the request.");
XLL_ENUM(HTTP_QUERY_SET_COOKIE, HTTP_QUERY_SET_COOKIE, CATEGORY, L"Receives the value of the cookie set for the request.");
XLL_ENUM(HTTP_QUERY_STATUS_CODE, HTTP_QUERY_STATUS_CODE, CATEGORY, L"Receives the status code returned by the server. For more information and a list of possible values, see HTTP Status Codes.");
XLL_ENUM(HTTP_QUERY_STATUS_TEXT, HTTP_QUERY_STATUS_TEXT, CATEGORY, L"Receives any additional text returned by the server on the response line.");
XLL_ENUM(HTTP_QUERY_TITLE, HTTP_QUERY_TITLE, CATEGORY, L"Obsolete. Maintained for legacy application compatibility only.");
XLL_ENUM(HTTP_QUERY_TRANSFER_ENCODING, HTTP_QUERY_TRANSFER_ENCODING, CATEGORY, L"Retrieves the type of transformation that has been applied to the message body so it can be safely transferred between the sender and recipient.");
XLL_ENUM(HTTP_QUERY_UNLESS_MODIFIED_SINCE, HTTP_QUERY_UNLESS_MODIFIED_SINCE, CATEGORY, L"Retrieves the Unless-Modified-Since header.");
XLL_ENUM(HTTP_QUERY_UPGRADE, HTTP_QUERY_UPGRADE, CATEGORY, L"Retrieves the additional communication protocols that are supported by the server.");
XLL_ENUM(HTTP_QUERY_URI, HTTP_QUERY_URI, CATEGORY, L"Receives some or all of the Uniform Resource Identifiers (URIs) by which the Request-URI resource can be identified.");
XLL_ENUM(HTTP_QUERY_USER_AGENT, HTTP_QUERY_USER_AGENT, CATEGORY, L"Retrieves data about the user agent that made the request.");
XLL_ENUM(HTTP_QUERY_VARY, HTTP_QUERY_VARY, CATEGORY, L"Retrieves the header that indicates that the entity was selected from a number of available representations of the response using server-driven negotiation.");
XLL_ENUM(HTTP_QUERY_VERSION, HTTP_QUERY_VERSION, CATEGORY, L"Receives the last response code returned by the server.");
XLL_ENUM(HTTP_QUERY_VIA, HTTP_QUERY_VIA, CATEGORY, L"Retrieves the intermediate protocols and recipients between the user agent and the server on requests, and between the origin server and the client on responses.");
XLL_ENUM(HTTP_QUERY_WARNING, HTTP_QUERY_WARNING, CATEGORY, L"Retrieves additional data about the status of a response that might not be reflected by the response status code.");
XLL_ENUM(HTTP_QUERY_WWW_AUTHENTICATE, HTTP_QUERY_WWW_AUTHENTICATE, CATEGORY, L"Retrieves the authentication scheme and realm returned by the server.");
XLL_ENUM(HTTP_QUERY_X_CONTENT_TYPE_OPTIONS, HTTP_QUERY_X_CONTENT_TYPE_OPTIONS, CATEGORY, L"Retrieves the X-Content-Type-Options header value.");
XLL_ENUM(HTTP_QUERY_P3P, HTTP_QUERY_P3P, CATEGORY, L"Retrieves the P3P header value.");
XLL_ENUM(HTTP_QUERY_X_P2P_PEERDIST, HTTP_QUERY_X_P2P_PEERDIST, CATEGORY, L"Retrieves the X-P2P-PeerDist header value.");
XLL_ENUM(HTTP_QUERY_X_UA_COMPATIBLE, HTTP_QUERY_X_UA_COMPATIBLE, CATEGORY, L"Retrieves the X-UA-Compatible header value.");
XLL_ENUM(HTTP_QUERY_DEFAULT_STYLE, HTTP_QUERY_DEFAULT_STYLE, CATEGORY, L"Retrieves the Default-Style header value.");
XLL_ENUM(HTTP_QUERY_X_FRAME_OPTIONS, HTTP_QUERY_X_FRAME_OPTIONS, CATEGORY, L"Retrieves the X-Frame-Options header value.");
XLL_ENUM(HTTP_QUERY_X_XSS_PROTECTION, HTTP_QUERY_X_XSS_PROTECTION, CATEGORY, L"Retrieves the X-XSS-Protection header value.");
XLL_ENUM(HTTP_QUERY_FLAG_COALESCE, HTTP_QUERY_FLAG_COALESCE, CATEGORY, L"Not implemented.");
XLL_ENUM(HTTP_QUERY_FLAG_NUMBER, HTTP_QUERY_FLAG_NUMBER, CATEGORY, L"Returns the data as a 32-bit number for headers whose value is a number, such as the status code.");
//!!! value > 2^53 XLL_ENUM(HTTP_QUERY_FLAG_REQUEST_HEADERS, HTTP_QUERY_FLAG_REQUEST_HEADERS, CATEGORY, L"Queries request headers only.");
XLL_ENUM(HTTP_QUERY_FLAG_SYSTEMTIME, HTTP_QUERY_FLAG_SYSTEMTIME, CATEGORY, L"Returns the header value as a SYSTEMTIME structure, which does not require the application to parse the data. Use for headers whose value is a date/time string, such as \"Last - Modified - Time\".");
