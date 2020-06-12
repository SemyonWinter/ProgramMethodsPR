#include "number_fractal.h"

number_fractal *in_fract(std::ifstream & ifstr)
{
	bool found_err = false;
	number_fractal *num = new number_fractal;
	if (ifstr.eof()) found_err = true;
	ifstr >> num->numerator_int;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) found_err = true;
	ifstr >> num->denominator_int;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) found_err = true;
	ifstr >> num->measure;
	if (ifstr.fail() || ifstr.bad() || found_err || num->denominator_int == 0) {
		delete num;
		return nullptr;
	}

	return num;
}