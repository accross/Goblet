//goblet.h 01.04.2013
//andyp
//base class for goblet prog

#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////
class goblet
{
	private:
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
