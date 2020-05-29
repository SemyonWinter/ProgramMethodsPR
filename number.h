#pragma once
#include "number_complex.h"
#include "number_fractal.h"
#include "number_struct.h"

void clearNum(number *num);
void out(number* num, std::ofstream &ofstr);
number * in(std::ifstream &ifstr, int type_key);