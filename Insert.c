#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "MList.h"

//添加数据到数组末尾,e为要添加进去的数据,尾插法
void AddTaiList(Link *L, ElemType e){
    //检测参数，创建新的空间
    Parament(L);
    //把新数据添加到数组末尾
    L->data[L->length] = e;
    //长度+1
    L->length += 1;
}

//添加数据到数组开头，头插法
void AddHeadList(Link *L, ElemType e){
    //参数检测，创建新的空间
    Parament(L);
    //数组元素后移
    for(int i = L->length;i > 0;i--){
        L->data[i] = L->data[i-1];
    }
    //把新数据添加到数组开头
    L->data[0] = e;
    //长度+1
    L->length++;
}

//添加数据到数组指定位置
void InsertList(Link *L, int n, ElemType e){
    //检测参数，创建新的空间
    Parament(L);
    //检测添加位置的合法性
    if(n < 1){
        printf("位置错误！\n");
        return;
    }
    //如果位置大于数组长度,则把数据添加到数组末尾
    if(n > L->length){
        //位置大小固定为数组长度，即位置固定为数组末尾
        n = L->length;
    }
    //若参数合法且添加位置位于数组中间,指定位置后的元素后移
    for(int i = L->length;i > n-1;i--){
        L->data[i] = L->data[i-1];
    }
    //把新数据添加到指定位置
    L->data[n-1] = e;
    //长度+1
    L->length++;
}