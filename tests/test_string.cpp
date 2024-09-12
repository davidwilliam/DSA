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

TEST(StringTest, PatternMatchingPositiveCase) {
    dsa::String stringObj;
    std::string pattern = "abba";
    std::string s = "dog cat cat dog";
    EXPECT_TRUE(stringObj.followsPattern(pattern, s));
}

TEST(StringTest, PatternMatchingNegativeCase) {
    dsa::String stringObj;
    std::string pattern = "abba";
    std::string s = "dog cat cat fish";
    EXPECT_FALSE(stringObj.followsPattern(pattern, s));
}

TEST(StringTest, PatternMatchingDifferentLengths) {
    dsa::String stringObj;
    std::string pattern = "abba";
    std::string s = "dog cat cat";
    EXPECT_FALSE(stringObj.followsPattern(pattern, s));
}

TEST(StringTest, PatternMatchingAllSameWords) {
    dsa::String stringObj;
    std::string pattern = "aaaa";
    std::string s = "dog dog dog dog";
    EXPECT_TRUE(stringObj.followsPattern(pattern, s));
}

TEST(StringTest, PatternMatchingAllDifferentWords) {
    dsa::String stringObj;
    std::string pattern = "abcd";
    std::string s = "dog cat fish bird";
    EXPECT_TRUE(stringObj.followsPattern(pattern, s));
}

TEST(StringTest, ReverseStringInPlace) {
    dsa::String stringObj;

    std::string input = "hello";
    std::string expected = "olleh";
    stringObj.reverseString(input);

    EXPECT_EQ(input, expected);
}

TEST(StringTest, ReverseStringWithSpaces) {
    dsa::String stringObj;

    std::string input = "hello world";
    std::string expected = "dlrow olleh";
    stringObj.reverseString(input);

    EXPECT_EQ(input, expected);
}

TEST(StringTest, ReverseEmptyString) {
    dsa::String stringObj;

    std::string input = "";
    std::string expected = "";
    stringObj.reverseString(input);

    EXPECT_EQ(input, expected);
}