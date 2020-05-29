#include "container.h"

// Записывает контейнер в поток
void out(container &ct, std::ofstream & ofstr)
{
	ofstr << ct.size << std::endl;
	if (ct.begin == nullptr) return;
	for (auto i = ct.begin; i; i = i->next) {
		out(i->el_data, ofstr);
	}
}