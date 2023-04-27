#pragma once
#include <string>

int RandomValue(int level);

std::string WhatsYourName();

int GetAnswer();

int LetsPlay(int number);

int WriteToFile(std::string file_name, std::string name, int score);

int ReadFromFile(std::string name);