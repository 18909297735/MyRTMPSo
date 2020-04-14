//
// Created by wushaojie on 4/6/20.
//

#ifndef MY_APPLICATION1RTMP_NATIVE_LIB_H
#define MY_APPLICATION1RTMP_NATIVE_LIB_H

#include <jni.h>
#include <string>

extern "C"
{
#include "include/libavutil/timestamp.h"
#include "include/libavformat/avformat.h"
};

extern "C" {

JNIEXPORT void JNICALL
Java_com_example_myapplication1rtmp_rtmp_serverpath(JNIEnv *env, jobject thiz,jobject rtmph264);

}
#endif //MY_APPLICATION1RTMP_NATIVE_LIB_H
