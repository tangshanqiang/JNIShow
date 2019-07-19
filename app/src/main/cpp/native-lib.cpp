#include <jni.h>
#include <string>
#include "log.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_sprocomm_jnishow_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    char* hello = "Hello from C++";
    LOGD("hello string:%s",hello);
    return env->NewStringUTF(hello);
}
