#include <stdio.h>
#include <stdlib.h>
#include "MList.h"

//修改顺序表中指定位置的元素,n为指定的位置，e为要替换的新元素
void AmendLocalList(Link *L, int n, ElemType e){
    //检测顺序表
    if(NULL == L){
        printf("顺序表为空！\n");
        return;
    }
    //检测位置合法性
    if(n < 1 || n > L->length){
        printf("位置不存在！\n");
        return;
    }
    //将新元素e替换到指定位置
    L->data[n-1] = e;
}

//修改顺序表中指定的元素,num为未修改前的旧数据，e为要替换的新数据
void AmendDataList(Link *L, ElemType num, ElemType e){
    //检测顺序表
    if(NULL == L){
        printf("顺序表为空！\n");
        return;
    }
    //遍历数组，寻找旧元素num的位置
    int n;
    for(int i = 0;i < L->length;i++){
        //若未找到该数据
        if(L->data[i] != num){
            while(i == L->length-1){
                printf("未找到该数据！\n");
                return;
            }
        }
        else if(L->data[i] == num){
            //若存在该数据，则将位置赋给n
            printf("存在该数据！\n");
            n = i;
            printf("要修改的数据%d的位置为%d\n", num, n+1);
            //将新数据替换到该位置
            L->data[n] = e;
        }
    }
}