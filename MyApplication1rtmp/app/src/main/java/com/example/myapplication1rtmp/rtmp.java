package com.example.myapplication1rtmp;

import java.nio.ByteBuffer;

public class rtmp {
    static{
        System.loadLibrary("native-lib");
        System.loadLibrary("avcodec");
        System.loadLibrary("avformat");
        System.loadLibrary("avutil");
    }

    public native void serverpath(ByteBuffer rtmph264);
}
