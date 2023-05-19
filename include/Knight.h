#pragma once
#include "Piece.h"


class Knight : public Piece
{
public:
	Knight(Color White, Board* pb) :Piece(White, pb) {};
	bool isLegalMove(Location src, Location dst) override;//21 - illegal movement of that piece

};
