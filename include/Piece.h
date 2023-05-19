#pragma once
#include "Location.h"
#include "Board.h"
#include "Color.h"



class Board;


class Piece {

protected:
	Color color;
	Board* board = nullptr;
public:
	Piece(Color White, Board* pb);
	virtual bool isLegalMove(Location src,Location dst) = 0;//21 - illegal movement of that piece
	Color getColor();
};