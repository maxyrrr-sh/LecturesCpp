#include <iostream>
#include <string>

using namespace std;

struct Student {
	string firstName;
	string lastName;
	int age;
	string groupName;


	string getInfo() {
		string s = firstName + " " + 
					lastName + "\nAge: " + 
					to_string(age) + 
					"\nGroup: " 
					+ groupName;
		return s;
	}
};