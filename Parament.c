#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "MList.h"

//检测参数，创建新的空间
void Parament(Link *L){
    //检测参数,若线性表为空
    if(NULL == L){
        printf("参数错误，线性表为空！\n");
        return;
    }
    //如果内存已满
    if(L->length == L->MaxSize){
        //内存+1
        L->MaxSize += 1;
        //申请新的空间
        ElemType *p = (ElemType*)malloc(sizeof(ElemType)*L->MaxSize);
        //初始化新空间
        memset(p, 0, sizeof(ElemType)*L->MaxSize);
        //把原空间的数据复制到新空间
        for(int i = 0;i < L->length;i++){
            p[i] = L->data[i];
        }
        //释放原空间
        free(L->data);
        //将数组地址指向新空间
        L->data = p;
    }
}