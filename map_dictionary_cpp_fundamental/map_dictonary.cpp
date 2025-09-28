#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<string, string> my_dictionary;

	my_dictionary.insert(pair<string, string>("apple", "der apfel"));
	my_dictionary.insert(pair<string, string>("orange", "die orange"));
	my_dictionary.insert(pair<string, string>("banana", "die banane"));

	// change type of key 'apple'
	my_dictionary["apple"] = "Die Apfel";
	// change key "apple" to "apfel"
	string value = my_dictionary["apple"];
	my_dictionary["apfel"] = value;
	my_dictionary.erase("apple");

	for (auto& pair : my_dictionary)
	{
		cout << pair.first << " - " << pair.second << endl;
		
	}

	return 0;
}
