#ifndef _SIGNATURE_H_
#define _SIGNATURE_H_


static const char* kNormClassLoader = "java/lang/ClassLoader";
static const char* kNormDexClassLoader = "dalvik/system/DexClassLoader";

static const char* kFuncGetSystemClassLoader = "getSystemClassLoader";
static const char* kFuncConstructor = "<init>";

static const char* kSigClassLoader = "Ljava/lang/ClassLoader;";
static const char* kSigDexClassLoader = "Ldalvik/system/DexClassLoader;";
static const char* kSigString = "Ljava/lang/String;";

static const char kSigVoid = 'V';
static const char kSigBoolean = 'Z';
static const char kSigByte = 'B';
static const char kSigChar = 'C';
static const char kSigShort = 'S';
static const char kSigInt = 'I';
static const char kSigLong = 'J';
static const char kSigFloat = 'F';
static const char kSigDouble = 'D';
static const char kSigArray = '[';

#endif