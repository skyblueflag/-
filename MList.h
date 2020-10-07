#ifndef MLIST_H_
#define MLIST_H_

typedef int ElemType;
typedef struct SqList{
    ElemType *data;  //数组
    int length;   //当前长度
    int MaxSize;  //数组最大容量
}Link;

//参数合法性检测，创建新空间
void Parament(Link*);
//初始化顺序表
void InitList(Link*);
//给数组添加数据到末尾,尾插法
void AddTaiList(Link*, ElemType);
//添加数据到数组开头，头插法
void AddHeadList(Link*, ElemType);
//添加数据到数组指定位置
void InsertList(Link*, int, ElemType);
//删除数组指定位置的数据
void DeleteLocalList(Link*, int);
//删除数组指定数据
void DeleteDataList(Link*, ElemType);
//修改顺序表指定位置元素
void AmendLocalList(Link*, int, ElemType);
//修改顺序表指定元素
void AmendDataList(Link*, ElemType, ElemType);
//查询顺序表中指定位置的数据
void SelectLocalList(Link*, int);
//查询顺序表中指定的数据
void SelectDataList(Link*, ElemType);
//输出线性表
void Display(Link*);
//释放空间，清空线性表
void ClearList(Link*);

#endif //MLIST_H_