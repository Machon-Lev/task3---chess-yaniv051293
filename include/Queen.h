#pragma once
#include "Piece.h"


class Queen : public Piece
{
public:
	//Queen(bool White, Board* pb) :Piece(White, pb) {};
	Queen(Color White, Board* pb) :Piece(White, pb) {};
	bool isLegalMove(Location src, Location dst) override;//21 - illegal movement of that piece

};
