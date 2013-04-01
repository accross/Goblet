//object .h 01.04.2013
//andyp
//base class for goblet prog

#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////
class object
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
		object()
		{
				}
};
