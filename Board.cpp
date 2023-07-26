#include "Board.h"
#include "Figure.h"

Board::Board(int rows, int columns) {
    m_board.resize(rows * columns, nullptr);
}

Board::~Board() {
    for (auto figure : m_board) {
        delete figure;
    }
}

bool Board::isValidPosition(int file, int rank) {
    return (file >= 0 && file < 8 && rank >= 0 && rank < 8);
}

Figure* Board::getCell(int file, int rank) {
    if (isValidPosition(file, rank)) {
        return m_board[rank * 8 + file];
    }
    return nullptr;
}

void Board::PlaceFigure(char file, int rank, Figure* figure) {
    
    int fileIndex = file - 'A';

    int rankIndex = rank - 1;

    if (isValidPosition(fileIndex, rankIndex)) {
        Figure* cell = getCell(fileIndex, rankIndex);
        if (cell != nullptr) {
            delete cell;
        }
        m_board[rankIndex * 8 + fileIndex] = figure;
    }
}

void Board::PrintBoard() {
    std::cout << ' ';
    for (int i = 0; i < 8; ++i) {
        std::cout << ' ' << (char)('A' + i);
    }
    std::cout << std::endl;

    for (int i = 7; i >= 0; --i) {
        std::cout << i + 1; 
        for (int j = 0; j < 8; ++j) {
            Figure* cell = getCell(j, i);
            if (cell != nullptr) {
                std::cout << ' ' << cell->get_colour()[0] << cell->get_name()[0];
            }
            else {
                std::cout << " .";
            }
        }
        std::cout << std::endl;
    }
}

ChessBoard::ChessBoard() : Board(8, 8) {}

ChessBoard::~ChessBoard() {}
