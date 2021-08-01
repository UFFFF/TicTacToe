#include "Tiles.h"

bool Tiles::contains(int x, int y)
{
	if (start_x <= x && x <= start_x + 200) {
		if (start_y <= y && y <= start_y + 200) {
			return true;
		}
	}
	return false;
}
