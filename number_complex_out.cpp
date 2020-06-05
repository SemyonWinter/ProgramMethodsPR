#include "number_complex.h"


void out(number_complex* num, std::ofstream & ofstr)
{
	ofstr << "Real: " << num->real_double << ". ";
	ofstr << "Imag: " << num->imag_double << ". ";
<<<<<<< HEAD
	ofstr << "Function " << new_function(num) << ".";
=======
	ofstr << "Measure " << num->measure << ". ";
>>>>>>> feature-3
	ofstr << std::endl;
}