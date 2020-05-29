#pragma once
#include "element.h"

struct container
{
	element* begin;
	element* end;
	int size;
};


void clear(container &ct);
void init(container &ct);
void insert(container &ct, element*);
void in(container &ct, std::ifstream& ifstr);
void out(container &ct, std::ofstream& ofstr);
