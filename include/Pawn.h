#pragma once
#include "Piece.h"


class Pawn : public Piece
{
public:
	Pawn(Color White, Board* pb) :Piece(White, pb) {};
	bool isLegalMove(Location src, Location dst) override;//21 - illegal movement of that piece

};
