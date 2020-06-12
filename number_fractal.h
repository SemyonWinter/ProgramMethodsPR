#pragma once
#include <fstream>
#include <string>
#include "number_fractal_struct.h"

void out(number_fractal * num, std::ofstream &ofstr);
number_fractal* in_fract(std::ifstream &ifstr);
double new_function(number_fractal *num);