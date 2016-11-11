#pragma once
#include<iostream>
#include<string>
using namespace std;

class Citizen
{
public:
	Citizen(int id, string firstName, string lastName, string color);
	Citizen(Citizen* citizen);
	string getFirstName();
	string getLastName();
	int getId();
	string getFavoriteColor();
	void setFavoriteColor(string color);

private:
	int id;
	string firstName;
	string lastName;
	string favoriteColor;
};