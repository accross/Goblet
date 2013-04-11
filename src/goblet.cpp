//goblet.cpp goblet program implementation file
//andyp 13.03.12

#include "goblet.h"
#include<cstdlib> //for random number generator
#include <iostream>

characterObj::characterObj()
{
	string charName;
	char charSex;
	string charType;
	int charMagic,charStr,charHlth,charWlth;
	
	cout << "Enter Character Name : ";
	cin  >>  uniqueName;
	cout << "Enter Character sex (M or F) :"; //TODO checks for this
	cin  >> sex;
	cout << "Enter Chacter Type : "; //TODO Check for this enum for type
	cin >> type;
	magic=randNumGen(10);
	strength=randNumGen(10);
	health=randNumGen(10);
	wealth=randNumGen(10);
	//TODO display character output routine
}

	
	
int characterObj::randNumGen(int range)
{
  int randomNum = ( rand()%range) +1;
  return(randomNum);
}
