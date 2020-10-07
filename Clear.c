#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "MList.h"

//清空线性表释放空间
void ClearList(Link *L){
    free(L->data);
    L->length = 0;
    L->MaxSize = 0;
}