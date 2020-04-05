#ifndef _QGSTACK_H_
#define _QGSTACK_H_


//顺序栈


class QGStack {
public:

	typedef int ElemType;

	QGStack(unsigned int size);//初始化栈

	~QGStack();//销毁栈

	bool isEmpty();//判断栈是否为空

	bool isFull();//判断栈是否为满

	void clear();//清空栈

	int getTop(); //得到栈顶元素

	unsigned int Length();//检测栈长度

	bool push(ElemType& e);//入栈

	bool pop(ElemType& e);//出栈

	void Traverse();//遍历

private:
	ElemType* m_pBuffer;
	unsigned int m_size;
	unsigned int m_top;//可表示栈顶，栈中当前元素等含义


};
#endif 