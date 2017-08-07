#pragma once
namespace ZY
{
	template <typename T, class Alloc = alloc>
	class vector
	{
	public:
		// vector 的嵌套型别定义
		typedef T			value_type;
		typedef value_type*	pointer;
		typedef value_type*	iterator;
		typedef value_type&	reference;
		typedef size_t		size_type;
		typedef ptrdiff_t	difference_type;

	public:
		vector() : start(0), end(0), end_of_storage(0) {};
		vector(size_type n, const T& value) { }
		vector(int n, const T& value);
		vector(long n, const T& value);
		explicit vector(size_type n);
		~vector();

		reference front() { return *begin(); }
		reference back() { return *(end() - 1); }
		void push_back();
		void pop_back();
		iterator erase(iterator position)
		{

		}
		void resize(size_type new_size, const T& x)
		{

		}
		void resize(size_type new_size)
		{

		}
		void clear()
		{
			erase(begin(), end());
		}
	public:
		iterator begin() { return start; }
		iterator end() { return finish; }
		size_type size() const { return size_type(end() - begin()); }
		size_type capacity const
		{
			return size_type(end_of_storage - begin());
		}
		bool empty() const
		{
			return begin() == end();
		}
		reference operator[](size_type n)
		{
			return *(begin() + n);
		}

	protected:
		iterator start;
		iterator finish;
		iterator end_of_storage;
	};
}
