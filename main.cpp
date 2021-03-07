#include <iostream>

#include <fstream>
//#include <ifstream>
//#include <ofstream>

#include <direct.h>
#include <string>




int main() {

	setlocale(LC_ALL, "ru");

	std::string nameDirectory = "resources";

	_mkdir(nameDirectory.c_str());

	std::ofstream fileOne;

	std::string nameFile= "file_1.txt";

	fileOne.open(nameDirectory+"\\"+nameFile);

	fileOne.close();

	return 0;
}