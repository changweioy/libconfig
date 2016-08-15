/*
 * Copyright (C) morrowindxie@gmail.com (https://github.com/morrowind)
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _CFG_UTIL_H_
#define _CFG_UTIL_H_

#include <stdio.h>

typedef int bool;

#ifndef null
#define null ((void *)0)
#endif

#ifndef true
#define true (1)
#endif

#ifndef false
#define false (0)
#endif

bool isEmpty(const char *str);

char *fgetline(FILE *fp);

char *trim(char *str);


typedef struct
{
    int length;
    char **array;
} SPLIT_STRING;

SPLIT_STRING *split(const char *str, const char *delimiter);

void splitFree(SPLIT_STRING *strings);

#endif

