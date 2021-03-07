#include <iostream>
#include <fstream>
#include <direct.h>
#include <string>
#include <windows.h>

#include "Initialization.h"
/*
1.Написать программу, которая создаст два текстовых файла, 
примерно по 50-100 символов в каждом (особого значения не имеет);
2.Написать функцию, «склеивающую» эти файлы, 
предварительно буферизуя их содержимое в динамически выделенный сегмент памяти нужного размера.
3.* Написать программу, которая проверяет 
присутствует ли указанное пользователем при запуске программы слово 
в указанном пользователем файле (для простоты работаем только с латиницей).
*/


int main() {
	using namespace std;

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	_mkdir(nameDirectory.c_str());

	fileOne.open(nameDirectory + "\\" + nameFile_1);
	fileTwo.open(nameDirectory + "\\" + nameFile_2);


	cout << "Введите текст_1 : " ;

	getline(cin, tmp);
	fileOne << tmp;

	cout << "Введите текст_2 : ";

	getline(cin, tmp);
	fileTwo << tmp;

	fileRezult.open(nameDirectory + "\\" + namefile_Rezult);

	

	fileOne.close();
	fileTwo.close();
	fileRezult.close();

	return 0;
}