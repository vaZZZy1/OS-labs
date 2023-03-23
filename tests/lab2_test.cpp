#include <gtest/gtest.h>

#include <array>
#include <memory>
#include <parent.h>
#include <stdlib.h>
#include <vector>


TEST(FirstLabTests, SimpleTest) {

    constexpr int inputSize = 4;

    std::array< std::vector<std::string>, inputSize> input;
    input[0] = {
            "abcabc",
            "ad SD da",
            "USE_LESS",
            "kEk sDf_doupf"
    };
    input[1] = {
        "  ",
        ""
    };
    input[2] = {
        "__A  ",
        "_ _ _"
    };
    input[3] = {
        "\b "
    };
    std::array< std::vector<std::string>, inputSize> expectedOutput;
    expectedOutput[0] = {
            "ABCABC",
            "AD_SD_DA",
            "USE_LESS",
            "KEK_SDF_DOUPF"
    };
    expectedOutput[1] = {
        "__",
        ""
    };
    expectedOutput[2] = {
        "__A__",
        "_____"
    };
    expectedOutput[3] = {
        "\b_"
    };
    for (int i = 0; i < inputSize; i++) {
        auto result = ParentProcces("/home/vazy1/mai/OS-labs/build/lab2/child1", "/home/vazy1/mai/OS-labs/build/lab2/child2", input[i]);
        EXPECT_EQ(result, expectedOutput[i]);
    }
}
