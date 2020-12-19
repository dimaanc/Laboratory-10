#ifndef _POLINOMIAL_
#define _POLINOMIAL_

#include <iostream>
#include <fstream>
#include "TMonom.h"
#include "TList.h"


using namespace std;

class TPolinomial : public TList<TMonomData>
{
public:
	TPolinomial();
	TPolinomial(TPolinomial& _v);

	TPolinomial& operator+= (TMonom& _v);

	TPolinomial operator* (TPolinomial& _v);
	TPolinomial operator+ (TPolinomial& _v);
	TPolinomial operator- (TPolinomial& _v);

};
#endif