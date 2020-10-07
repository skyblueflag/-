#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "MList.h"

//删除数组指定位置的数据，n为要删除数据的位置
void DeleteLocalList(Link *L, int n){
    //参数检测
    if(NULL == L){
        printf("参数错误，顺序表为空！\n");
        return;
    }
    //检测位置
    if(n < 1 || n > L->length){
        //若位置不存在
        printf("位置错误！\n");
        return;
    }

    //把要删除位置后的元素前移
    for(int i = n;i < L->length;i++){
        L->data[i-1] = L->data[i];
    }
    //容量-1
    L->MaxSize--;
    //长度-1
    L->length--;
    //申请新空间
    ElemType *p = (ElemType*)malloc(sizeof(ElemType)*L->MaxSize);
    //把删除数据后的数组赋值给新的空间
    for(int i = 0;i < L->length;i++){
        p[i] = L->data[i];
    }
    //释放原空间
    free(L->data);
    //把原数组头指针指向新的空间
    L->data = p;
}

//删除数组指定的数据,e为要删除的数据
void DeleteDataList(Link *L, ElemType e){
    //检测顺序表
    if(NULL == L){
        printf("顺序表为空！\n");
        return;
    }
    int n;
    //遍历数组，找到该数据的位置下标
    for(int i = 0;i < L->length;i++){
        if(L->data[i] == e){
            printf("存在该数据！\n");
            //将该位置赋值给n
            n = i;
            printf("该数据在数组中的下标位置为：%d\n", n);
            //将该位置后的元素前移
            for(int j = n;j < L->length;j++){
                L->data[j] = L->data[j+1];
            }
            //容量-1
            L->MaxSize--;
            //长度-1
            L->length--;
            //申请新空间
            ElemType *p = (ElemType*)malloc(sizeof(ElemType)*L->MaxSize);
            //把删除数据后的数组赋值给新的空间
            for(int j = 0;j < L->length;j++){
                p[j] = L->data[j];
            }
            //释放原空间
            free(L->data);
            //把原数组头指针指向新的空间
            L->data = p;
            return;
        }  
        else if(L->data[i] != e){
            //若未找到该数据
            while(i == L->length-1){
                printf("不存在该数据！\n");
                return;
            }
        }
    }
}
