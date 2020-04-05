#ifndef _QGSTACK_H_
#define _QGSTACK_H_


//˳��ջ


class QGStack {
public:

	typedef int ElemType;

	QGStack(unsigned int size);//��ʼ��ջ

	~QGStack();//����ջ

	bool isEmpty();//�ж�ջ�Ƿ�Ϊ��

	bool isFull();//�ж�ջ�Ƿ�Ϊ��

	void clear();//���ջ

	int getTop(); //�õ�ջ��Ԫ��

	unsigned int Length();//���ջ����

	bool push(ElemType& e);//��ջ

	bool pop(ElemType& e);//��ջ

	void Traverse();//����

private:
	ElemType* m_pBuffer;
	unsigned int m_size;
	unsigned int m_top;//�ɱ�ʾջ����ջ�е�ǰԪ�صȺ���


};
#endif 