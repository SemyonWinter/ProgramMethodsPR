#include "container.h"

void sort(container &ct)
{
	if (ct.begin == nullptr) return;
	for (auto i = ct.begin; i->next; i = i->next) {
		for (auto j = i->next; j; j = j->next) {
			if (comparator(i->el_data, j->el_data)) {
				auto z = i->el_data;
				i->el_data = j->el_data;
				j->el_data = z;
			}
		}
	}
}
