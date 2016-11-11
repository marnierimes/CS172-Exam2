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
	while (getline(file, line))
	{
		
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
		//check if population is correct use
		for (int i = 0; i < citizens.size(); i++)
		{
			//output data into file
			file << i << " ";
		}
	}
}

string City::getCityName()
{
	return cityName;
}

int City::populationSize()
{
	return citizens.size();
}

Citizen * City::getCitizenAtIndex(int index)
{
	//i think using the vector of citizens for finding a certain index
}

void City::addCitizen(Citizen * citizen)
{
	//make sure to make a copy of the citizen so it isnt deleted forever
	//something along the lines of..
	citizens.push_back(citizen);
	population++;
}

Citizen * City::getCitizenWithId(int id)
{
	
}

vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
	for (int i = 0; i < citizens.size(); i++)
	{
		if ()
		{

			return citizens
		}
	}
	
}
