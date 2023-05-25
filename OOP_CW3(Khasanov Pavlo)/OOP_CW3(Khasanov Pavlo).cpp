#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String str1("Hello, my friend");
	String str2;
	str1.strcopy(str2);
	str2.displayString();
}

