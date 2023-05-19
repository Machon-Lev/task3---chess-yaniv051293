#include "Queen.h"
#include "Bishop.h"
#include "Rook.h"

bool Queen::isLegalMove(Location src, Location dst)
/**
 * Checks if a move from the source location to the destination location is legal for a Queen.
 *
 * @param src The source location of the Queen.
 * @param dst The destination location of the Queen.
 * @return True if the move is legal, false otherwise.
 */
{
	Rook rook(color, board);
	Bishop bishop(color, board);
	// Check if the move is legal for either Rook or Bishop
	if (rook.isLegalMove(src, dst) || bishop.isLegalMove(src, dst))
		return true;
	return false;
}