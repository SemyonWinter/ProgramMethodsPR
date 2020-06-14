#include "container.h"

// Записывает контейнер в поток
void multi_met(container &ct, std::ofstream & ofstr)
{
	ofstr << "Multimet:" << std::endl;
	if (ct.begin == nullptr) return;
	for (auto i = ct.begin; i; i = i->next) {
		for (auto j = i; j; j = j->next) {
			if (i == j) continue;
			switch (i->el_data->key) {
				case type::POLAR:
					ofstr << "Printing POLAR and ";
					switch (j->el_data->key) {
						case type::FRACTAL:
							ofstr << "FRACTAL." << std::endl;
							break;
						case type::POLAR:
							ofstr << "POLAR." << std::endl;
							break;
						case type::COMPLEX:
							ofstr << "COMPLEX." << std::endl;
							break;
					}
					break;
				case type::FRACTAL:
					ofstr << "Printing FRACTAL and ";
					switch (j->el_data->key) {
						case type::FRACTAL:
							ofstr << "FRACTAL." << std::endl;
							break;
						case type::POLAR:
							ofstr << "POLAR." << std::endl;
							break;
						case type::COMPLEX:
							ofstr << "COMPLEX." << std::endl;
							break;
					}
					break;
				case type::COMPLEX:
					ofstr << "Printing COMPLEX and ";
					switch (j->el_data->key) {
						case type::FRACTAL:
							ofstr << "FRACTAL." << std::endl;
							break;
						case type::POLAR:
							ofstr << "POLAR." << std::endl;
							break;
						case type::COMPLEX:
							ofstr << "COMPLEX." << std::endl;
							break;
					}
					break;
			}
			out(i->el_data, ofstr);
			out(j->el_data, ofstr);
		}
	}
}