/**
 * 
*/

#include "chess_piece.h"

// Constructor definition
chess_piece::chess_piece() {
    this->name = "";
    this->alive = true;
}

// Destructor definition
chess_piece::~chess_piece() {
    
}

string chess_piece::get_name() {
    return this->name;
}
