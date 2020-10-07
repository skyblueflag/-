#ifndef MYLIST_H_
#define MYLIST_H_
#define TRUE 1
#define ERROR 0
#define OK 1

typedef int ElemType,Status;
typedef struct Node{
    ElemType *data;
    int length; //数组长度
    int MaxSize; //数组当前最大容量
}Link;

//初始化顺序表
Status InitList(Link*);
//顺序表添加元素
void AddList(Link*,ElemType);
//给顺序表插入元素
Status InsertList(Link*, int, ElemType);
//删除顺序表中指定位置的元素
Status DeleteLocList(Link*, int);
//删除顺序表中指定的元素
Status DeleteDaList(Link*, ElemType);
//修改顺序表中的元素
Status AmendList(Link*, int, ElemType);
//查询顺序表中指定位置的元素
Status SelectLocList(Link*, int);
//查询顺序表中的指定元素
Status SelectDaList(Link*, ElemType);
//打印顺序表
void Display(Link*);
//参数检测，申请空间
void Parament(Link*);
//释放空间，清空线性表
void FreeFun(Link*);

#endif //MYLIST_H_