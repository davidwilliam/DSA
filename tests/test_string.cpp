#include <gtest/gtest.h>
#include "dsa_string.h"

TEST(StringTest, ValidPalindrome) {
    dsa::String stringObj;
    EXPECT_TRUE(stringObj.isPalindrome("A man, a plan, a canal: Panama"));
}

TEST(StringTest, InvalidPalindrome) {
    dsa::String stringObj;
    EXPECT_FALSE(stringObj.isPalindrome("This is not a palindrome"));
}

TEST(StringTest, EmptyString) {
    dsa::String stringObj;
    EXPECT_TRUE(stringObj.isPalindrome(""));
}

TEST(StringTest, SingleCharacterString) {
    dsa::String stringObj;
    EXPECT_TRUE(stringObj.isPalindrome("a"));
}

TEST(StringTest, IsomorphicStrings) {
    dsa::String stringObj;
    EXPECT_TRUE(stringObj.isIsomorphic("egg", "add"));
    EXPECT_TRUE(stringObj.isIsomorphic("paper", "title"));
}

TEST(StringTest, NonIsomorphicStrings) {
    dsa::String stringObj;
    EXPECT_FALSE(stringObj.isIsomorphic("foo", "bar"));
    EXPECT_FALSE(stringObj.isIsomorphic("ab", "aa"));
}
