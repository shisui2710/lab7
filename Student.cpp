#include <iostream>
#include "Student.h"

Student::Student(string s_n, string n, string m_n, int a, bool o_l)
{
	surname = s_n;
	name = n;
	midname = m_n;
	age = a;
	on_lesson = o_l;
}

void Student::print()
{
	cout << " ������ �� �������:" << endl << " �������: " << surname << endl << " ���: " << name << endl << " ��������: " << midname << endl << " �������: " << age << endl << " ������������ �� �������? ";
	if (on_lesson == true)
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "���" << endl;
	}
}
