#ifndef ITERATOR_TRAITS_H__
#define ITERATOR_TRAITS_H__

// 五种迭代器类型
struct input_iterator_tag {};
struct ouput_iterator_tag {};
struct forward_iterator_tag : public input_iterator_tag {};
struct bidirectional_iterator_tag : public forward_iterator_tag {};
struct random_iterator_tag : public bidirectional_iterator_tag {};

// 基类iterator
template <class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
struct iterator {
	typedef Category	iterator_category;
	typedef T			value_type;
	typedef Distance	difference_type;
	typedef Pointer		pointer;
	typedef Reference	reference;
};

// 通用traits
template <class I>
struct iterator_traits {
	typedef typename I::iterator_category	iterator_category;
	typedef typename I::value_type			value_type;
	typedef typename I::difference_type		difference_type;
	typedef typename I::pointer				pointer;
	typedef typename I::reference			reference;
};


// 针对指针的特化版本
template <class T>
struct iterator_traits<T*> {
	typedef random_access_iterator_tag iterator_category;
	typedef ptr_diff_t difference_type;
	typedef T* pointer;
	typedef T& reference;
};

// 针对const指针的特化版本
template <class T>
struct iterator_traits<const T*> {
	typedef random_access_iterator_tag iterator_category;
	typedef ptr_diff_t difference_type;
	typedef const T* pointer;
	typedef const T& reference;
};

#endif /* ITERATOR_TRAITS_H__ */
