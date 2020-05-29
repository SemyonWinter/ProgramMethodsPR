#pragma once
#include <fstream>
#include <string>

struct number_complex
{
	double real_double;
	double imag_double;
};

void out(number_complex * num, std::ofstream &ofstr);
number_complex * inComplex(std::ifstream &ifstr);