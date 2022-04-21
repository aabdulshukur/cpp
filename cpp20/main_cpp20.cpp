
#include <iostream>
#include <string>
#include <map>

import mystring;

int main() {
	std::string word = "sahas";
	bool out = mystring::is_palindrome(word);
	if(out==1)
		printf("%s is Palindrome\n", word.c_str());
	else
		printf("%s is not a Palindrome\n", word.c_str());

	std::map<int, int> mymap = {{1,1}, {2,2}};
	if(mymap.contains(1) == true)
		printf("map contains 1\n");
	else
		printf("map does not contain 1\n");

	return 0;
}
