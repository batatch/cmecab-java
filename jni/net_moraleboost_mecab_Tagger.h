/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_moraleboost_mecab_Tagger */

#ifndef _Included_net_moraleboost_mecab_Tagger
#define _Included_net_moraleboost_mecab_Tagger
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_moraleboost_mecab_Tagger
 * Method:    _create
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_net_moraleboost_mecab_Tagger__1create
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     net_moraleboost_mecab_Tagger
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_moraleboost_mecab_Tagger__1destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_moraleboost_mecab_Tagger
 * Method:    _parse
 * Signature: (J[B)J
 */
JNIEXPORT jlong JNICALL Java_net_moraleboost_mecab_Tagger__1parse
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     net_moraleboost_mecab_Tagger
 * Method:    _version
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_net_moraleboost_mecab_Tagger__1version
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
