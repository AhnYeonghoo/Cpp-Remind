#include "LinkedStack.hpp"
#include <cstddef>
#include <new>

void LinkedStack::Push(ItemType& item)
{
	if (IsFull()) throw FullStack();
	else
	{
		NodeType* location;
		location = new NodeType;
		location->info = item;
		location->next = topPtr;
		topPtr = location;
	}
}

void LinkedStack::Pop()
{
	if (IsEmpty()) throw EmptyStack();
	else
	{
		NodeType* tempPtr;
		tempPtr = topPtr;
		topPtr = topPtr->next;
		delete tempPtr;
	}
}

ItemType LinkedStack::Top()
{
	if (IsEmpty()) throw EmptyStack();
	else
	{
		return topPtr->info;
	}
}

bool LinkedStack::IsEmpty() const
{
	return (topPtr == NULL);
}

bool LinkedStack::IsFull() const
{
	NodeType* location;
	try
	{
		location = new NodeType;
		delete location;
		return false;
	}
	catch (std::bad_alloc)
	{
		return true;
	}
}

LinkedStack::~LinkedStack()
{
	NodeType* tempPtr;
	
	while (topPtr != NULL)
	{
		tempPtr = topPtr;
		topPtr = topPtr->next;
		delete tempPtr;
	}
}

LinkedStack::LinkedStack()
{
	topPtr = NULL;
}