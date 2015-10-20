#pragma once
namespace ZY
{
	class string
	{
	public:
		string(const char *str = NULL);
		string(const string &str); // copy constructor
		~string();

	public:
		// assign constructor
		string& operator= (const string& str);
		string& operator= (const char *s);

		int length();
	private:
		
	};
}