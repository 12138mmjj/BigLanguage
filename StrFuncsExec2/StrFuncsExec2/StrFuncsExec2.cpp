//本项目以隐式链接方式调用dll
#include <iostream>
#include"StrDll.h"
using namespace std;

int main()
{
	//调用动态库中的MyStrcmp("Class","Classes")，期望输出结果 -1
	cout << MyStrcmp("Class", "Classes") << endl;
	//调用动态库中的MyStrcmp("Class","Class")，期望输出结果 0
	cout << MyStrcmp("Class", "Class") << endl;
	//调用动态库中的MyStrcmp("Class","C")，期望输出结果 1
	cout << MyStrcmp("Class", "C") << endl;
	//调用动态库中的MyStrcmp("Class",NULL)，期望输出结果 1
	cout << MyStrcmp("Class", NULL) << endl;
	//调用动态库中的MyStrcmp(NULL , NULL)，期望输出结果 0
	cout << MyStrcmp(NULL, NULL) << endl;
	return 0;
}