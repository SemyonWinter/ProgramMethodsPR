#pragma once
#include <fstream>
#include <string>
#include "number_polar_struct.h"

void out(number_polar * num, std::ofstream &ofstr);
number_polar * inPolar(std::ifstream &ifstr);
double new_function(number_polar * num);
double new_function(number_polar * num) {
	return num->dist*sin(num->angle);
}