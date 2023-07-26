#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
private:
    std::string m_colour;
    std::string m_name;

public:
    Figure(const std::string& colour, const std::string& name);
    virtual ~Figure();
    std::string get_colour() const;
    std::string get_name() const;
};

class Queen : public Figure {
public:
    Queen(const std::string& colour);
    virtual ~Queen();
};

class Bishop : public Figure {
public:
    Bishop(const std::string& colour);
    virtual ~Bishop();
};

class King : public Figure {
public:
    King(const std::string& colour);
    virtual ~King();
};

class Rook : public Figure {
public:
    Rook(const std::string& colour);
    virtual ~Rook();
};

class Pawn : public Figure {
public:
    Pawn(const std::string& colour);
    virtual ~Pawn();
};

class Knight : public Figure {
public:
    Knight(const std::string& colour);
    virtual ~Knight();
};

#endif // FIGURE_H
