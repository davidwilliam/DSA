#include "dsa_string.h"
#include <cctype> 
#include <sstream> 
#include <unordered_map>
#include <vector>

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

    bool String::isAnagram(const std::string& s1, const std::string& s2) {
        if (s1.size() != s2.size()) {
            return false;
        }

        std::unordered_map<char, int> charCount;

        for (size_t i = 0; i < s1.size(); ++i) {
            charCount[s1[i]]++;
            charCount[s2[i]]--;
        }

        for (const auto& count : charCount) {
            if (count.second != 0) {
                return false;
            }
        }

        return true;
    }

    bool String::followsPattern(const std::string& pattern, const std::string& s) {
        std::unordered_map<char, std::string> charToWord;
        std::unordered_map<std::string, char> wordToChar;

        std::istringstream ss(s);
        std::vector<std::string> words;
        std::string word;

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.length() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.length(); ++i) {
            char patternChar = pattern[i];
            const std::string& currentWord = words[i];

            if (charToWord.count(patternChar)) {
                if (charToWord[patternChar] != currentWord) {
                    return false;
                }
            } else {
                if (wordToChar.count(currentWord)) {
                    return false;
                }

                charToWord[patternChar] = currentWord;
                wordToChar[currentWord] = patternChar;
            }
        }

        return true;
    }
}
