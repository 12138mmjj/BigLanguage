// StrcpyLib.cpp : 定义静态库的函数strcpy。
//
#include "pch.h"
#include "StrStaticLib.h"

#include <stdexcept>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcpy(const char* src)
	{
		//实现函数strcpy
		int length = 0;
		const char* p1 = src;
		if (src == NULL) {
			return NULL;
		}
		while (*p1++ != 0)
		{
			length++;
		}
		char* dest = (char*)malloc(length + 1);
		for (int i = 0; i < length; i++)
		{
			dest[i] = src[i];
		}
		dest[length] = 0;
		return dest;
		//实现函数strcpy
		//函数功能为复制字符串
	
	}

}