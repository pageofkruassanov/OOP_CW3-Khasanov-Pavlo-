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

bool String::MyStrStr(const char* str)
{
	bool isFind = false;

	if (length < strlen(str))
		return isFind;
	else if (strlen(str) < 1)
		return isFind;
	else if (str == nullptr)
		return isFind;

	int k = 0;
	for (int i = 0; i < length; i++) {
		if (!isFind) {
			if (this->str[i] == str[k]) {
				k++;
				isFind = true;
			}
		}
		else {
			if (this->str[i] != str[k]) {
				isFind = false;
				return isFind;
			}
			k++;
			if (str[k] == '\0')
				return isFind;
		}
	}
}

int String::MyChr(char c)
{
	int index = -1;

	for (int i = 0; i < length; i++) {
		if (str[i] == c) {
			index = i;
			return index;
		}
	}

	return index;
}

int String::MyStrLen()
{
	if (strlen(str) > 0) {
		for (int i = 0; i < length; i++) {
			if (str[i] == '\0') {
				return i + 1;
			}
		}
	}
	else
		return 0;
}

void String::MyStrCat(String& b)
{
	if (strlen(str) < 1 || strlen(b.str) < 1)
		return;
	else if (str == nullptr || b.str == nullptr)
		return;

	char* tempStr = new char[strlen(str) + strlen(b.str) + 1];
	for (int i = 0; i < strlen(str); i++)
		tempStr[i] = str[i];
	for (int i = 0, k = strlen(str); i < strlen(b.str); i++, k++)
		tempStr[k] = b.str[i];

	length = strlen(str) + strlen(b.str);
	tempStr[length] = '\0';
	delete[] str;
	str = tempStr;
}

void String::MyDelChr(char c)
{
	if (strlen(str) < 1 || str == nullptr)
		return;

	for (int i = 0; i < length; i++) {
		if (str[i] == c)
			str[i] = ' ';
	}
}

int String::MyStrCmp(String& b)
{
	if (strlen(str) > strlen(b.str))
		return 1;
	else if (strlen(str) < strlen(b.str))
		return -1;
	
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] > b.str[i])
			return 1;
		else if (str[i] < b.str[i])
			return -1;
	}
	return 0;
}

int String::getCount()
{
	return count;
}
