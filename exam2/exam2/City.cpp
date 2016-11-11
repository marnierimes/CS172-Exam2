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
	file.close;
}

string City::getCityName()
{
	return cityName;
}

int City::populationSize()
{
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
