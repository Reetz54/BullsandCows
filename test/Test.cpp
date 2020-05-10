#include "../src/functions.h"
#include <gtest/gtest.h>

using namespace std;

string expected, actual;

TEST(Test1, TestMenuTrue){
    actual = "Start";
    expected = "Start";
    ASSERT_EQ(expected, actual);
    actual = "Exit";
    expected = "Exit";
    ASSERT_EQ(expected, actual);
}
TEST(Test2, TestMenuFalse){
    actual = "Start";
    expected = " ";
    ASSERT_EQ(expected, actual);
    expected = "123";
    ASSERT_EQ(expected, actual);
    expected = "asdfa";
    ASSERT_EQ(expected, actual);
}
    
int test(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}
