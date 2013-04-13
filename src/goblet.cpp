//goblet.cpp goblet program implementation file
//andyp 13.03.12

#include "goblet.h"
#include<cstdlib> //for random number generator
#include <iostream>
#include <iomanip>

characterObj::characterObj()
{
	string charName;
	char charSex;
	string charType;
	int charMagic,charStr,charHlth,charWlth;
	
	cout << "Enter Character Name : ";
	cin  >>  uniqueName;
	cout << "Enter Character sex (M)ale  or (F)emale :"; //TODO checks for this
	cin  >> sex;
	charTypeCheck();
	magic=randNumGen(10);
	strength=randNumGen(10);
	health=randNumGen(10);
	wealth=randNumGen(10);
	charDisplay();
}

void characterObj::charDisplay()
{
	cout << "Name     : " << uniqueName << endl;
	cout << "Gender   : " << sex <<endl;
	cout << "Type     : " << type << endl;
	cout << "Magic    : " << magic << endl;
	cout << "Strength : " << strength << endl;
	cout << "Health   : " << health  << endl;
	cout << "Wealth   : " << wealth  << endl;
}	
	
void characterObj::charTypeCheck() //TODO this is not working
{
	int checkChar = 0;
	do
	{
		cout << "Enter Character Type Wi(Z)ard,(W)itch,(H)ero, Her(O)ine,(S)ponsor, wor(K)er,(C)reature : "; //character types wizard/witch/hero/heroine/sponsor/worker/creature
	cin >> type;
	if ((type == 'Z') || (type == 'W') || (type == 'H') || (type == 'O') || (type == 'S') || (type == 'K') || (type == 'C'))
	{
			checkChar == '1';
		}
	else 
	{
	cout << " Re-enter a valid character type" << endl;
	checkChar == 0;
	}
}
	while (checkChar == 0);
	

}
	 
	
int characterObj::randNumGen(int range)
{
  int randomNum = ( rand()%range) +1;
  return(randomNum);
}
