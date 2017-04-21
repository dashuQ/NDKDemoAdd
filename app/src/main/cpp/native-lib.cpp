#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ndkdemoadd_ndk_NdkUtil_getStr(JNIEnv *env, jobject instance) {

    // TODO

    std::string returnValue = "自已创建的getStr";
    return env->NewStringUTF(returnValue.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ndkdemoadd_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
