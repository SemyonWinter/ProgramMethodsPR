#include "container.h"

// Записывает контейнер в поток
void out(container &ct, std::ofstream & ofstr, type ignore)
{
	ofstr << ct.size << std::endl;
	if (ct.begin == nullptr) return;
	for (auto i = ct.begin; i; i = i->next) {
		if (ignore == i->el_data->key) continue;
		if (i->el_data->data == nullptr) continue;
		out(i->el_data, ofstr);
	}
}