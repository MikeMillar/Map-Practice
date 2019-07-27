#include <iostream>
#include <map> // enables you to use maps
using namespace std;

int main() {
	map<string, int> ages; // Creates map of strings and ints

	ages["Mike"] = 40; // Sets string to text, and second value to int
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	cout << ages["Raj"] << endl; // Similar to arrays, but first value is used to find second value

	cout << ages["Sue"] << endl; // Prints a name that wasn't initialized -- Actually adds a new one, named "Sue", sets second value to 0

	pair<string, int> addToMap("Peter", 100); // Elements of a map, are pair variables
	ages.insert(addToMap); // Adds pair to map
	ages.insert(pair<string, int>("George", 50)); // Adds pair to map
	ages.insert(make_pair("Penny", 32)); // func make_pair() will make a pair of right type

	if (ages.find("Vicky") != ages.end()) { // Searches map for value
		cout << "Found Vicky" << endl;
	}
	else {
		cout << "Key not found" << endl;
	}


	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) { // Loop through map
		cout << it->first << " " << it->second << endl; // Print out the first value and second value
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) { // Loop through map
		pair<string, int> age = *it;
		cout << age.first << " " << age.second << endl; // Print out the first value and second value
	}

	ages["Mike"] = 70; // Sets new value for "Mike"
	cout << ages["Mike"] << endl;

	cout << ages["Sue"] << endl;

	return 0;
}