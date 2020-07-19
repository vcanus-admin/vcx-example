//
// Created by SG Lee on 2020-05-09.
//
#include <gtest/gtest.h>

using namespace std;

class ExampleTest: public ::testing::Test {
protected:
    ExampleTest() {
    }
    virtual ~ExampleTest() {}
public:
    virtual void SetUp() {
    }
    virtual void TearDown() {
    }
};

TEST_F(ExampleTest ,
        TestFunction) {
    ASSERT_TRUE(true);
}

