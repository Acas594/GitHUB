#include <stdio.h>
void MakeMove(int board[4][4], int tile)
{
	int i, a, row1, col1, row2, col2;
	row1 = 0;
	col1 = 0;
	row2 = 0;
	col2 = 0;

	for (i = 0; i < 5; i++) {
		for (a = 0; a < 5; a++) {
			if (board[i][a] == tile) {
				row1 = i;
				col1 = a;
				if (board[i][a] == -1) {
					row2 = i;
					col2 = a;
				}
			}
		}
	}

	if (row1 > 0 && row1 < 3 && col1 > 0 && col1 < 3) {
		if ((row1 + 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if (row1 + 1 == row2 && col1 == col2) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if (col1 + 1 == col2 && row1 == row2) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if (col1 - 1 == col2 && row1 == row2) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}

	if ((row1 == 0) && (col1 > 0) && (col1 < 3)) {
		if ((col1 + 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((row1 + 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((row1 - 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}

	if ((row1 == 3) && (col1 > 0) && (col1 < 3)) {
		if ((col1 - 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((row1 + 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((row1 - 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}

	if ((col1 == 0) && (row1 > 0) && (row1 < 3)) {
		if ((row1 + 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((col1 + 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((col1 - 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}

	if ((col1 == 3) && (row1 > 0) && (row1 < 3)) {
		if ((row1 - 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((col1 + 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((col1 - 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}

	if ((row1 == 0) && (col1 == 0)) {
		if ((row1 + 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((col1 + 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}

	if ((row1 == 3) && (col1 == 0)) {
		if ((row1 - 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((col1 + 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}

	if ((row1 == 0) && (col1 == 3)) {
		if ((row1 + 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((col1 - 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}

	if ((row1 == 3) && (col1 == 3)) {
		if ((row1 - 1 == row2) && (col1 == col2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
		if ((col1 - 1 == col2) && (row1 == row2)) {
			board[row2][col2] = tile;
			board[row1][col1] = -1;
		}
	}
}