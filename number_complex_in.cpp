#include "number_complex.h"

number_complex* in_complex(std::ifstream & ifstr)
{
	bool found_err = false;
	number_complex *num = new number_complex;
	if (ifstr.eof()) found_err = true;
	ifstr >> num->real_double;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) found_err = true;
	ifstr >> num->imag_double;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) found_err = true;
	ifstr >> num->measure;
	if (ifstr.fail() || ifstr.bad() || found_err) {
		delete num;
		return nullptr;
	}
	return num;
}