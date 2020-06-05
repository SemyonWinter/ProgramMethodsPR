#include "number_polar.h"

number_polar* inPolar(std::ifstream & ifstr)
{
	number_polar *num = new number_polar;
	ifstr >> num->angle;
	ifstr >> num->dist;
	ifstr >> num->measure;
	return num;
}