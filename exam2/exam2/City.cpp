//I affirm that all code given below was written solely by me, Marnie Rimes,
//and that any help I received adhered to the rules stated for this exam
#include<iostream>
#include<string>
#include<fstream>
#include"City.h"
#include"Citizen.h"
using namespace std;

City::City(string cityName)
{
	this->cityName = cityName;
	//use input file for restoring existing populations
	string fileName = cityName + ".txt";
	ifstream file(fileName.c_str());
	if (!file.fail())
	{
		string line;
		while (getline(file, line))
		{
			Citizen* citizens = new Citizen();
			population++;
		}
	}
	
	file.close();
}

City::~City()
{
	//save the population to a file of the city name
	string fileName = cityName + ".txt";
	ofstream file(fileName.c_str());
	if (!file.fail())
	{
		
		for (int i = 0; i < citizens.size(); i++)
		{
			//output data into file
			file << citizens[i] << endl;
		}
	}
	//closes the file
	file.close;
}

string City::getCityName()
{
	//returns the city name
	return cityName;
}

int City::populationSize()
{
	//returns the population of the city
	return population;
}

Citizen * City::getCitizenAtIndex(int index)
{
	//returns specific citizen in the vector
	return citizens[index];
}

void City::addCitizen(Citizen * citizen)
{
	
	//adding the passed citizen to the citizen vector
	citizens.push_back(citizen);
	//increases the population of the city by one
	population++;
	
}

Citizen * City::getCitizenWithId(int id)
{
	
}

vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
	for (int i = 0; i < population; i++)
	{
		if (color == getCitizensForFavoriteColor())
		{
			
			return citizens
		}
	}
	
}
