#include<iostream>
#include<string>
#include<cstdio>
#include"reverse_str.h"

using namespace std;

void test_reverse_str()
{
	cout << "Please input the str " << endl;
	string s;
	getline(cin, s);
	//reverse_str(const_cast<char*>(s.c_str()));

	reverse_str_word(const_cast<char*>(s.c_str()));
	//char s[10000];
	//gets_s(s, 10000);
	//reverse_str(s);
	cout << s << endl;
}

void main()
{
	//test_reverse_str();
	char a[] = "hello";
	cout << sizeof(a) / sizeof(char) << endl;
	cout << strlen(a) << endl;
	cout << "BoBo in running" << endl;
}