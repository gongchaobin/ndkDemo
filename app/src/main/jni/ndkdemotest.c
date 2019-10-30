//
// Created by 龚超斌 on 2019-10-16.
//

#include "com_gong_ndk_NDKTools.h"



JNIEXPORT jstring JNICALL Java_com_gong_ndk_NDKTools_getStringFromNDK
        (JNIEnv *env, jclass clz) {
    return (*env)->NewStringUTF(env,"Hellow World，这是隔壁老李头的NDK的第一行代码");
}
