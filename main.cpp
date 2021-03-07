#include <iostream>
#include <fstream>
#include <direct.h>
#include <string>

#include "Initialization.h"



int main() {

	setlocale(LC_ALL, "ru");

	_mkdir(nameDirectory.c_str());

	fileOne.open(nameDirectory+"\\"+nameFile);

	fileOne.close();

	return 0;
}