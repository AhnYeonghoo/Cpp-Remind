
class FullStack {  };
class EmptyStack { };


template <class T>
class StackType
{
private:
	T* value;
	int maxStack;
	int top;
	
public:
	StackType();
	StackType(int max);
	~StackType();
	bool IsFull() const;
	bool IsEmpty() const;
	void Push(T& item);
	void Pop();
	T Top();
};

template<class T>
StackType<T>::StackType(int max)
{
	maxStack = max;
	top = -1;
	value = new T[maxStack]; // 동적 메모리 할당
}

template<class T>
StackType<T>::StackType()
{
	maxStack = 500;
	top = -1;
	value = new T[maxStack];
}

template<class T>
bool StackType<T>::IsFull() const
{
	return (top == maxStack-1);
}

template<class T>
bool StackType<T>::IsEmpty() const
{
	return (top == -1);
}

template<class T>
void StackType<T>::Push(T& item)
{
	if (IsFull())
		throw FullStack();
	top++;
	value[top] = item;
}

template<class T>
void StackType<T>::Pop()
{
	if (IsEmpty())
		throw EmptyStack();
	top--;
}

template<class T>
T StackType<T>::Top()
{
	if (IsEmpty())
		throw EmptyStack();
	return value[top];
}

template<class T>
StackType<T>::~StackType()
{
	delete[] value;
}