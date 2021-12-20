// StrDll.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier

#include "StrDll.h"

int MyStrcmp(const char* str1, const char* str2)
{
	int i = 0;
	if (str1 == NULL && str2) {
		return -1;
	}
	else if (str1 && str2 == NULL) {
		return 1;
	}
	else if (str1 == NULL && str2 == NULL) {
		return 0;
	}
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	}
	if (str1[i] == str2[i]) {
		return 0;
	}
	else if (str1[i] > str2[i]) {
		return 1;
	}
	else if (str1[i] < str2[i]) {
		return -1;
	}
}


