//
// ECDSASignature.h
//
// Library: JWT
// Package: ECDSA
// Module:  ECDSASignature
//
// Definition of the ECDSADigestEngine class.
//
// Copyright (c) 2019, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef JWT_ECDSASignature_INCLUDED
#define JWT_ECDSASignature_INCLUDED


#include "Poco/JWT/JWT.h"
#include <vector>
#include <openssl/ecdsa.h>


namespace Poco {
namespace JWT {


class JWT_API ECDSASignature
	/// A helper class for dealing with ECDSA signatures.
{
public:
	typedef std::vector<unsigned char> ByteVec;

	explicit ECDSASignature(const ByteVec& derSignature);
		/// Creates the ECDSASignature from a DER-encoded signature.

	ECDSASignature(const ByteVec& rawR, const ByteVec& rawS);
		/// Creates the ECDSASignature from raw r and s values.

	~ECDSASignature();
		/// Destroys the ECDSASignature.

	ByteVec toDER() const;
		/// Returns a buffer containing the DER-encoded signature.

	ByteVec rawR() const;
		/// Returns a raw P value.

	ByteVec rawS() const;
		/// Returns a raw Q value.

private:
	ECDSA_SIG* _pSig;
};


} } // namespace Poco::JWT


#endif // JWT_ECDSASignature_INCLUDED
