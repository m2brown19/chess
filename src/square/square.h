/**
 * Chess Square class header
 * 
*/

#ifndef CHESS_SQUARE_H
#define CHESS_SQUARE_H

#include "../chess_piece/chess_piece.h"

class square {
public:
    square(); // Constructor
    ~square(); // Destructor

    bool has_piece();
    chess_piece get_piece();
private:
    bool occupied; // Occupied or not
    chess_piece * piece; // Ptr to chess piece on square
};

#endif // CHESS_BOARD_H