#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"

void init(container &ct)
{
	ct.size = 0;
	ct.begin = ct.end = nullptr;
}


void clear(container &ct)
{
	if (ct.begin == nullptr) return;
	auto temp = ct.begin;
	for (auto i = ct.begin; i; i = temp) {
		temp = i->next;
		clearNum(i->el_data); // �������� ������ �����
		delete i->el_data; // �������� ������� number
		delete i; // �������� ������� element
	}
}
