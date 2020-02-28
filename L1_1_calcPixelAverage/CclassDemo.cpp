#include "stdafx.h"
#include "CclassDemo.h"


CclassDemo::CclassDemo()
{
}


CclassDemo::~CclassDemo()
{
}

int CclassDemo::maxVal(int a, int b)
{
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}