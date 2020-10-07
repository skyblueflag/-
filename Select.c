#include <stdio.h>
#include <stdlib.h>
#include "MList.h"

//查询顺序表中指定位置的数据,n为指定的位置
void SelectLocalList(Link *L, int n){
    //检测顺序表,若顺序表为空
    if(NULL == L){
        printf("顺序表为空！\n");
        return;
    }
    //检测位置的合法性
    if(n < 1 || n > L->length){
        printf("位置不存在！\n");
        return;
    }
    printf("位置存在合法！\n");
    printf("%d位置的元素为%d\n", n, L->data[n-1]);
    printf("\n");
}

//查询顺序表中指定的元素,e为指定的元素
void SelectDataList(Link *L, ElemType e){
    //检测顺序表是否为空
    if(NULL == L){
        printf("顺序表为空！\n");
        return;
    }
    //遍历数组寻找该元素
    for(int i = 0;i < L->length;i++){
        //若未找到该元素
        if(L->data[i] != e){
            while(i == L->length-1){
                printf("未找到该数据！\n");
                return;
            }
        }
        else if(L->data[i] == e){
            //若找到该数据
            printf("存在该数据！\n");
            //把该数据的下标位置赋给n
            int n = i;
            printf("数据%d在顺序表中的位置为%d\n", e, n+1);
            return;
        }
    }
    printf("\n");
}