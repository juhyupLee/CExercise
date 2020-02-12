#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <map>
#include <bitset>
#include "Foo.h"
#include <vector>
#include <queue>
#include <limits>
#include <stack>
#include <chrono>
#include "TestClass.h"
#include <WinSock2.h>

//
//
//using namespace std;
//
//
//struct Queue
//{
//	int arr[5];
//	int rear;
//	int front;
//
//};
//
//int rear = 0;
//int front = 0;
//
//void Init_Queue(Queue* queue)
//{
//	memset(queue->arr, 0, sizeof(queue->arr));
//	queue->rear = 0;
//	queue->front = 0;
//}
//void push(Queue* queue, int data)
//{
//	queue->rear = queue->rear % 5;
//
//	if ((queue->rear + 1) % 5 == queue->front)//queue is full
//	{
//		return;
//	}
//
//	queue->arr[queue->rear++] = data;
//
//}
//int pop(Queue* queue)
//{
//
//	queue->front = queue->front % 5;
//
//	if (queue->front == queue->rear) // 비어있을때
//	{
//		return -1;
//	}
//
//
//	return queue->arr[queue->front++];
//
//}
//
//int Factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Factorial(n - 1);
//	}
//}
//
//int Pibonachi(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return Pibonachi(n - 1) + Pibonachi(n - 2);
//	}
//}
//
//
//void SelectSort(int arr[], int size)
//{
//	int min = INT_MAX;
//	int minIndex = 0;
//
//	for (int i = 0; i < size - 1; ++i)
//	{
//		for (int j = i; j < size; ++j)
//		{
//			if (arr[j] < min)
//			{
//				min = arr[j];
//				minIndex = j;
//			}
//		}
//		int temp = arr[i];
//		arr[i] = min;
//		arr[minIndex] = temp;
//		min = INT_MAX;
//	}
//}
//void BubbleSort(int arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = 0; j < size - i - 1; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//
//}
//
//struct Set
//{
//	int size;
//	int capacity;
//	int* buffer;
//};
//
//void SetInitialize(Set* set, int cap)
//{
//	set->capacity = cap;
//
//	set->buffer = (int*)malloc(sizeof(int) * cap);
//
//	set->size = 0;
//}
//bool IsMember(Set* set, int  data)
//{
//	for (int i = 0; i < set->size; ++i)
//	{
//		if (set->buffer[i] == data)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//void Add(Set* set, int data)
//{
//	if (set->capacity <= set->size)
//	{
//		return;
//	}
//	if (IsMember(set, data))
//	{
//		return;
//	}
//	set->buffer[set->size++] = data;
//
//}
//void Remove(Set* set, int data)
//{
//	if (!IsMember(set, data))
//	{
//		return;
//	}
//	if (set->size == 0)
//	{
//		return;
//	}
//
//	for (int i = 0; i < set->size; ++i)
//	{
//		if (set->buffer[i] == data)
//		{
//			// 버퍼의 마지막을 삭제할 대상에 복사하기
//			set->buffer[i] = set->buffer[set->size - 1];
//			break;
//		}
//	}
//
//	set->size--;
//
//
//}
//void Print(Set* set)
//{
//	cout << "[";
//	for (int i = 0; i < set->size; ++i)
//	{
//		cout << set->buffer[i] << " ";
//	}
//	cout << "]" << endl;
//}
//
//void Assign(Set* set1, const Set* set2)
//{
//
//	int max = set1->capacity < set2->size ? set1->capacity : set2->size;
//
//	for (int i = 0; i < max; ++i)
//	{
//		set1->buffer[i] = set2->buffer[i];
//	}
//
//	set1->size = set2->size;
//
//}
////
////struct Node
////{
////	int data;
////	Node* left;
////	Node* right;
////
////};
////
////Node* InitTree(int data)
////{
////	Node* root = (Node*)malloc(sizeof(Node));
////
////	root->data = data;
////	root->left = root->right = NULL;
////	
////
////	return root;
////	
////}
////
////Node* LeftTree(Node* root, int data)
////{
////	if (root == nullptr)
////	{
////		return false;
////	}
////	Node* curNode = root;
////
////	while (curNode->left!=NULL)
////	{
////		curNode = curNode->left;
////	}
////	
////	curNode->left = (Node*)malloc(sizeof(Node));
////
////	curNode->left->data = data;
////	curNode->left->left = NULL;
////	curNode->left->right = NULL;
////
////	return curNode->left;
////
////}
////
////Node* RightTree(Node* root, int data)
////{
////	if (root == nullptr)
////	{
////		return false;
////	}
////	Node* curNode = root;
////
////	while (curNode->right != NULL)
////	{
////		curNode = curNode->right;
////	}
////
////	curNode->right = (Node*)malloc(sizeof(Node));
////
////	curNode->right->data = data;
////	curNode->right->right = NULL;
////	curNode->right->left = NULL;
////
////	return curNode->right;
////}
////
////void Cycle(Node* root)
////{
////	if (root == NULL)
////	{
////		return;
////	}
////
////	Cycle(root->left);
////	cout << root->data << endl;
////	Cycle(root->right);
////
////}
//
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//
//struct DoubleLinkedList
//{
//	Node* head;
//	Node* tail;
//};
//
//bool InitLinkedList(DoubleLinkedList* list)
//{
//	list->head = (Node*)malloc(sizeof(Node));
//	list->tail = (Node*)malloc(sizeof(Node));
//
//	list->head->prev = NULL;
//	list->head->next = list->tail;
//	list->tail->prev = list->head;
//	list->tail->next = NULL;
//
//	return true;
//
//}
//
//void Add(DoubleLinkedList* list, int data)
//{
//	Node* pNewNode = (Node*)malloc(sizeof(Node));
//	pNewNode->data = data;
//	//헤드앞에 추가하는방식
//	// ㅁ ㅁ- ㅁ
//
//	if (list->head->next == list->tail)
//	{
//		pNewNode->next = list->tail;
//		list->tail->prev = pNewNode;
//
//		pNewNode->prev = list->head;
//		list->head->next = pNewNode;
//	}
//	else
//	{
//		pNewNode->next = list->head->next;
//		pNewNode->prev = list->head;
//		list->head->next = pNewNode;
//	}
//
//}
//
//bool Remove(DoubleLinkedList* link, int data)
//{
//
//	Node* curNode = link->head;
//
//	while (curNode->next != NULL)
//	{
//		if (curNode->next->data == data)
//		{
//			Node* deleteNode = curNode->next;
//
//			curNode->next = curNode->next->next;
//			curNode->next->next->prev = curNode;
//
//			free(deleteNode);
//
//			return true;
//		}
//		curNode = curNode->next;
//	}
//
//	return false;
//}
//
//
//DoubleLinkedList hashTable[1000];
//
//void HashInit()
//{
//	for (int i = 0; i < 1000; ++i)
//	{
//		InitLinkedList(&hashTable[i]);
//	}
//}
//void HashInsert(int data)
//{
//	int hashIndex = data % 10;
//
//	Add(&hashTable[hashIndex], data);
//
//
//}
//
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void QuickSort(int* arr, int left, int right)
//{
//
//	if (left >= right)
//	{
//		return;
//	}
//	int pivot = arr[left];
//	int low = left + 1;
//	int high = right;
//
//	while (low < high)
//	{
//		while (arr[low] < pivot)
//		{
//			++low;
//		}
//		while (arr[high] > pivot)
//		{
//			--high;
//		}
//		//SWAP
//		if (low < high)
//		{
//			Swap(arr[high], arr[low]);
//		}
//
//	}
//	if (arr[left] > arr[high])
//	{
//		Swap(arr[left], arr[high]);
//	}
//	//Pivot 기준 왼쪽 
//	QuickSort(arr, left, high - 1);
//	QuickSort(arr, high + 1, right);
//
//}
//
//int main()
//{
//	//Node* root = InitTree(10);
//	//Node* root1 = LeftTree(root, 9);
//	//Node* root1_1 = LeftTree(root1, 6);
//	//Node* root1_2 = RightTree(root1, 15);
//
//
//	//Node* root2 = RightTree(root, 40);
//	//Node* root2_1= LeftTree(root2, 30);
//	//Node* root2_2 = RightTree(root2_1, 50);
//
//	//Cycle(root);
//
//
//	//DoubleLinkedList dbLink;
//
//	//InitLinkedList(&dbLink);
//
//	//Add(&dbLink, 10);
//	//Add(&dbLink, 20);
//	//Add(&dbLink, 30);
//	//Add(&dbLink, 40);
//	//Add(&dbLink, 50);
//
//	//Node* curNode = dbLink.head;
//
//	//while (curNode->next != dbLink.tail)
//	//{
//	//	cout << curNode->next->data << endl;
//	//	curNode = curNode->next;
//	//}
//
//	//Remove(&dbLink, 30);
//
//	//curNode = dbLink.head;
//
//	//while (curNode->next != dbLink.tail)
//	//{
//	//	cout << curNode->next->data << endl;
//	//	curNode = curNode->next;
//	//}
//	//
//
//	int Arr[3] = { 3,3,3 };
//
//	QuickSort(Arr, 0, 2);
//
//	for (int i = 0; i < 9; ++i)
//	{
//		cout << Arr[i] << " ";
//	}
//
//	cout << endl;
//}
#include <stdio.h>
#include <algorithm>
using namespace std;
//
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void PrintList(int list[])
//{
//	printf("size: %d", list[0]);
//	printf("  [");
//	for (int i = 1; i <= list[0]; ++i)
//		printf("%d ", list[i]);
//	printf("] ");
//	for (int i = list[0] + 1; i <= 8; ++i)
//		printf("%d ", list[i]);
//	printf("\n");
//}
//void Push_heap(int list[])
//{
//	++list[0];
//	int size = list[0];
//	int child = size;
//	int parent = child / 2;
//
//	while (parent > 0)
//	{
//		if (list[parent] < list[child])
//			Swap(&list[parent], &list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void Make_heap(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		Push_heap(list);
//}
//void Pop_heap(int list[])
//{
//	int size = --list[0];
//	Swap(&list[1], &list[size + 1]);
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//			child = child + 1;
//		if (list[parent] < list[child])
//			Swap(&list[parent], &list[child]);
//		parent = child;
//		child = parent * 2;
//	}
//}
//void Sort_heap(int list[])
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//		Pop_heap(list);
//}
//class Parent
//{
//private:
//	int a;
//	int b;
//
//};
//
//class Child : public Parent
//{
//private:
//	int c;
//
//public:
//	int d;
//
//};
//
//class Test
//{
//public:
//	int m_foo;
//	explicit Test (int foo)
//		: m_foo(foo)
//	{
//	}
//
//};
//
//void Print_Foo(Test foo)
//{
//	cout << foo.m_foo << endl;
//}
//
//class TClass
//{
//public:
//	
//	int operator* (TClass rhs)
//	{
//		return rhs.mData * mData;
//	}
//	int mData;
//
//
//};
//
//void TestFunc(TClass a)
//{
//
//}
//
//int operator+(TClass& lhs, TClass& rhs)
//{
//	return lhs.mData + rhs.mData;
//}
//
//class TestClass2
//{
//	
//public:
//	int mData;
//	
//	char operator[](int index)
//	{
//		return text[index];
//	}
//	const char& operator[](int index)  const
//	{
//		return text[index];
//
//	}
//public:
//	std::string text;
//
//};
//
//struct Mother
//{
//
//public:
//	void TestFunc()
//	{
//
//	}
//};
//struct TestStruct: public Mother
//{
//	TestStruct()
//	{
//		cout << "구조체 생성자이지롱";
//	}
//	~TestStruct()
//	{
//		cout << "구조체 소멸자이지롱" << endl;
//	}
//};
//
//class Test3
//{
//public:
//	Test3(const char* p)
//	{
//		mP = new char(3);
//
//
//	}
//	char& operator[](std::size_t index) const
//	{
//		return mP[index];
//	}
//
//private:
//	char* mP;
//};

class Parent
{

private:
	int a;
	int b;
	int c;

public:
	
	virtual void TestFunc()
	{
		cout << "Parent" << endl;
	}

	virtual ~Parent()
	{
		cout << "Source 소멸" << endl;
	}
};

class Child :public Parent
{
public:
	void TestFunc()
	{
		cout << "Child" << endl;
	}
	~Child()
	{
		cout << "Child 소멸" << endl;
	}
	
};

class GrandChild :public Child
{
public:
	~GrandChild()
	{
		cout << "Grand 소멸" << endl;
	}
};


int main()
{
	
	printf("%x", htons(0x1234));
	SOCK_DGRAM
}
