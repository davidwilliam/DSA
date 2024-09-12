#include <gtest/gtest.h>
#include "linked_list.h"

using namespace dsa;

std::string captureOutput(std::function<void()> func) {
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf()); // Redirect std::cout
    func();
    std::cout.rdbuf(old); // Reset to default
    return buffer.str();
}

TEST(LinkedListTest, AppendAndDisplay) {
    LinkedList list;
    
    list.append(1);
    list.append(2);
    list.append(3);

    testing::internal::CaptureStdout();
    list.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "1 2 3 \n");
}

TEST(LinkedListTest, ReverseList) {
    LinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);

    list.reverse();

    testing::internal::CaptureStdout();
    list.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "3 2 1 \n");
}

TEST(LinkedListTest, ReverseEmptyList) {
    LinkedList list;

    list.reverse();

    testing::internal::CaptureStdout();
    list.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "\n");
}

TEST(LinkedListTest, AppendAndReverseSingleElement) {
    LinkedList list;

    list.append(42);

    list.reverse();

    testing::internal::CaptureStdout();
    list.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "42 \n");
}

TEST(LinkedListTest, MultipleAppends) {
    LinkedList list;

    for (int i = 1; i <= 10; i++) {
        list.append(i);
    }

    testing::internal::CaptureStdout();
    list.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "1 2 3 4 5 6 7 8 9 10 \n");
}

TEST(LinkedListTest, NoCycle) {
    dsa::LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    EXPECT_FALSE(list.hasCycle());
}

TEST(LinkedListTest, DetectCycle) {
    dsa::LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    list.createCycle(1);

    EXPECT_TRUE(list.hasCycle());
}

TEST(LinkedListTest, NoCycleInEmptyList) {
    dsa::LinkedList list;
    EXPECT_FALSE(list.hasCycle());
}

TEST(LinkedListTest, ListCycle_NoCycle) {
    dsa::LinkedList list;
    
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    std::string output = captureOutput([&]() {
        list.listCycle();
    });

    EXPECT_EQ(output, "No cycle found in the linked list.\n");
}

TEST(LinkedListTest, ListCycle_CycleExists) {
    dsa::LinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    list.createCycle(1);

    std::string output = captureOutput([&]() {
        list.listCycle();
    });

    EXPECT_EQ(output, "Cycle detected. The cycle includes the following nodes: 2 3 4 5 \n");
}

TEST(LinkedListTest, ListCycle_SingleNodeWithCycle) {
    dsa::LinkedList list;

    list.append(1);

    list.createCycle(0);

    std::string output = captureOutput([&]() {
        list.listCycle();
    });

    EXPECT_EQ(output, "Cycle detected. The cycle includes the following nodes: 1 \n");
}

TEST(LinkedListTest, ListCycle_EmptyList) {
    dsa::LinkedList list;

    std::string output = captureOutput([&]() {
        list.listCycle();
    });

    EXPECT_EQ(output, "No cycle found in the linked list.\n");
}

