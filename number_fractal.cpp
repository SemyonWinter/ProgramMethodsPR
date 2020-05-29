#include "number_fractal.h"


void out(number_fractal* num, std::ofstream & ofstr)
{
	ofstr << "Numerator: " << num->numerator_int << ". ";
	ofstr << "Denominator " << num->denominator_int << ". ";
	ofstr << std::endl;
}

number_fractal *inFract(std::ifstream & ifstr)
{
	number_fractal *num = new number_fractal;
	ifstr >> num->numerator_int;
	ifstr >> num->denominator_int;
	return num;
}