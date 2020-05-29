#include "container.h"

// —читывает все элементы из потока
void in(container &ct, std::ifstream & ifstr)
{
	int count_el;
	ifstr >> count_el;
	while (count_el) {
		int type_key;
		ifstr >> type_key;
		number *num_element = new number;
		num_element = in(ifstr, type_key);
		num_element->key = (type)(type_key-1);


		element *el_element = new element;
		el_element->next = el_element->prev = nullptr;
		el_element->el_data = num_element;

		insert(ct, el_element);
		count_el--;
	}
}