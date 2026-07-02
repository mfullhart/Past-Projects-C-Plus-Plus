#include "Pawn.h"
#include "Square.h"
#include <cmath>

using namespace std;

piece_value_t Pawn::value() const {
    return 1;
}

bool Pawn::can_move_to(const Square& location) const {
    Square* current = this->location();
    if (!current) return false;

    int rank_diff = static_cast<int>(location.rank()) - static_cast<int>(current->rank());
    int file_diff = abs(static_cast<int>(current->file()) - static_cast<int>(location.file()));

    if (color() == Color::white) {
        return (rank_diff == -1 && file_diff == 0) ||
               (!_moved && rank_diff == -2 && file_diff == 0);
    } else {
        return (rank_diff == 1 && file_diff == 0) ||
               (!_moved && rank_diff == 2 && file_diff == 0);
    }
}

bool Pawn::move_to(Square& location) {
    if (can_move_to(location)) {
        _moved = true;
        return Piece::move_to(location);
    }
    return false;
}

string Pawn::str() const {
    return color() == Color::white ? "p" : "P";
}