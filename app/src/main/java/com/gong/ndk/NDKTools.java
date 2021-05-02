package com.gong.ndk;

/**
 * Copyright (C)
 *
 * @author : gongcb
 * @date : 2019-10-16 09:23
 * @desc :
 */
public class NDKTools {

    static {
        System.loadLibrary("ndkdemotest-jni");
    }


    public static native String getStringFromNDK();

    public static native String stringFromNDK();

}
