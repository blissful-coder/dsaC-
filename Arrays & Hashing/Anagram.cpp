#include <iostream>

bool isAnagram(const std::string& s, const std::string& t) {
    if (s.size() != t.size()) return false;

    int freq[26] = {};
    for (int i = 0; i < (int)s.size(); ++i) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }
    for (int count : freq) {
        if (count != 0) return false;
    }
    return true;
}

int main(){
    std::string s = "racecar", t = "carrace";

    if ( isAnagram(s,t) )
        std::cout<<"\nAnagram\n";
    else
        std::cout<<"\nNot Anagram\n";

    return 0;
}