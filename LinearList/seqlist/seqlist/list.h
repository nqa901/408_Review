#include <iostream>
using namespace std;

typedef int elementType;	//定义元素类型

//定义线性表数据结构
//动态顺序表
typedef struct 
{
	int len;				//线性表长度
	elementType* data;		//动态分配数组的指针
}SeqList;

void InitList(SeqList* L);


//初始化
void InitList(SeqList *L)
{
	L->data = NULL;			//指针置空
	L->len = 0;				//长度置零
}

//销毁线性表
int DestroyList(SeqList** L) 
{
	if (NULL == L || NULL == *L) {
		return -1;
	}
}