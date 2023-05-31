#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String str1("Hello, my friend");
	String str2;
	// check strcopy:
	str1.strcopy(str2);
	str2.displayString();
	// check MyStrStr:
	cout << endl << str1.MyStrStr("Hello");
	// check MyChr:
	cout << endl << str1.MyChr('o');
	// check MyStrLen:
	cout << endl << str1.MyStrLen();
	// check MyStrCat:
	cout << endl;
	str1.MyStrCat(str2);
	str1.displayString();
	cout << endl << str1.getLength();
	// check MyDelChr:
	cout << endl;
	str1.MyDelChr(',');
	str1.displayString();
	// check MyStrCmp:

	str2.strcopy(str1);
	cout << endl << str1.MyStrCmp(str1);

	String str3("Hello, my frient");
	cout << endl << str1.MyStrCmp(str3);

}

