#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"

// ��������� ������� � ����� ����������
void insert(container &ct, element * new_el)
{
	ct.size++;
	if (ct.begin) { // ���� ��� ���� ��������
		// ��������� ����� �������
		new_el->prev = ct.end;
		new_el->next = ct.begin;
		// ��������� ������ ��������
		ct.begin->prev = new_el;
		ct.end->next = new_el;
		ct.end = new_el; // ������ ��������� �������
	} else { // ���� ��������� ��� � ��������� ������
		new_el->next = new_el->prev = new_el;
		ct.end = ct.begin = new_el;
	}
}

// ��������� ��� �������� �� ������
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

// ���������� ��������� � �����
void out(container &ct, std::ofstream & ofstr)
{
	ofstr << ct.size << std::endl;
	if (ct.begin == nullptr) return;
	for (auto i = ct.begin; ; i = i->next) {
		out(i->el_data, ofstr);
		if (i == ct.end) break; // ����� �� ����� ����� ��������� ���������� ��������
	}
}

void init(container &ct)
{
	ct.size = 0;
	ct.begin = ct.end = nullptr;
}


void clear(container &ct)
{
	if (ct.begin == nullptr) return;
	auto temp = ct.begin;
	for (auto i = ct.begin; ; i = temp) {
		temp = i->next;
		clearNum(i->el_data); // �������� ������ �����
		delete i->el_data; // �������� ������� number
		delete i; // �������� ������� element
		if (temp == ct.begin) break; // ����� �� ����� ����� ��������� ���������� ��������
	}
}
