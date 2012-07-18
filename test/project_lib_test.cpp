#include "project_lib.h"
#include <gtest\gtest.h>

class ProjectLibTest : public testing::Test {
  protected:
	virtual void SetUp() {}
	virtual void TearDown() {}
};

TEST_F(ProjectLibTest, ReturnValueIsFunctionParameter) {
	ProjectLib project;
	int expected = 13;

    int actual = project.someMethod(expected);

	EXPECT_EQ(expected, actual);
}
