#include <gtest/gtest.h>

#include <array>
#include <memory>
#include <parent.h>
#include <vector>


TEST(FirstLabTests, SimpleTest) {

constexpr int inputSize = 4;

std::array< std::vector<std::string>, inputSize> input;
input[0] = {
"Hello!",
"USELESS_TEST?",
"",
"1 23214 3_ 4432 __ _ _ SDFs sda_DS a_s A_S AS",
"2 * 2 = 4",
"_$%^&&*&&  ***/*-+",
"   "
"qwertyuiopasdffghjklzxcvbnm"
};

std::array< std::vector<std::string>, inputSize> expectedOutput;
expectedOutput[0] = {
"HELLO!",
"USELESS_TEST",
"",
"1_23214_3__4432________SDFS_SDA_DS_A_S_A_S_AS",
"2_*_2_=_4",
"_$%^&&*&&  ***/*-+",
"___",
"QWERTYUIOPASDFFGHJKLZXCVBNM"
};



for (int i = 0; i < inputSize; i++) {
auto result = ParentRoutine(getenv("child1"), getenv("child2"), input[i]);
EXPECT_EQ(result, expectedOutput[i]);
}
}