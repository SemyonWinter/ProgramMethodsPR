#pragma once
#include <fstream>
#include <string>
#include "number_polar_struct.h"

void out(number_polar * num, std::ofstream &ofstr);
number_polar * in_polar(std::ifstream &ifstr);

double new_function(number_polar * num);
