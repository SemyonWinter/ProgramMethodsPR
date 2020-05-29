#include "container.h"

// ��������� ������� � ����� ����������
void insert(container &ct, element * new_el)
{
	ct.size++;
	if (ct.begin) { // ���� ��� ���� ��������
		// ��������� ����� �������
		new_el->prev = ct.end;
		new_el->next = nullptr;
		// ��������� ������ ��������
		ct.begin->prev = new_el;
		ct.end->next = new_el;
		ct.end = new_el; // ������ ��������� �������
	} else { // ���� ��������� ��� � ��������� ������
		new_el->next = new_el->prev = new_el;
		ct.end = ct.begin = new_el;
	}
}