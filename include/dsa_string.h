#ifndef STRING_H
#define STRING_H

#include <string>

namespace dsa {
    class String {
    public:
        bool isPalindrome(const std::string& str);

        bool isIsomorphic(const std::string& s, const std::string& t);
    };
}

#endif
