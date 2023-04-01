//
// Created by weimo on 2023/4/1.
//

#ifndef FGUM_LOGGING_H
#define FGUM_LOGGING_H

#include <android/log.h>

#define LOG_TAG    "gum"

#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGW(...)  __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#endif //FGUM_LOGGING_H
