#include "Piece.h"


Piece:: Piece(Color White, Board* pb)
{
	color = White;
	board = pb;
}

Color Piece::getColor()
{
	return color;
}