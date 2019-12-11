//本项目用显式链接的方式调用dll
#include <iostream>

#include "windows.h"

using namespace std;

int main()
{
	//使用LoadLibrary函数装载动态库

	//使用GetProcAddress获取动态库中的函数

	//调用动态库中的MyStrcmp("Class","Classes")，期望输出结果 -1

	//调用动态库中的MyStrcmp("Class","Class")，期望输出结果 0

	//调用动态库中的MyStrcmp("Class","C")，期望输出结果 1

	//调用动态库中的MyStrcmp("Class",NULL)，期望输出结果 1

	//调用动态库中的MyStrcmp(NULL , NULL)，期望输出结果 0

	//使用FreeLibrary释放动态链接库

	return 0;
}