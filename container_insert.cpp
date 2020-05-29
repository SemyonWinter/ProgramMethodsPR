#include "container.h"

// Добавляет элемент в конец контейнера
void insert(container &ct, element * new_el)
{
	ct.size++;
	if (ct.begin) { // Если уже есть элементы
		// Связываем новый элемент
		new_el->prev = ct.end;
		new_el->next = nullptr;
		// Связываем старые элементы
		ct.begin->prev = new_el;
		ct.end->next = new_el;
		ct.end = new_el; // Меняем последний элемент
	} else { // Если элементов нет и добавляем первый
		new_el->next = new_el->prev = new_el;
		ct.end = ct.begin = new_el;
	}
}