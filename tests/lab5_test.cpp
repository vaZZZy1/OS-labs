#include <fstream>
#include <gtest/gtest.h>
#include <string>
#include <dlfcn.h>
#include <signature.h>

TEST(Lab5Test, StaticOneTest) {

    std::vector < std::vector <int> > input1 = {{1, 10}, {1, 100}, {107, 107}, {100, 105}};

    std::vector < std::vector <int> > input2 = {
            {3, 2, 1, 4, 5},
            {100, -1, 0},
            {1, 1, 1, 1, 1},
            {1000000},
            {-1919, -66666, -789}
    };

    std::vector <int> output1 = {4, 25, 1, 2};

    std::vector < std::vector <int> > output2= {
            {1, 2, 3, 4, 5},
            {-1, 0, 100},
            {1, 1, 1, 1, 1},
            {1000000},
            {-66666, -1919, -789}
    };

    for (int i = 0; i < input1.size(); i++) {
        auto primeCountOut = primeCount(input1[i][0], input1[i][1]);
        EXPECT_EQ(primeCountOut, output1[i]);
    }

    for (size_t i = 0; i < input2.size(); i++) {
        auto sortOut = sort(input2[i], 0, (int)input2[i].size());

        for (int j = 0; j < output2[i].size(); j++){
            EXPECT_EQ(sortOut[j], output2[i][j]);
        }
    }
}