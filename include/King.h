#pragma once
#include "Piece.h"


class King : public Piece
{
public:
	King(Color White, Board* pb) :Piece(White, pb) {};
	bool isLegalMove(Location src, Location dst) override;//21 - illegal movement of that piece

};
