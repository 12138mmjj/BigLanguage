//本项目用显式链接的方式调用dll
#include <iostream>

#include "windows.h"

using namespace std;


int main()
{
	//使用LoadLibrary函数装载动态库

	//使用GetProcAddress获取动态库中的函数

	char str3[40] = "Class";

	//调用动态库中的strcmp函数，将str3分别与字符串"Classes"和"Class"进行比较，并分别输出结果

	//使用FreeLibrary释放动态链接库

	return 0;
}