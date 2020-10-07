#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "MyList.h"

//初始化顺序表
Status InitList(Link *L){
    L->MaxSize = 5;
    L->data = (ElemType*)malloc(sizeof(ElemType)*L->MaxSize);
    L->length = 0;
    return OK;
}