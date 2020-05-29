#include "number_complex.h"


void out(number_complex* num, std::ofstream & ofstr)
{
	ofstr << "Real: " << num->real_double << ". ";
	ofstr << "Imag: " << num->imag_double << ". ";
	ofstr << std::endl;
}

number_complex* inComplex(std::ifstream & ifstr)
{
	number_complex *num = new number_complex;
	ifstr >> num->real_double;
	ifstr >> num->imag_double;
	return num;
}