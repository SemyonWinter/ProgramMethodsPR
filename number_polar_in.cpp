#include "number_polar.h"

number_polar* inPolar(std::ifstream & ifstr)
{
	bool found_err = false;
	number_polar *num = new number_polar;
	if (ifstr.eof()) found_err = true;
	ifstr >> num->angle;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) found_err = true;
	ifstr >> num->measure;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) found_err = true;
	ifstr >> num->dist;
	if (ifstr.fail() || ifstr.bad() || found_err) {
		delete num;
		return nullptr;
	}
	return num;
}