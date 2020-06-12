#pragma once
#include <fstream>
#include <string>
#include "number_complex_struct.h"

void out(number_complex * num, std::ofstream &ofstr);
number_complex * in_complex(std::ifstream &ifstr);
double new_function(number_complex *num);