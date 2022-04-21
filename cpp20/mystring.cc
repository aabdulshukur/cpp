module;

#include <string>

export module mystring;

namespace mystring {

export bool is_palindrome(std::string& word) {
    if(word.length() <=1) return true;

    int l = 0;
    int r = word.length()-1;

    while(l < r) {
        if(word[l] != word[r]) return false;
	l++; r--;
    }

    return true;
}

} // namespace mystring
