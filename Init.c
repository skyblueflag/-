#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "MList.h"

//初始化顺序表
void InitList(Link *L){
    //初始化容量
    L->MaxSize = 5;
    //给数组开辟空间
    L->data = (ElemType*)malloc(sizeof(ElemType)*L->MaxSize);
    //初始化长度为0
    L->length = 0;
}