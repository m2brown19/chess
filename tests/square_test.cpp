/**
 * Test class chess_piece
 */

#include <gtest/gtest.h>
#include "../src/square/square.h"

TEST(SquareTest, Getters) {
    square mySquare = square();
    EXPECT_EQ(mySquare.has_piece(), false);
}