#include "number_complex.h"

number_complex* inComplex(std::ifstream & ifstr)
{
	number_complex *num = new number_complex;
	ifstr >> num->real_double;
	ifstr >> num->imag_double;
	return num;
}