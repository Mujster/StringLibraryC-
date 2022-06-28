#include<iostream>
using namespace std;

class mystring {
	char* str;
	int length;
public:
	mystring()
	{
		str = nullptr;
		length = 0;
	}
	mystring(char* s)
	{
		length = str_len(s);
		str = new char[length];
		for (int i = 0; i < length; i++)
		{
			str[i] = s[i];
		}
		str[length] = '\0';
	}
	int str_len(char* s)
	{
		int count = 0;
		while (s[count])
			count++;
		return count;
	}
	void strcopy(mystring& obj,mystring& obj2)
	{
		delete[]obj.str;
		int length = str_len(obj2.str);
		obj.str = new char[length];
		for (int i = 0; i < length; i++)
		{
			obj.str[i] = obj2.str[i];
		}
		obj.str[length] = '\0';
	}
	void str_cat(mystring& obj, mystring& obj2)
	{
		char* temp;
		int k = 0, i, length = str_len(obj.str) + str_len(obj2.str) + 1;
		temp = new char[length];
		for (i = 0; obj.str[i] != '\0'; i++)
		{
			temp[i] = obj.str[i];
		}
		temp[str_len(obj.str)] = ' ';
		for (int j = i + 1; j < length; j++)
		{
			temp[j] = obj2.str[k];
			k++;
		}
		temp[length] = '\0';
		delete[]obj.str;
		obj.str = temp;
	}
	int str_cmp(mystring& obj, mystring& obj2)
	{
		if (str_len(obj.str) > str_len(obj2.str))
			return 1;
		if (str_len(obj.str) == str_len(obj2.str))
			return 0;
		if (str_len(obj.str) < str_len(obj2.str))
			return -1;
	}
	char front()
	{
		return str[0];
	}
	char back()
	{
		return str[length - 1];
	}
	int getlength()
	{
		return length;
	}
	void clear()
	{
		delete[]str;
		str = nullptr;
	}
	bool empty()
	{
		if (str = nullptr)
			return true;
		else
			return false;
	}
	~mystring()
	{
		delete[]str;
		length = 0;
	}
	void print()
	{
		cout << "String:\t" << str;
	}
};
