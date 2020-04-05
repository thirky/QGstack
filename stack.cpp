#include"stack.h"
#include<iostream>
using namespace std;

QGStack::QGStack(unsigned int size)
{
	m_size = size;
	m_pBuffer = new ElemType[size];
	m_top = 0;
}
QGStack::~QGStack()
{
	delete[]m_pBuffer;
	m_pBuffer = nullptr;
}
bool QGStack::isEmpty()
{
	if (m_top == 0)
	{
		return true;
	}
	return false;
}
bool QGStack::isFull()
{
	if (m_top == m_size)
	{
		return true;
	}
	return false;
}
void QGStack::clear()
{
	m_top = 0;
}

unsigned int QGStack::Length()
{
	return m_top;
}
int QGStack::getTop()
{
	if (isEmpty())
	{
		cout << "操作失败：栈中元素为空";
		return 0;
	}
	return m_pBuffer[m_top - 1];
}
bool QGStack::push(ElemType& e)
{
	if (isFull())
	{
		cout << "操作失败：栈中元素已满" << endl;
		return false;
	}
	m_pBuffer[m_top] = e;
	m_top++;
	return true;
}
bool QGStack::pop(ElemType& e)
{
	if(isEmpty())
	{
		cout << "操作失败：栈中元素为空" << endl;
		return false;
	}
	m_top--;
	e = m_pBuffer[m_top];
	return true;
}
void QGStack::Traverse()
{
	for( int i=m_top-1;i>=0;i--)
	{
		cout << m_pBuffer[i] << endl;
	}
}



int main()
{
	cout << "1.入栈             " << "2.出栈        " << "3.得到栈顶元素             丨" << endl;
	cout << "                                                            丨" << endl;
	cout << "4.查询栈当前长度   " << "5.遍历        " << "6.清空栈                   丨" << endl;
	cout << "                                                            丨" << endl;
	cout << "7.      (空)       " << "8.   （空）   " << "9.退出                     丨" << endl;

	cout << "============================================================丨" << endl;
	int i,n;
	cout << "请确定栈的容量：";
	cin >> n;
	QGStack* p = new QGStack(n);
	cout << "请选择你的操作：";
	cin >> i;
	while (i!=9)
	{
		if (i == 1)
		{
				int k;
				cout << "请输入入栈数据：";
				cin >> k;
				p->push(k);
		}
		if (i == 2)
		{
			QGStack::ElemType g;
			p->pop(g);
		}
		if (i == 3)
		{
			cout << p->getTop() << endl;
		}
		if (i == 4)
		{
			cout << p->Length() << endl;
		}
		if (i == 5)
		{
			p->Traverse();
		}
		if (i == 6)
		{
			p->clear();
		}

		cout << "请选择你的操作：";
		cin >> i;
	}

	return 0;
}