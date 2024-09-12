#include <iostream>
#include "dsa.h"

using namespace dsa;

void demoPalindrome(dsa::String& stringObj, const std::string& testString) {
    std::cout << "\n== Is a palindrome? ==" << std::endl;
    std::cout << "Testing string: \"" << testString << "\"" << std::endl;
    std::cout << "Is palindrome? " << (stringObj.isPalindrome(testString) ? "Yes" : "No") << std::endl;
}

void demoIsomorphic(dsa::String& stringObj, const std::string& s1, const std::string& s2) {
    std::cout << "\n== Isomorphic? ==" << std::endl;
    std::cout << "Testing if \"" << s1 << "\" and \"" << s2 << "\" are isomorphic: "
              << (stringObj.isIsomorphic(s1, s2) ? "Yes" : "No") << std::endl;
}

void demoAnagram(dsa::String& stringObj, const std::string& s1, const std::string& s2) {
    std::cout << "\n== Valid Anagram ==" << std::endl;
    std::cout << "Testing if \"" << s1 << "\" and \"" << s2 << "\" are anagrams: "
              << (stringObj.isAnagram(s1, s2) ? "Yes" : "No") << std::endl;
}

void demoPatternMatching(dsa::String& stringObj, const std::string& pattern, const std::string& s) {
    std::cout << "\n== Pattern Matching ==" << std::endl;
    std::cout << "Pattern: \"" << pattern << "\", String: \"" << s << "\"" << std::endl;
    std::cout << "Does the string follow the pattern? "
              << (stringObj.followsPattern(pattern, s) ? "Yes" : "No") << std::endl;
}

void demoReverseString(dsa::String& stringObj, std::string& input) {
    std::cout << "\n== Reverse String ==" << std::endl;
    std::cout << "Original string: \"" << input << "\"" << std::endl;
    stringObj.reverseString(input);
    std::cout << "Reversed string: \"" << input << "\"" << std::endl;
}


int main() {
    dsa::String stringObj;

    std::string testString1 = "A man, a plan, a canal: Panama";
    std::string testString2 = "Not a palindrome";

    std::string s1 = "egg";
    std::string s2 = "add";
    std::string s3 = "foo";
    std::string s4 = "bar";

    std::string s5 = "anagram";
    std::string s6 = "nagaram";

    std::string s7 = "rat";
    std::string s8 = "car";

    std::string pattern1 = "abba";
    std::string str1 = "dog cat cat dog";

    std::string pattern2 = "abba";
    std::string str2 = "dog cat cat fish";

    std::string testString = "hello world";

    std::cout << "\nWelcome to the String Algorithms Demo!" << std::endl;

    demoPalindrome(stringObj, testString1);
    demoPalindrome(stringObj, testString2);
    demoIsomorphic(stringObj, s1, s2);
    demoIsomorphic(stringObj, s3, s4);
    demoAnagram(stringObj, s5, s6);
    demoAnagram(stringObj, s7, s8);
    demoPatternMatching(stringObj, pattern1, str1);
    demoPatternMatching(stringObj, pattern2, str2);
    demoReverseString(stringObj, testString);

    return 0;
}
