#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "MList.h"

int main(void){
    Link L;
    printf("初始化\n");
    InitList(&L);
    Display(&L);

    printf("尾插法添加数据\n");
    for(int i = 0;i < 3;i++){
        AddTaiList(&L, i+1);
    }
    Display(&L);

    printf("头插法添加数据\n");
    for(int i = 4;i < 6;i++){
        AddHeadList(&L, i);
    }
    Display(&L);

    printf("添加数据到数组中间\n");
    InsertList(&L, 4, 7);
    Display(&L);

    printf("删除指定位置的数据\n");
    DeleteLocalList(&L, 3);
    Display(&L);

    printf("删除指定的数据\n");
    DeleteDataList(&L, 5);
    Display(&L);

    printf("删除指定的数据\n");
    DeleteDataList(&L, 9);
    Display(&L);

    printf("修改指定位置的数据\n");
    AmendLocalList(&L, 3, 8);
    Display(&L);

    printf("修改指定的数据\n");
    AmendDataList(&L, 3, 9);
    Display(&L);

    printf("查询顺序表中指定位置的元素\n");
    SelectLocalList(&L, 2);

    printf("查询顺序表中指定的元素!\n");
    SelectDataList(&L, 4);

    ClearList(&L);
    return 0;
}