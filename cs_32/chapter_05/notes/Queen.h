//
// Created by Thomas Pan on 6/2/18.
//

#ifndef NOTES_QUEEN_H
#define NOTES_QUEEN_H

class Board;

class Queen {
public:
    Queen();
    Queen(int inRow, int inCol);
    int getCol() const;
    int getRow() const;
    void nextRow();
    bool isUnderAttack() const;
    static void setBoard(const Board* bPtr);

private:
    int row;
    int col;

    static const Board* boardPtr;
};

#endif //NOTES_QUEEN_H
