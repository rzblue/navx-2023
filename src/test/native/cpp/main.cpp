#include "gtest/gtest.h"
#include "hal/HAL.h"

int main(int argc, char** argv) {
    HAL_Initialize(500, 0);
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
