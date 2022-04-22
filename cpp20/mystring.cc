module;

#include <string>

export module mystring;

namespace mystring {

export bool is_palindrome(std::string& word) {
    if(word.length() <=1) return true;

    int l = 0;
    int r = word.length()-1;

    while(l < r) {
        if(word[l++] != word[r--]) return false;
    }

    return true;
}

export void reverse(std::string& str) {
    if(str.length() <=1 ) return;

    int l=0;
    int r=str.length()-1;

    while(l<r) {
        std::swap(str[l++], str[r--]);
    }
}


// this method not accessible as it is not exported
void not_accessible() {
}


} // namespace mystring
