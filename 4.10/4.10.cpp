#include "String.h"
#include <iostream>
using namespace std;
int main()
{
	String defaultStr;
	defaultStr.display();

	String customStr(100);
	customStr.input();
	customStr.display();

	String userStr; 
	userStr.input();
	userStr.display();

	String copyStr = userStr;
	copyStr.display();

	return 0;
}
