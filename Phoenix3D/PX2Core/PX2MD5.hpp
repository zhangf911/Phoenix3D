// PX2MD5.hpp

#ifndef PX2MD5_HPP
#define PX2MD5_HPP

#ifdef __cplusplus
extern "C"{
#endif

/* MD5 context. */
typedef struct 
{
	unsigned long int state[4];                                   /* state (ABCD) */
	unsigned long int count[2];        /* number of bits, modulo 2^64 (lsb first) */
	unsigned char buffer[64];                         /* input buffer */
} MD5_CTX;

void MD5Init(MD5_CTX *);
void MD5Update(MD5_CTX *, unsigned char *, unsigned int);
void MD5Final(unsigned char [16], MD5_CTX *);

/*
	����const char *inBuffer��int length
	���char *outBuffer
	����length��Ϊ0,outBuffer�ĳ���ΪMD5_DIGEST_LENGTH(16byte)
*/
void Md5HashBuffer(char *, const char *, int);
void Md5String(char *outBuffer, const char *inBuffer, int length);
void Md5File(char *outBuffer, const char *filename);
void Md5HexString(char in16[], char out32[]);

#ifdef __cplusplus
}
#endif

#endif