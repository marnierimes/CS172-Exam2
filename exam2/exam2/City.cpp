#include<iostream>
#include<string>
#include<fstream>
#include"City.h"
using namespace std;

City::City(string cityName)
{
	//use input file for restoring existing populations
	string fileName = cityName + ".txt";
	fstream file;
	file.open()
}

City::~City()
{
	//save the population to a file
}

string City::getCityName()
{
	return cityName;
}

int City::getPopulationSize()
{
	return populationSize;
}

Citizen * City::getCitizenAtIndex(int index)
{
	return nullptr;
}

void City::addCitizen(Citizen * citizen)
{
	//something along the lines of..
	Citizen* citizen = new Citizen();
}

Citizen * City::getCitizenWithId(int id)
{
	return nullptr;
}

vector<Citizen*> City::getCitizenForFavoriteColor(string color)
{
	return vector<Citizen*>();
}