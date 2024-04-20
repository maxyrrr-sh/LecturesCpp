#include <iostream>
#include "Header.h"

using namespace std;


int main()
{
	Student s1;
	s1.firstName = "Ivan";
	s1.lastName = "Petrenko";
	s1.age = 16;
	s1.groupName = "11A";
	cout << s1.getInfo();

	return 0;

}
