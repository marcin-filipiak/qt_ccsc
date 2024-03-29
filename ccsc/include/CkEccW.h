// CkEccW.h: interface for the CkEccW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkEccW_H
#define _CkEccW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"

class CkPrivateKeyW;
class CkPrngW;
class CkPublicKeyW;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkEccW
class CK_VISIBLE_PUBLIC CkEccW  : public CkWideCharBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkEccW(const CkEccW &);
	CkEccW &operator=(const CkEccW &);

    public:
	CkEccW(void);
	virtual ~CkEccW(void);

	static CkEccW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------


	// ----------------------
	// Methods
	// ----------------------
	// Generates an ECC private key. The ARG1 specifies the curve name which determines
	// the key size. The ARG2 provides a source for generating the random private key.
	// 
	// The following curve names are accepted:
	//     secp256r1 (also known as P-256 and prime256v1)
	//     secp384r1 (also known as P-384)
	//     secp521r1 (also known as P-521)
	//     secp256k1 (This is the curve used for Bitcoin)
	// 
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKeyW *GenEccKey(const wchar_t *curveName, CkPrngW &prng);

	// Computes a shared secret given a private and public key. For example, Alice and
	// Bob can compute the identical shared secret by doing the following: Alice sends
	// Bob her public key, and Bob calls SharedSecretENC with his private key and
	// Alice's public key. Bob sends Alice his public key, and Alice calls
	// SharedSecretENC with her private key and Bob's public key. Both calls to
	// SharedSecretENC will produce the same result. The resulting bytes are returned
	// in encoded string form (hex, base64, etc) as specified by ARG3.
	// 
	// Note: The private and public keys must both be keys on the same ECC curve.
	// 
	bool SharedSecretENC(CkPrivateKeyW &privKey, CkPublicKeyW &pubKey, const wchar_t *encoding, CkString &outStr);
	// Computes a shared secret given a private and public key. For example, Alice and
	// Bob can compute the identical shared secret by doing the following: Alice sends
	// Bob her public key, and Bob calls SharedSecretENC with his private key and
	// Alice's public key. Bob sends Alice his public key, and Alice calls
	// SharedSecretENC with her private key and Bob's public key. Both calls to
	// SharedSecretENC will produce the same result. The resulting bytes are returned
	// in encoded string form (hex, base64, etc) as specified by ARG3.
	// 
	// Note: The private and public keys must both be keys on the same ECC curve.
	// 
	const wchar_t *sharedSecretENC(CkPrivateKeyW &privKey, CkPublicKeyW &pubKey, const wchar_t *encoding);

	// Verifies an ECC signature. ECC signatures are computed and verified on the
	// hashes of data (such as SHA1, SHA256, etc.). The hash of the data is passed in
	// ARG1. The encoded signature is passed in ARG2. The encoding of both the hash and
	// signature, such as "base64", "hex", etc. is passed in ARG3. The ECC public key
	// is passed in the last argument (ARG4).
	// 
	// The method returns 1 for a valid signature, 0 for an invalid signature, and -1
	// for any other failure.
	// 
	int VerifyHashENC(const wchar_t *encodedHash, const wchar_t *encodedSig, const wchar_t *encoding, CkPublicKeyW &pubkey);

	// Computes an ECC signature on a hash. ECC signatures are computed and verified on
	// the hashes of data (such as SHA1, SHA256, etc.). The hash of the data is passed
	// in ARG1. The encoding, such as "base64", "hex", etc. is passed in ARG2. The ECC
	// private key is passed in the 3rd argument (ARG3). Given that creating an ECC
	// signature involves the generation of random numbers, a PRNG is passed in the 4th
	// argument (ARG4). The signature is returned as an encoded string using the
	// encoding specified by the ARG2 argument.
	bool SignHashENC(const wchar_t *encodedHash, const wchar_t *encoding, CkPrivateKeyW &privkey, CkPrngW &prng, CkString &outStr);
	// Computes an ECC signature on a hash. ECC signatures are computed and verified on
	// the hashes of data (such as SHA1, SHA256, etc.). The hash of the data is passed
	// in ARG1. The encoding, such as "base64", "hex", etc. is passed in ARG2. The ECC
	// private key is passed in the 3rd argument (ARG3). Given that creating an ECC
	// signature involves the generation of random numbers, a PRNG is passed in the 4th
	// argument (ARG4). The signature is returned as an encoded string using the
	// encoding specified by the ARG2 argument.
	const wchar_t *signHashENC(const wchar_t *encodedHash, const wchar_t *encoding, CkPrivateKeyW &privkey, CkPrngW &prng);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
