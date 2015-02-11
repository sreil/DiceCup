#include <iostream>
#include <ctime>
#include <cstdlib>
#include "DiceCup.hpp"

using namespace std;


int main()
{
	srand(time(NULL));
	DiceCup cup;
	int NumDiceIn, NumFacesIn;

	cout << "How many dice would you like to roll? " << endl;
	cin >> NumDiceIn;
	cup.setNumDice(NumDiceIn);

	cout << "How many faces are on the dice? " << endl;
	cin >> NumFacesIn;
	cup.setNumFaces(NumFacesIn);


	cout << "You rolled a " <<cup.rollDice() << "!" << endl; //the return from below is outputted here

	return 0;
}

DiceCup::DiceCup()
{
	setNumDice(1); //initialize dice to 1 and faces to 2
	setNumFaces(2);
}

DiceCup::DiceCup(int numDiceIn,int numFacesIn)
{
	setNumDice(numDiceIn);
	setNumFaces(numFacesIn);
}

void DiceCup::setNumDice(int NumDiceIn)
{
	if(NumDiceIn > 0) //check if user entered number greater than 0
	{
		numDice = NumDiceIn;
	}
	else
	{
		numDice = 0;
		cout << "You must enter a positive number!" << endl;
		exit(EXIT_FAILURE); //from page 364 of book, chapter 6
	}
}
void DiceCup::setNumFaces(int NumFacesIn)
{
	if(NumFacesIn > 0) //check if user entered number greater than 0
	{
		numFaces = NumFacesIn;
	}
	else
	{
		numFaces = 0;
		cout << "You must enter a positive number!" << endl;
		exit(EXIT_FAILURE);
	}
}

int DiceCup::rollDice()
{
	int total = 0;

	for(int i = 0; i < numDice; i++)
	{
		total += rand()% numFaces + 1; //random number ran through for loop
	}

	return total; //outputs random number
}
