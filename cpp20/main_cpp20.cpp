
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

import mystring;

int main() {
	// mystring module 1. calling method which is not exported
	// mystring::not_accessible();

	// mystring module 2. calling exported method
	std::string word = "sahas";
	bool out = mystring::is_palindrome(word);
	if(out==1) {
		// std::cout<<word<<" is a palindrome"<<std::endl;
		printf("%s is Palindrome\n", word.c_str());
	}
	else {
		// std::cout<<word<<" is not a palindrome"<<std::endl;
		printf("%s is not a Palindrome\n", word.c_str());
	}

	// string function starts with
	if(word.starts_with("sa")) {
		// std::cout<<"word starts with sa"<<std::endl;
		printf("%s starts with sa\n", word.c_str());
	}
	else {
		// std::cout<<"word does not start with sa"<<std::endl;
		printf("word does not start with sa\n");
	}

	// string function ends with
	if(word.ends_with("sa")) {
		// std::cout<<"word starts with sa"<<std::endl;
		printf("word ends with sa\n");
	}
	else {
		// std::cout<<"word does not start with sa"<<std::endl;
		printf("%s does not end with sa\n", word.c_str());
	}

	// map contains example
	std::map<int, int> mymap = {{1,1}, {2,2}};
	if(mymap.contains(1) == true) {
		// std::cout<<"map contains 1"<<std::endl;
		printf("map contains 1\n");
	}
	else {
		// std::cout<<"map does not contain 1"<<std::endl;
		printf("map does not contain 1\n");
	}

	// lambda expression
	std::vector<int> v = {1, 2, 3, 4, 5};
	for_each(v.begin(), v.end(), [](int a) {
				if(a%2 == 0) { 
					printf("Even Number: %d\n", a); // std::cout<<"Even Number:"<<a<<std::endl;
				}
				else { 
					printf("Odd Number: %d\n", a); // std::cout<<"Odd Number: "<<a<<std::endl;
				}
	});

	return 0;
}
