#ifndef STRING_H
#define STRING_H

#include <string>

namespace dsa {
    class String {
    public:
        bool isPalindrome(const std::string& str);

        bool isIsomorphic(const std::string& s, const std::string& t);

        bool isAnagram(const std::string& s1, const std::string& s2);

        bool followsPattern(const std::string& pattern, const std::string& s);

        void reverseString(std::string& s);
    };
}

#endif
