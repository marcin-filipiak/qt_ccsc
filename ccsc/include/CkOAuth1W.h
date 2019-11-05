// CkOAuth1W.h: interface for the CkOAuth1W class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkOAuth1W_H
#define _CkOAuth1W_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkOAuth1W
class CK_VISIBLE_PUBLIC CkOAuth1W  : public CkWideCharBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkOAuth1W(const CkOAuth1W &);
	CkOAuth1W &operator=(const CkOAuth1W &);

    public:
	CkOAuth1W(void);
	virtual ~CkOAuth1W(void);

	static CkOAuth1W *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The oauth_version. Defaults to "1.0". May be set to the empty string to exclude.
	void get_OauthVersion(CkString &str);
	// The oauth_version. Defaults to "1.0". May be set to the empty string to exclude.
	const wchar_t *oauthVersion(void);
	// The oauth_version. Defaults to "1.0". May be set to the empty string to exclude.
	void put_OauthVersion(const wchar_t *newVal);

	// The HTTP method, such as "GET", "POST", "PUT", "DELETE", or "HEAD". Defaults to
	// "GET".
	void get_OauthMethod(CkString &str);
	// The HTTP method, such as "GET", "POST", "PUT", "DELETE", or "HEAD". Defaults to
	// "GET".
	const wchar_t *oauthMethod(void);
	// The HTTP method, such as "GET", "POST", "PUT", "DELETE", or "HEAD". Defaults to
	// "GET".
	void put_OauthMethod(const wchar_t *newVal);

	// The OAuth URL, such as "http://echo.lab.madgex.com/echo.ashx". See
	// http://bettiolo.github.io/oauth-reference-page/ to compare Chilkat results with
	// another tool's results.
	void get_OauthUrl(CkString &str);
	// The OAuth URL, such as "http://echo.lab.madgex.com/echo.ashx". See
	// http://bettiolo.github.io/oauth-reference-page/ to compare Chilkat results with
	// another tool's results.
	const wchar_t *oauthUrl(void);
	// The OAuth URL, such as "http://echo.lab.madgex.com/echo.ashx". See
	// http://bettiolo.github.io/oauth-reference-page/ to compare Chilkat results with
	// another tool's results.
	void put_OauthUrl(const wchar_t *newVal);

	// The consumer key.
	void get_ConsumerKey(CkString &str);
	// The consumer key.
	const wchar_t *consumerKey(void);
	// The consumer key.
	void put_ConsumerKey(const wchar_t *newVal);

	// The consumer secret.
	void get_ConsumerSecret(CkString &str);
	// The consumer secret.
	const wchar_t *consumerSecret(void);
	// The consumer secret.
	void put_ConsumerSecret(const wchar_t *newVal);

	// The token.
	void get_Token(CkString &str);
	// The token.
	const wchar_t *token(void);
	// The token.
	void put_Token(const wchar_t *newVal);

	// The token secret
	void get_TokenSecret(CkString &str);
	// The token secret
	const wchar_t *tokenSecret(void);
	// The token secret
	void put_TokenSecret(const wchar_t *newVal);

	// The nonce.
	void get_Nonce(CkString &str);
	// The nonce.
	const wchar_t *nonce(void);
	// The nonce.
	void put_Nonce(const wchar_t *newVal);

	// The timestamp, such as "1441632569".
	void get_Timestamp(CkString &str);
	// The timestamp, such as "1441632569".
	const wchar_t *timestamp(void);
	// The timestamp, such as "1441632569".
	void put_Timestamp(const wchar_t *newVal);

	// The signature method. Defaults to "HMAC-SHA1".
	void get_SignatureMethod(CkString &str);
	// The signature method. Defaults to "HMAC-SHA1".
	const wchar_t *signatureMethod(void);
	// The signature method. Defaults to "HMAC-SHA1".
	void put_SignatureMethod(const wchar_t *newVal);

	// x
	void get_QueryString(CkString &str);
	// x
	const wchar_t *queryString(void);

	// x
	void get_BaseString(CkString &str);
	// x
	const wchar_t *baseString(void);

	// x
	void get_HmacKey(CkString &str);
	// x
	const wchar_t *hmacKey(void);

	// The generated base64 signature.
	void get_Signature(CkString &str);
	// The generated base64 signature.
	const wchar_t *signature(void);


	void get_EncodedSignature(CkString &str);

	const wchar_t *encodedSignature(void);

	// The authorization header. This is what would be included in the Authorization
	// HTTP request header if it is going to be used as the means for providing the
	// OAuth1 authorization information.
	void get_AuthorizationHeader(CkString &str);
	// The authorization header. This is what would be included in the Authorization
	// HTTP request header if it is going to be used as the means for providing the
	// OAuth1 authorization information.
	const wchar_t *authorizationHeader(void);

	// The URL that includes the OAuth1 query params.
	void get_GeneratedUrl(CkString &str);
	// The URL that includes the OAuth1 query params.
	const wchar_t *generatedUrl(void);



	// ----------------------
	// Methods
	// ----------------------
	// Generate the signature based on the property settings. Input properties are
	// OauthVersion, OauthMethod, Url, ConsumerKey, ConsumerSecret, Token, TokenSecret,
	// Nonce, and Timestamp.
	bool Generate(void);

	// Adds an extra name/value parameter to the OAuth1 signature.
	bool AddParam(const wchar_t *name, const wchar_t *value);

	// Removes a name/value parameter from the OAuth1 signature.
	bool RemoveParam(const wchar_t *name);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
