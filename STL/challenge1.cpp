#include <iostream>
#include <deque>
#include <iomanip>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

bool is_palindrome(const std::string& word){
    
    std::deque<char> new_word;

    for (auto &i : word)
    {
        if(std::isalpha(i) && !std::isblank(i)){
            new_word.push_back(i);
        }
    }
    std::transform(new_word.begin(), new_word.end(), new_word.begin(), ::toupper);

    // it is working but it could (and would) give problems 
    for (auto &i : new_word)
    {
        if(i != new_word.back()){
            return false;
        }else{
            new_word.pop_back();
        }
    }
    
    return true;
}

int main(){
    // vector of strings to test the palindrome function
    std::vector<std::string> test_strings {"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", 
        "radar", "bob", "ana", "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++"};
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for (const auto &s : test_strings){
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;

}