#pragma once
#include "container_struct.h"


void clear(container &ct);
void init(container &ct);
void insert(container &ct, element*);
void in(container &ct, std::ifstream& ifstr);
void out(container &ct, std::ofstream& ofstr, type ignore = (type)-1);
void sort(container &ct);
