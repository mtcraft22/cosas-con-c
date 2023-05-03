#pragma once
#include"listas.h"
#include<stdio.h>
#define APPEND 0
#define REPLACE 1

typedef struct json
{
    Lista obj;
    void(*get)(struct json,FILE*);
    void(*dump)(struct json,FILE*,int);
    char*(*to_str)(struct json);
}Json_T;

void JSON_get_all(Json_T json,FILE* fichero);
void JSON_dump(Json_T json,FILE* fichero,int mode);
char* JSON_2_STRING(Json_T json);

