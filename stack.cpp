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
		cout << "����ʧ�ܣ�ջ��Ԫ��Ϊ��";
		return 0;
	}
	return m_pBuffer[m_top - 1];
}
bool QGStack::push(ElemType& e)
{
	if (isFull())
	{
		cout << "����ʧ�ܣ�ջ��Ԫ������" << endl;
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
		cout << "����ʧ�ܣ�ջ��Ԫ��Ϊ��" << endl;
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
	cout << "1.��ջ             " << "2.��ջ        " << "3.�õ�ջ��Ԫ��             ح" << endl;
	cout << "                                                            ح" << endl;
	cout << "4.��ѯջ��ǰ����   " << "5.����        " << "6.���ջ                   ح" << endl;
	cout << "                                                            ح" << endl;
	cout << "7.      (��)       " << "8.   ���գ�   " << "9.�˳�                     ح" << endl;

	cout << "============================================================ح" << endl;
	int i,n;
	cout << "��ȷ��ջ��������";
	cin >> n;
	QGStack* p = new QGStack(n);
	cout << "��ѡ����Ĳ�����";
	cin >> i;
	while (i!=9)
	{
		if (i == 1)
		{
				int k;
				cout << "��������ջ���ݣ�";
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

		cout << "��ѡ����Ĳ�����";
		cin >> i;
	}

	return 0;
}