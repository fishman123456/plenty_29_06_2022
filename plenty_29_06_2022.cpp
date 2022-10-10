﻿// plenty_29_06_2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Контейнер set
// Тип set реализует ассоциативный контейнер "множество".
// Объект типа set хранит упорядоченное множество уникальных 
// объектов.Операции добавления, удаления и поиска 
// элемента в set требуют количество вычислений, 
// пропорциональное логарифму текущего размера множества.
// Эти характеристики достигаются специальным способом хранения 
// объектов - в виде двоичного дерева поиска.
// https://cpp-python-nsu.inp.nsk.su/textbook/sec3/ch3
// 09-10-2022 делаем с помощью контейнера set
// Тип set реализует ассоциативный контейнер "множество". 
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <set> 

using namespace std;

int main()
{
	int a_p = 0;
	int b_p = 0;
	int case_1{ 9 };
	int length = 4;
	set<int> set1{ a_p };// создаем множество A
	set<int> set2{ b_p };// создаем множество B
	//system("chcp 1251");
	setlocale(LC_ALL, "rus");
	for (int i = 0; i < length; i++)
	{
		set1.insert(i);
		set2.insert(i);
	}
	cout << endl;
	cout << "\t1_для добавления элемента в моножество A||B" << endl;
	cout << "\t2_для обьеденения двух множеств A + B" << endl;
	cout << "\t3_для удаления элемента из моножества A||B" << endl;
	cout << "\t4_разность двух множеств A - B" << endl;
	cout << "\t5_пересечение двух множеств A & B" << endl;
	cout << "\t6_присваивание множества A множеству B" << endl;
	cout << "\t7_сравнение двух множеств A & B" << endl;
	cout << "\t8_вывод на консоль двух множеств A & B" << endl;
	cout << "\t9_очистить экран" << endl;
	cout << "\t0_выход" << endl;
	cout << endl;
	cout << "\tвыберите операцию\t";
	cin >> case_1;
	cout << "\n";
	switch (case_1)
	{
	case  1:// 1_для добавления элемента в моножество A||B
	{
		char plenty_ch;
		int plenty_int;
		cout >> "Введите множество A || B\t";
		cin << plenty_ch;
		if (plenty_ch == 'a')
		{
			cout >> "введите элемент для добавления\t";
			cin << plenty_int;
			set1.insert(plenty_int);
		}
		else if (plenty_ == 'b') 
		{
			cout >> "введите элемент для добавления\t";
			cin << plenty_int;
			set2.insert(plenty_int);
		}
		else { cout >> "---"; }
		break;
	}
	case  2:// 2_для обьеденения двух множеств A + B
	{
		break;
	}
	case  3:// 3_для удаления элемента из моножества A||B
	{
		break;
	}
	case  4:// 4_разность двух множеств A - B
	{
		break;
	}
	case  5:// 5_пересечение двух множеств A & B
	{
		break;
	}
	case  6:// 6_присваивание множества A множеству B
	{
		break;
	}
	case  7:// 7_сравнение двух множеств A & B
	{
		break;
	}
	case  8:// 8_вывод на консоль двух множеств A & B
	{
		break;
	}
	case  9:// 9_очистить экран
	{
		break;
	}
	case  0:// 0_выход
	{
		break;
	}
	default:
		break;
	}
}

