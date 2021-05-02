LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)


LOCAL_LDLIBS := -llog

LOCAL_MODULE    := ndkdemotest-jni

LOCAL_SRC_FILES := ndkdemotest.c Unix_wrap.c

#MY_SWIG_PACKAGE := com.apress.swig
#
#MY_SWIG_INTERFACES := Unix.i
#
#MY_SWIG_TYPE := c
#
#include /Users/gong/Documents/GitHub/ndkDemo/app/src/main/jni/my_swig_generate.mk

include $(BUILD_SHARED_LIBRARY)