#include "container.h"

void clear(container &ct)
{
	if (ct.begin == nullptr) return;
	auto temp = ct.begin;
	for (auto i = ct.begin; i; i = temp) {
		temp = i->next;
		clear_num(i->el_data); // �������� ������ �����
		delete i->el_data; // �������� ������� number
		delete i; // �������� ������� element
	}
}
