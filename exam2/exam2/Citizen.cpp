#include<iostream>
#include"Citizen.h"
#include<string>
using namespace std;

Citizen::Citizen(int id, string firstName, string lasName, string color)
{

}

Citizen::Citizen(Citizen* citizen)
{

}

string Citizen::getFirstName()
{
	return firstName;
}

string Citizen::getLastName()
{
	return lastName;
}

int Citizen::getId()
{
	return id;
}

string Citizen::getFavoriteColor()
{
	return favoriteColor;
}

void Citizen::setFavoriteColor(string color)
{
	favoriteColor = color;
}