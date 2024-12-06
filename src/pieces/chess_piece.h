/*

*/

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

// Include files
#include <string>

using namespace std;

class chess_piece {
public:
    chess_piece(); // Constructor
    ~chess_piece(); // Destructor

    string get_name();
    list<string> get_moves();

    void move();

private:
    string name;
    bool alive;
};

#endif // CHESS_PIECE_H