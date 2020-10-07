#include <stdio.h>
#include <stdlib.h>
#include "MList.h"

//输出线性表
void Display(Link *L){
    printf("数组 = {");
    for(int i = 0;i < L->length;i++){
        printf("%d",L->data[i]);
        if(i < L->length-1){
            printf(", ");
        }
    }
    printf("}\n长度 = %d\n", L->length);
    printf("容量 = %d\n", L->MaxSize);
    printf("\n");
}