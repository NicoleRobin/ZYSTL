#include "stack.h"

template<typename T>
stack::stack()
{
	
}

template<typename T>
stack::~stack()
{
	
}

template<typename T>
bool stack::empty() const
{
	return m_vecData.empty();
}

template<typename T>
size_type stack::size() const
{
	return m_vecData.size();
}

template<typename T>
value_type& stack::top()
{
	if (size() > 0)
	{
		return m_vecData[0];
	}

	return value_type();
}

template<typename T>
const value_type& stack::top() const
{

}

template<typename T>
void stack::push(const value_type &val)
{

}

template<typename T>
void stack::pop()
{

}