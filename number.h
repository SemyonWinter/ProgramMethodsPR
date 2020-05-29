#pragma once
#include "number_complex.h"
#include "number_fractal.h"

enum type {
	COMPLEX,
	FRACTAL
};

struct number 
{
	type key;
	void *data;
};

void clearNum(number *num);
void out(number* num, std::ofstream &ofstr);
number * in(std::ifstream &ifstr, int type_key);