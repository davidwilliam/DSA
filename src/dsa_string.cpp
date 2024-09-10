#include "dsa_string.h"
#include <cctype> 

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
}
