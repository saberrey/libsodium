#ifndef crypto_shorthash_H
#define crypto_shorthash_H

#include "crypto_shorthash_siphash24.h"

#define crypto_shorthash crypto_shorthash_siphash24
#define crypto_shorthash_BYTES crypto_shorthash_siphash24_BYTES
#define crypto_shorthash_KEYBYTES crypto_shorthash_siphash24_KEYBYTES
#define crypto_shorthash_PRIMITIVE "siphash24"

#endif
