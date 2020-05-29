#pragma once
#include "number.h"

struct element
{
	number * el_data;
	element * next;
	element * prev;
};