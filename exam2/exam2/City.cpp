#include<iostream>
#include<string>
#include<fstream>
#include"City.h"
using namespace std;

City::City(string cityName)
{
	//use input file for restoring existing populations
	string fileName = cityName + ".txt";
	ifstream file(fileName.c_str());
	if (file.fail())
	{
		cout << "Cannot find file" << endl;
	}
	string line;
	while (!file.fail())
	{
		//input data
	}
	
}

City::~City()
{
	//save the population to a file of the city name
	string fileName = cityName + ".txt";
	ofstream file(fileName.c_str());
	if (!file.fail())
	{
		//check if populationSize is correct use
		for (int i = 0; i < populationSize; i++)
		{
			//output data into file
		}
	}
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
	//make sure to make a copy of the citizen so it isnt deleted forever
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
