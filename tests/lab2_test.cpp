#include <gtest/gtest.h>

#include <array>
#include <memory>
#include <parent.h>
#include <vector>


TEST(FirstLabTests, SimpleTest) {


std::array< std::vector<std::string>, 1> input;
input[0] = {
"Hello!",
};

std::array< std::vector<std::string>, 1> expectedOutput;
expectedOutput[0] = {
"HELLO!",
};


for (int i = 0; i < 1; i++) {
auto result = ParentRoutine(getenv("child1"), getenv("child2"), input[i]);
EXPECT_EQ(result, expectedOutput[i]);
}
}