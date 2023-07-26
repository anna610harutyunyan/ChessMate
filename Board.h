#ifndef BOARD_H
#define BOARD_H

#include "Figure.h"
#include <vector>
#include <iostream>

class Board {
public:
    Board(int rows, int columns);
    virtual ~Board();
    void PlaceFigure(char file, int rank, Figure* figure);
    void PrintBoard();

private:
    bool isValidPosition(int file, int rank);
    Figure* getCell(int file, int rank);
    std::vector<Figure*> m_board;
};

class ChessBoard : public Board {
public:
    ChessBoard();
    virtual ~ChessBoard();
};

#endif 


