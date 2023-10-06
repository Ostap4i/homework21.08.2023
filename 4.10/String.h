#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class String
{
private:
	char* str;
	int length;
public:

	String()
	{
		length = 80;
		char* str = new char[length];
		str[0] = '/0 ';

	}

	String(int size) {
		length = size;
		char* str = new char[length];
		str[0] = '/0';

	}

	String(const char* inputStr) {
		length = strlen(inputStr) + 1;
		char* str = new char[length];
		strcpy(str, inputStr);
	}


	String(const String& other) {
		length = other.length;
		char* str = new char[length];
		strcpy(str, other.str);
	}


	void input() {
		cout << "Enter the line ";
		cin.getline(str, length);
	}

	// Метод для виведення рядка на екран
	void display() {
		cout << "Line: " << str << endl;
	}
	String() {
		delete[] str;
	}
};

