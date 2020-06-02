#include "number_polar.h"


void out(number_polar* num, std::ofstream & ofstr)
{
	ofstr << "Angle: " << num->angle << ". ";
	ofstr << "Distance: " << num->dist << ". ";
	ofstr << std::endl;
}