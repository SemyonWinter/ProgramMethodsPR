#pragma once
#include "container_struct.h"


void clear(container &ct);
void init(container &ct);
void insert(container &ct, element*);
void in(container &ct, std::ifstream& ifstr);
void out(container &ct, std::ofstream& ofstr);
void multi_met(container &ct, std::ofstream& ofstr);