#ifndef crypto_hashblocks_sha256_H
#define crypto_hashblocks_sha256_H

#define crypto_hashblocks_sha256_STATEBYTES 32
#define crypto_hashblocks_sha256_BLOCKBYTES 64
#ifdef __cplusplus
extern "C" {
#endif
extern int crypto_hashblocks_sha256_ref(unsigned char *,const unsigned char *,unsigned long long);
#ifdef __cplusplus
}
#endif

#define crypto_hashblocks_sha256 crypto_hashblocks_sha256_ref

#endif
