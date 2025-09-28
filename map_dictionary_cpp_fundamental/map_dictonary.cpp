#include <iostream>
#include <string>
#include<map>
using namespace std;

int main()
{
	map<string, string> my_dictionary;

	my_dictionary.insert(pair<string, string>("Fruit", "Apple"));
	
	for (auto& pair : my_dictionary)
	{
		cout << pair.first << " - " << pair.second;
		
	}

	return 0;
}
