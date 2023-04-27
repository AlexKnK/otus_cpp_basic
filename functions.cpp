#include "functions.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>


int RandomValue(int level) {

	std::srand(std::time(NULL));

	int random_value = std::rand() % level;
	
	return random_value;
}

std::string WhatsYourName() {

	std::string a;
	std::cout << "Greatings, stranger. Tell me your name " << std::endl;
	std::getline(std::cin, a);

	return a;
}

int GetAnswer() {
	int a = 0;
	std::cout << "\nWhat is your number?" << std::endl;
	std::cin >> a;

	return a;
}

int LetsPlay(int number){
	int score = 0;
	bool is_win = false;
	while (!is_win) {
		int answer = GetAnswer();
		if (answer == number) {
			score++;
			std::cout << "\nGreat, you win!! Your score is " << score << "\n";
			is_win = true;
		}
		else if (answer > number) {
			std::cout << "Greater then my!" << std::endl;
			score++;
		}
		else if (answer < number) {
			std::cout << "Less then my!" << std::endl;
			score++;
		}
	}
	return score;
}

int WriteToFile(std::string file_name, std::string name, int score) {

	std::fstream high_score{ file_name, std::fstream::app };
	high_score << name << " " << score << std::endl;
	high_score.close();

	return 0;
}

int ReadFromFile(std::string name) {

	std::ifstream file{ name };

	if (file.is_open()) {
		std::cout << "Let's look at the top scorers.\n" << std::endl;
	}
	else
	{
		std::cout << "Error, file not found!\n\n" << std::endl;
		return -1;
	}

	std::cout << "\nScoreboard:\n";
	std::string player;

	do {
		
		std::getline(file, player);
		std::cout << player << std::endl;

	} while (!file.eof());
	file.close();

	return 0;
}
	