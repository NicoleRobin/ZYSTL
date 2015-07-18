#pragma once
#include <iostream>
namespace ZY
{
	class CZYstring
	{
	public:
		CZYstring(const char *str = NULL);
		CZYstring(const CZYstring &str); // copy constructor
		~CZYstring();

	public:
		// assign constructor
		CZYstring& operator= (const CZYstring& str);
		CZYstring& operator= (const char *s);

		int length();
	private:
		
	};
}