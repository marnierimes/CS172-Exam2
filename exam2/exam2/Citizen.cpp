#include<iostream>
#include"Citizen.h"
#include<string>
using namespace std;

Citizen::Citizen(int id, string firstName, string lastName, string color)
{
	//Creates new person with given id, first name, last name, and favorite color
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
	favoriteColor = color;
}

Citizen::Citizen(Citizen* citizen)
{
	//Copy constructor
	Citizen* citizen = new Citizen(citizen);
	
}

string Citizen::getFirstName() 
{
	//returns first name
	return firstName;
}

string Citizen::getLastName()
{
	//returns last name
	return lastName;
}

int Citizen::getId()
{
	//returns id
	return id;
}

string Citizen::getFavoriteColor()
{
	//returns favorite color
	return favoriteColor;
}

void Citizen::setFavoriteColor(string color)
{
	//sets favorite color to new color given
	favoriteColor = color;
}