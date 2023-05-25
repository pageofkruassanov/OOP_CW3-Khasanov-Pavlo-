#include "String.h"

int String::count = 0;

String::String(int size)
{
	str = new char[size + 1];
	length = size;
	count++;
}

String::String(const char* s)
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str,length + 1, s);
	count++;
}

String::~String()
{
	delete[] str;
	count--;
}

void String::inputString()
{
	cin.getline(str, length);
}

void String::displayString()
{
	cout << str;
}

int String::getLength()
{
	return length;
}

void String::strcopy(String& obj)
{
	if (obj.str == nullptr || strlen(obj.str) < 1)
		return;

	for (int i = 0; i < length && i < obj.length; i++) {
		obj.str[i] = str[i];
		if (str[i + 1] == '\0') {
			obj.str[i + 1] = '\0';
			break;
		}
	}
}

int String::getCount()
{
	return count;
}
