#pragma once
#include "Piece.h"


class Rook : public Piece
{
public:
	Rook(Color White,Board* pb) :Piece(White,pb) {};
	bool isLegalMove(Location src, Location dst) override;//21 - illegal movement of that piece

};
