#include "number_fractal.h"

number_fractal *inFract(std::ifstream & ifstr)
{
	number_fractal *num = new number_fractal;
	ifstr >> num->numerator_int;
	ifstr >> num->denominator_int;
	ifstr >> num->measure;
	return num;
}