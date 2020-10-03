#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../LinkedListLib/LinkedList.h"

class TestIterator : public testing::Test {
public:
    LinkedList list;
    LinkedList::iterator it;
    LinkedList::const_iterator itConst;
};

TEST_F(TestIterator, TestingOfIteratorsOnBigList) {
    int i;

    for (i = 0; i < 100000; i++) {
        list.push_back(i);
    }

    i = 0;

    for (it = list.begin(); it != list.end(); it++) {
        EXPECT_EQ(*it, i);

        *it = 100000 - i;

        i++;
    }

    for (itConst = list.cbegin(); itConst != list.cend(); itConst++) {
        EXPECT_EQ(*itConst, i);

        i--;
    }

    sleep(1);
}

TEST_F(TestIterator, TestingMethodsOfNonConstantIterator) {
    int shift = 12;

    for (int i = 0; i < 25; i++) {
        list.push_back(i);
    }

    it = list.begin();
    for (int i = 0; i < shift; i++) {
        it++;
    }

    it = it.insert(it, 100);
    LinkedList::iterator before = --it;
    ++it;
    LinkedList::iterator after = ++it;
    --it;
    EXPECT_TRUE(*it == 100 && *before == shift && *after == shift + 1);

    it.erase(it);
    it.erase(it, list.end());

    int i = 0;
    for (it = list.begin(); it != list.end(); it++) {
        EXPECT_EQ(*it, i);
        i++;
    }

    EXPECT_TRUE(i == 12 + 1);

    sleep(1);
}
