// CkEcc.h: interface for the CkEcc class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkEcc_H
#define _CkEcc_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkPrivateKey;
class CkPrng;
class CkPublicKey;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkEcc
class CK_VISIBLE_PUBLIC CkEcc  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkEcc(const CkEcc &);
	CkEcc &operator=(const CkEcc &);

    public:
	CkEcc(void);
	virtual ~CkEcc(void);

	static CkEcc *createNew(void);
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
	CkPrivateKey *GenEccKey(const char *curveName, CkPrng &prng);


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
	bool SharedSecretENC(CkPrivateKey &privKey, CkPublicKey &pubKey, const char *encoding, CkString &outStr);

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
	const char *sharedSecretENC(CkPrivateKey &privKey, CkPublicKey &pubKey, const char *encoding);

	// Verifies an ECC signature. ECC signatures are computed and verified on the
	// hashes of data (such as SHA1, SHA256, etc.). The hash of the data is passed in
	// ARG1. The encoded signature is passed in ARG2. The encoding of both the hash and
	// signature, such as "base64", "hex", etc. is passed in ARG3. The ECC public key
	// is passed in the last argument (ARG4).
	// 
	// The method returns 1 for a valid signature, 0 for an invalid signature, and -1
	// for any other failure.
	// 
	int VerifyHashENC(const char *encodedHash, const char *encodedSig, const char *encoding, CkPublicKey &pubkey);


	// Computes an ECC signature on a hash. ECC signatures are computed and verified on
	// the hashes of data (such as SHA1, SHA256, etc.). The hash of the data is passed
	// in ARG1. The encoding, such as "base64", "hex", etc. is passed in ARG2. The ECC
	// private key is passed in the 3rd argument (ARG3). Given that creating an ECC
	// signature involves the generation of random numbers, a PRNG is passed in the 4th
	// argument (ARG4). The signature is returned as an encoded string using the
	// encoding specified by the ARG2 argument.
	bool SignHashENC(const char *encodedHash, const char *encoding, CkPrivateKey &privkey, CkPrng &prng, CkString &outStr);

	// Computes an ECC signature on a hash. ECC signatures are computed and verified on
	// the hashes of data (such as SHA1, SHA256, etc.). The hash of the data is passed
	// in ARG1. The encoding, such as "base64", "hex", etc. is passed in ARG2. The ECC
	// private key is passed in the 3rd argument (ARG3). Given that creating an ECC
	// signature involves the generation of random numbers, a PRNG is passed in the 4th
	// argument (ARG4). The signature is returned as an encoded string using the
	// encoding specified by the ARG2 argument.
	const char *signHashENC(const char *encodedHash, const char *encoding, CkPrivateKey &privkey, CkPrng &prng);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
