#ifndef PAWN_H
#define PAWN_H

#include <iostream>
#include "Piece.h"

/**
 * @class Pawn
 * @brief Represents a pawn chess piece
 *
 * Implements pawn-specific movement rules and properties.
 */
class Pawn : public Piece {
  public:
    /**
     * @brief Constructs a new pawn
     *
     * @param color Piece color (black/white)
     * @param location Initial square
     */
    Pawn(Piece::Color color, Square& location) : Piece(color, location) { }

    /**
     * @brief Gets the pawn's value (1)
     *
     * @return Constant value 1
     */
    piece_value_t value() const override;


    /**
     * @brief Checks if pawn can move to a square
     *
     * @param location Destination square
     * @return True if move is valid, false otherwise
     */
    bool can_move_to(const Square& location) const override;

    /**
     * @brief Moves pawn to a new square
     *
     * @param location Destination square
     * @return True if move succeeded, false otherwise
     */
    bool move_to(Square& location) override;

    /**
     * @brief Gets the pawn's string representation
     *
     * @return "P" for black, "p" for white
     */
    std::string str() const override;

  private:
    // Tracks if pawn has moved
    bool _moved = false;
};

#endif
