//
// Created by 龚超斌 on 2019-10-16.
//

#include "com_gong_ndk_NDKTools.h"
#include "log.h"


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
//        LOGI("your age:%d\n", str);
//
//        if(JNI_TRUE == isCopy) {
//            LOGI("NDK log: %s", "111");
//        } else {
//            LOGI("NDK log: %s", "222");
//        }
//    }
//
//    // 释放
//    (*env)->ReleaseStringUTFChars(env,javaString,str);

    return (*env) -> NewStringUTF(env,"hello world from ndk");

}

JNIEXPORT jstring JNICALL
Java_com_gong_ndk_NDKTools_stringFromNDK(JNIEnv *env, jclass clazz) {
    // TODO: implement stringFromNDK()
}

