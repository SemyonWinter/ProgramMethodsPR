#pragma once
#include <fstream>
#include <string>

struct number_fractal
{
	int numerator_int;
	int denominator_int;
};

void out(number_fractal * num, std::ofstream &ofstr);
number_fractal* inFract(std::ifstream &ifstr);