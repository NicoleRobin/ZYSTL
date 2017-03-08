#pragma once

#include <vector>

namespace ZY
{
	template<typename T>
	class stack
	{
		typedef T value_type;

	public:
		stack();
		~stack();

	public:
		bool empty() const;
		size_type size() const;
		value_type& top();
		const value_type& top() const;
		void push(const value_type &val);
		void pop();

	private:
		std::vector<T> m_vecData;
	};
}
