#include <gtest\gtest.h>

#include "project-lib.h"

class ProjectLibTest : public testing::Test {
	
protected:
	virtual void SetUp() {
	
	}

	virtual void TearDown() {

	}
};

TEST_F(ProjectLibTest, ReturnValueIsFunctionParameter) {
	ProjectLib project;

	int value = 13;

	EXPECT_EQ(value, project.someMethod(value));

}

/*
TEST_F(ProjectLibTest, BrokenTest) {
	ProjectLib project;

	int value = 13;
	int expectedValue = 12;

	EXPECT_EQ(expectedValue, project.someMethod(value));

}
*/
