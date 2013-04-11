//goblet.h 01.04.2013
//andyp
//base class for goblet prog

#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////
class goblet
{
	protected:
		string uniqueName;
	public:
		void setName(string name)
			{
				uniqueName = name;
			}
		string getName()
			{
				return(uniqueName);
			}
		goblet()
		{
				}
};

class characterObj: public goblet
{
	private:
		char sex; //M or F
		char type; //
		int magic,strength,health,wealth;
	public:
		characterObj();
		int randNumGen(int range);

		


 };


