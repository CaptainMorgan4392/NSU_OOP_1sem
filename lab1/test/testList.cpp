#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../LinkedListLib/LinkedList.h"
#include "unistd.h"

class TestList : public testing::Test {
public:
    LinkedList list;
    LinkedList secondList;
};

TEST_F(TestList, TestingConstructors) {
    list.push_back(1);
    list.push_back(2);

    auto* newList = new LinkedList(list);
    EXPECT_TRUE(*newList == list);

    auto* emptyList = new LinkedList();
    EXPECT_TRUE((*emptyList).empty() && emptyList != newList);

    *emptyList = std::move(*newList);
    EXPECT_TRUE(*emptyList == list);

    sleep(1);
}

TEST_F(TestList, TestingOperators) {
    list.push_back(1);
    list.push_back(2);

    secondList.push_back(3);
    secondList.push_back(4);
    secondList.push_back(5);

    list += secondList;

    int i = 1;
    for (auto it = list.cbegin(); it != list.cend(); it++) {
        EXPECT_EQ(*it, i);
        i++;
    }

    LinkedList newList = list + secondList;
    i = 1;
    for (auto it = list.cbegin(); it != list.cend(); it++) {
        EXPECT_EQ(*it, i);
        i++;
    }
    EXPECT_TRUE(list != secondList);

    secondList.push_front(2);
    secondList.push_front(1);
    EXPECT_TRUE(list == secondList);

    list.pop_back();
    EXPECT_TRUE(list != secondList);
    list = secondList;
    EXPECT_TRUE(list == secondList);

    LinkedList moving(std::move(secondList));
    EXPECT_TRUE(moving == list);

    sleep(1);
}

TEST_F(TestList, TestBackFunctions) {
    for (int i = 1; i <= 25; i++) {
        list.push_back(i);
    }

    for (int i = 25; i > 0; i--) {
        EXPECT_EQ(list.back(), i);

        list.pop_back();
    }

    EXPECT_ANY_THROW(list.pop_back());
    EXPECT_ANY_THROW(list.back());

    sleep(1);
}

TEST_F(TestList, TestFrontFunctions) {
    for (int i = 1; i <= 25; i++) {
        list.push_front(i);
    }

    for (int i = 25; i > 0; i--) {
        EXPECT_EQ(list.front(), i);

        list.pop_front();
    }

    EXPECT_ANY_THROW(list.pop_front());
    EXPECT_ANY_THROW(list.front());

    sleep(1);
}

TEST_F(TestList, TestMixedAddsAndPops) {
    bool isFront = false;
    for (int i = 1; i <= 25; i++) {
        isFront ? list.push_front(i) : list.push_back(i);
        isFront = !isFront;
    }

    isFront = false;
    for (int i = 25; i > 0; i--) {
        if (isFront) {
            EXPECT_EQ(list.front(), i);
            list.pop_front();
        } else {
            EXPECT_EQ(list.back(), i);
            list.pop_back();
        }

        isFront = !isFront;
    }

    EXPECT_ANY_THROW(list.pop_front());
    EXPECT_ANY_THROW(list.front());
    EXPECT_ANY_THROW(list.pop_back());
    EXPECT_ANY_THROW(list.back());

    sleep(1);
}

TEST_F(TestList, TestCapacity) {
    srand(time(nullptr));

    int curCap = 0;

    for (int i = 0; i < 100000; i++) {
        int cur = rand() % 4 + 1;
        switch (cur) {
            case 1:
                list.push_front(i);
                curCap++;
                break;
            case 2:
                list.push_back(i);
                curCap++;
                break;
            case 3:
                if (list.empty()) {
                    continue;
                }
                list.pop_front();
                curCap--;
                break;
            case 4:
                if (list.empty()) {
                    continue;
                }
                list.pop_back();
                curCap--;
                break;
        }

        EXPECT_EQ(list.size(), curCap);
    }

    sleep(1);
}

TEST_F(TestList, TestClear) {
    srand(time(nullptr));

    int curCap = 0;

    for (int i = 0; i < 100000; i++) {
        int cur = rand() % 4 + 1;
        switch (cur) {
            case 1:
                list.push_front(i);
                curCap++;
                break;
            case 2:
                list.push_back(i);
                curCap++;
                break;
            case 3:
                if (list.empty()) {
                    continue;
                }
                list.pop_front();
                curCap--;
            case 4:
                if (list.empty()) {
                    continue;
                }
                list.pop_back();
                curCap--;
        }

        EXPECT_EQ(list.size(), curCap);
    }

    list.clear();

    EXPECT_EQ(list.begin(), list.end());
    EXPECT_EQ(list.size(), 0);

    sleep(1);
}

TEST_F(TestList, TestEmpty) {
    EXPECT_EQ(list.empty(), true);

    list.push_back(1);
    EXPECT_EQ(list.empty(), false);
    list.pop_back();
    EXPECT_EQ(list.empty(), true);

    list.push_front(1);
    EXPECT_EQ(list.empty(), false);
    list.pop_front();
    EXPECT_EQ(list.empty(), true);

    sleep(1);
}

TEST_F(TestList, TestRemove) {
    for (int i = 0; i < 100000; i++) {
        list.push_back(i % 4);
    }

    list.remove(3);

    EXPECT_EQ(list.size(), 75000);

    for (auto it = list.cbegin(); it != list.cend(); it++) {
        EXPECT_FALSE(*it == 3);
    }

    sleep(1);
}

