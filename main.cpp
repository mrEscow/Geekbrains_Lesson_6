#include <iostream>
#include <fstream>
#include <direct.h>
#include <string>
#include <windows.h>

#include "Initialization.h"
/*
1.�������� ���������, ������� ������� ��� ��������� �����, 
�������� �� 50-100 �������� � ������ (������� �������� �� �����);
2.�������� �������, ������������� ��� �����, 
�������������� ��������� �� ���������� � ����������� ���������� ������� ������ ������� �������.
3.* �������� ���������, ������� ��������� 
������������ �� ��������� ������������� ��� ������� ��������� ����� 
� ��������� ������������� ����� (��� �������� �������� ������ � ���������).
*/


int main() {
	using namespace std;

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	_mkdir(nameDirectory.c_str());

	fileOne.open(nameDirectory + "\\" + nameFile_1);
	fileTwo.open(nameDirectory + "\\" + nameFile_2);


	cout << "������� �����_1 : " ;

	getline(cin, tmp);
	fileOne << tmp;

	cout << "������� �����_2 : ";

	getline(cin, tmp);
	fileTwo << tmp;

	fileRezult.open(nameDirectory + "\\" + namefile_Rezult);

	

	fileOne.close();
	fileTwo.close();
	fileRezult.close();

	return 0;
}