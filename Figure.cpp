#include "Figure.h"

Figure::Figure(const std::string& colour, const std::string& name) : m_colour(colour), m_name(name) {}

std::string Figure::get_colour() const {
    return m_colour;
}

std::string Figure::get_name() const {
    return m_name;
}

Figure::~Figure() {}

Queen::Queen(const std::string& colour) : Figure(colour, "queen") {}

Queen::~Queen() {}

Bishop::Bishop(const std::string& colour) : Figure(colour, "bishop") {}

Bishop::~Bishop() {}

King::King(const std::string& colour) : Figure(colour, "king") {}

King::~King() {}

Rook::Rook(const std::string& colour) : Figure(colour, "rook") {}

Rook::~Rook() {}

Pawn::Pawn(const std::string& colour) : Figure(colour, "pawn") {}

Pawn::~Pawn() {}

Knight::Knight(const std::string& colour) : Figure(colour, "knight") {}

Knight::~Knight() {}
