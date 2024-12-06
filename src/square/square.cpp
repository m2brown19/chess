/**
 * Chess Square
 */

#include "square.h"

// Constructor
square::square() {
    this->occupied = false;
}

// Destructor
square::~square() {

}

bool square::has_piece() {
    return this->occupied;
}

chess_piece square::get_piece() {
    return piece->get_name();
}