#include <stdio.h>
int LeafEater(int branch, int rest, int leaf)
{
	int i, count, leavesEaten, leafcounter;
	count = 0;
	leavesEaten = 1;
	leafcounter = 1;

	for (i = 0; i < branch / rest; i++) {
		count = count + rest;
		if (count == leaf * leafcounter) {
			leavesEaten = leavesEaten + 1;
			leafcounter = leafcounter + 1;
		}
	}
}
	return leavesEaten;

int main(void)
{
	printf("Leaves eaten = %d\n", LeafEater(11, 2, 4));
	return 0;
}