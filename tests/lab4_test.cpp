#include <gtest/gtest.h>

#include <array>
#include <memory>
#include <parent.h>
#include <vector>


TEST(FirstLabTests, SimpleTest) {

    constexpr int inputSize = 2;

    std::array< std::vector<std::string>, inputSize> input;
    input[0] = {
            "abcabc",
            "qwerty qwerty",
            "A n O t H e R             TeSt",
            "oNe1 Two2  thr3ee   5fiVe     Ei8ght        13thiRTEEN             ...",
            "2 + 2 = 4",
            "0123456789 abcdefghijklmnopqrstuvwxyz"
    };
    input[1] = {
            "second test",
            "1234567890/.,'][",
            ".            .             .                         ...............",
            "!?+-*/_;",
    };

    std::array< std::vector<std::string>, inputSize> expectedOutput;
    expectedOutput[0] = {
            "ABCABC",
            "QWERTY QWERTY",
            "A N O T H E R TEST",
            "ONE1 TWO2 THR3EE 5FIVE EI8GHT 13THIRTEEN ...",
            "2 + 2 = 4",
            "0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    };
    expectedOutput[1] = {
            "SECOND TEST",
            "1234567890/.,'][",
            ". . . ...............",
            "!?+-*/_;",
    };


    for (int i = 0; i < inputSize; i++) {
        auto result = ParentRoutine(
                "/home/vazy1/mai/OS-labs/build/lab4/4child1",
                "/home/vazy1/mai/OS-labs/build/lab4/4child2",
                input[i]);
        EXPECT_EQ(result, expectedOutput[i]);
    }
}