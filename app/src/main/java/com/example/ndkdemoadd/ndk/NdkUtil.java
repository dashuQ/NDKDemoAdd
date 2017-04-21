package com.example.ndkdemoadd.ndk;

/**
 * Created by lenovo on 2017/4/21.
 */

public class NdkUtil {

//    static {
//        System.loadLibrary("test");
//    }

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
    public native String getStr();
}
