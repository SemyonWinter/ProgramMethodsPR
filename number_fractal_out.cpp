#include "number_fractal.h"


void out(number_fractal* num, std::ofstream & ofstr)
{
	ofstr << "Numerator: " << num->numerator_int << ". ";
	ofstr << "Denominator " << num->denominator_int << ". ";
<<<<<<< HEAD
	ofstr << "Function " << new_function(num) << ".";
=======
	ofstr << "Measure " << num->measure << ". ";
>>>>>>> feature-3
	ofstr << std::endl;
}