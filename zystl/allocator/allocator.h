#ifndef _ALLOCATOR_H__
#define _ALLOCATOR_H__

namespace ZY
{
	template <class T>
	class allocator
	{
	public:
		typedef T			value_type;
		typedef T*			pointer;
		typedef const T*	const_pointer;
		typedef T&			reference;
		typedef const T&	const_reference;
		typedef size_t		size_type;
		typedef ptrdiff_t	difference_type;

	public:

	};

}

#endif /* _ALLOCATOR_H__ */
