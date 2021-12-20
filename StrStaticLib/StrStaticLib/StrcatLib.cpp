// StrcatLib.cpp : 定义静态库的函数strcat
//
#include "pch.h"
#include "StrStaticLib.h"

#include <stdexcept>
#include <stdlib.h>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcat(const char* src1, const char* src2)
	{
		//实现函数strcat
		int length1 = 0, length2 = 0;
		const char* p1 = src1;
		const char* p2 = src2;
		if (p1 == NULL && p2 == NULL) {
			return NULL;
		}
		else {
			if (p1 == NULL && p2) {
				length1 = 0;
				for (; *p2++ != 0;) {
					length2++;
				}
			}
			if (p2 == NULL && p1) {
				length2 = 0;
				for (; *p1++ != 0;) {
					length1++;
				}
			}
			if (p1 != NULL && p2 != NULL)
				{
					for (; *p1++ != 0;) {
						length1++;
					}
					for (; *p2++ != 0;) {
						length2++;
					}
				}
			
		}
		for (; *p1++ != 0;) {
			length1++;
		}
		for (; *p2++ != 0;) {
			length2++;
		}
		char* dest = (char*)malloc(length1 + length2 + 1);
		for (int i = 0; i < length1; i++)
			dest[i] = src1[i];
		for (int i = 0; i < length2; i++)
			dest[length1 + i] = src2[i];
		dest[length1 + length2] = 0;
		return dest;
	}
}
