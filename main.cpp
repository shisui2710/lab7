#include <iostream>
#include "Human.h"
#include "Boss.h"
#include "Student.h"
#include "Windows.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Boss boss("������", "������", "���������", 18, 100);
	Human* man = &boss;
	man->print();

	Student Nick("������", "������", "���������", 18, false);
	man = &Nick;
	man->print();
}
