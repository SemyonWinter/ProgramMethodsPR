#include "number_complex.h"


void out(number_complex* num, std::ofstream & ofstr)
{
	ofstr << "Real: " << num->real_double << ". ";
	ofstr << "Imag: " << num->imag_double << ". ";
	ofstr << std::endl;
}