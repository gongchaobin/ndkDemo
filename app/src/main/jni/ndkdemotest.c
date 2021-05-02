//
// Created by 龚超斌 on 2019-10-16.
//

#include "com_gong_ndk_NDKTools.h"



JNIEXPORT jstring JNICALL Java_com_gong_ndk_NDKTools_getStringFromNDK
        (JNIEnv *env, jclass clz) {
//    jstring  javaString;
//    javaString = (*env) -> NewStringUTF(env,"Hello world");
//
//    const jbyte* str;
//    jboolean isCopy;
//
//    str = (*env) -> GetStringUTFChars(env,javaString,&isCopy);
//    if(0 != str) {
//    }

    return (*env) -> NewStringUTF(env,"Hello world");
}

JNIEXPORT jstring JNICALL
Java_com_gong_ndk_NDKTools_stringFromNDK(JNIEnv *env, jclass clazz) {
    // TODO: implement stringFromNDK()
}

