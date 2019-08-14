#
# Makefile
#
# Makefile for Poco JWT
#

include $(POCO_BASE)/build/rules/global

SYSLIBS += -lcrypto

objects = Token Signer Serializer JWTException ECDSASignature

target         = PocoJWT
target_version = $(LIBVERSION)
target_libs    = PocoCrypto PocoJSON PocoFoundation

include $(POCO_BASE)/build/rules/lib
