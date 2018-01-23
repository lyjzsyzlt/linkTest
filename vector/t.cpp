#include "stdafx.h"
#include "t.h"


t::t()
{
}

void t::f()
{
	extern int a;
	b = a;
	cout << "b=" << b << endl;
	//inita();
}
t::~t()
{
}
