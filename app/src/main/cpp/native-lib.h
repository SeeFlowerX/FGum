//
// Created by weimo on 2023/4/1.
//

#ifndef FGUM_NATIVE_LIB_H
#define FGUM_NATIVE_LIB_H

#include "frida-gumjs.h"

static void on_message( const gchar *message, GBytes *data, gpointer user_data);

int gumjsHook(const char *scriptpath);

char *readfile(const char *filepath);

int hookFunc(const char *scriptpath);

#endif //FGUM_NATIVE_LIB_H
