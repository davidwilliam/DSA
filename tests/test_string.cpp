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

TEST(StringTest, AnagramPositiveCase) {
    dsa::String stringObj;
    std::string s1 = "anagram";
    std::string s2 = "nagaram";
    EXPECT_TRUE(stringObj.isAnagram(s1, s2));
}

TEST(StringTest, AnagramNegativeCase) {
    dsa::String stringObj;
    std::string s1 = "rat";
    std::string s2 = "car";
    EXPECT_FALSE(stringObj.isAnagram(s1, s2));
}

TEST(StringTest, AnagramEmptyStrings) {
    dsa::String stringObj;
    std::string s1 = "";
    std::string s2 = "";
    EXPECT_TRUE(stringObj.isAnagram(s1, s2));
}
