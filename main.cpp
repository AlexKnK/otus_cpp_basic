#include <iostream>
#include <fstream>
#include "functions.h"
#include <conio.h>


int main() {

	system("chcp 1251");
	system("cls");
	
	std::string file_name = "highscore.txt";
	std::string name = WhatsYourName();
	
	int number = RandomValue();
	int score = LetsPlay(number);

	WriteToFile(file_name, name, score);
	ReadFromFile(file_name);
	_getch();

	return 0;
}