#include <iostream>
using namespace std;

typedef int elementType;	//����Ԫ������

//�������Ա����ݽṹ
//��̬˳���
typedef struct 
{
	int len;				//���Ա���
	elementType* data;		//��̬���������ָ��
}SeqList;

void InitList(SeqList* L);


//��ʼ��
void InitList(SeqList *L)
{
	L->data = NULL;			//ָ���ÿ�
	L->len = 0;				//��������
}

//�������Ա�
int DestroyList(SeqList** L) 
{
	if (NULL == L || NULL == *L) {
		return -1;
	}
}