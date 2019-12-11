//本项目以隐式链接方式调用dll
#include <iostream>

using namespace std;

int main()
{
	//调用动态库中的MyStrcmp("Class","Classes")，期望输出结果 -1

	//调用动态库中的MyStrcmp("Class","Class")，期望输出结果 0

	//调用动态库中的MyStrcmp("Class","C")，期望输出结果 1

	//调用动态库中的MyStrcmp("Class",NULL)，期望输出结果 1

	//调用动态库中的MyStrcmp(NULL , NULL)，期望输出结果 0

	return 0;
}