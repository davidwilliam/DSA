#include "dsa_string.h"
#include <cctype> 
#include <unordered_map>

namespace dsa {

    bool String::isPalindrome(const std::string& str) {
        int left = 0;
        int right = str.size() - 1;

        while (left < right) {
            while (left < right && !std::isalnum(str[left])) {
                left++;
            }
            while (left < right && !std::isalnum(str[right])) {
                right--;
            }

            if (std::tolower(str[left]) != std::tolower(str[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    bool String::isIsomorphic(const std::string& s, const std::string& t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<char, char> mapST;
        std::unordered_map<char, char> mapTS;

        for (int i = 0; i < s.length(); ++i) {
            char ch1 = s[i];
            char ch2 = t[i];

            // Check if there is a mapping already
            if (mapST.find(ch1) != mapST.end()) {
                if (mapST[ch1] != ch2) return false;
            } else {
                mapST[ch1] = ch2;
            }

            if (mapTS.find(ch2) != mapTS.end()) {
                if (mapTS[ch2] != ch1) return false;
            } else {
                mapTS[ch2] = ch1;
            }
        }
        return true;
    }
}
