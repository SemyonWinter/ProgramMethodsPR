#pragma once
#include <fstream>
#include <string>
#include "number_complex_struct.h"

void out(number_complex * num, std::ofstream &ofstr);
number_complex * inComplex(std::ifstream &ifstr);