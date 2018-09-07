//
// Created by Thomas Pan on 6/2/18.
//

#ifndef NOTES_BOARD_H
#define NOTES_BOARD_H

#include "Queen.h"
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;
static const int BOARD_SIZE=8;

class Board {
private:
    vector<Queen*> queens;
    bool isQueen(int inRow, int inCol) const;
    const placeQueens(Queen* queenPtr);
    void removeQueen(const Queen* queenPtr);
    void setQueen(const Queen* queenPtr);
public:
    Board();
    ~Board();
    void clear();
    void display() const;
    void doEightQueens();
    int getNumQueens() const;
    const Queen* getQueen(int index) const;
};


#endif //NOTES_BOARD_H
