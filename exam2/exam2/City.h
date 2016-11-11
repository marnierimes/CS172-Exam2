#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Citizen.h"

class City
{
public:
	City(string cityName);
	~City();
	string getCityName();
	int populationSize();
	Citizen* getCitizenAtIndex(int index);
	void addCitizen(Citizen* citizen);
	Citizen* getCitizenWithId(int id);
	vector<Citizen*> getCitizensForFavoriteColor(string color);

private:
	string cityName;
	int population;
	vector<Citizen*> citizens;
};