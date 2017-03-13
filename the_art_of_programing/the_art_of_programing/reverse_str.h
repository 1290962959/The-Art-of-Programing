#pragma once
#ifndef REVERSE_STR_H_
#define REVERSE_STR_H_

#include<iostream>
using namespace std;

//reverse a str queue
void reverse_str(char* str)
{
	if (str == nullptr)
	{
		cerr << "str is null" << endl;
		exit(-1);
	}

	int start{ 0 };  //pointer to the start element in str
	int end = strlen(str)-1; //pointer to the last element in str

	while (start < end)
	{
		char temp = str[end];
		str[end--] = str[start];
		str[start++] = temp;
	}
}

//reverse the element in str between m to n
void reverse_str_m2n(char* str, int m, int n)
{
	int str_length = strlen(str) - 1;
	if (m > n || m<0 || m>str_length || n<0 || n>str_length)
	{
		cout << "m= " << m << " n = " << n << endl;
		cerr << "m should < n , m and n both should between 0~str_length" << endl;
		exit(-1);
	}
	
	while (m < n)
	{
		char temp = str[n];
		str[n--] = str[m];
		str[m++] = temp;
	}
}

//abcd efg hmn. ==> hmn. efg abcd
void reverse_str_word(char* str)
{
	int i{ 0 };
	int j{ 0 };
	do
	{
		if (str[i] == ' '||str[i]=='\0')
		{
			reverse_str_m2n(str, j, i-1);
			j = i+1;
		}
	} while (str[i++] != '\0');

	reverse_str_m2n(str, 0, strlen(str) - 1);
}
#endif // !REVERSE_STR_H_
