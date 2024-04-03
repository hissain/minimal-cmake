#include <stdio.h>
#include "LibMath.h"
#include <math.h>

int main() {
	printf("Hello Math World!\n");
	printf("If a = 5 and b = 3, then,\n");
	printf("add(a, b) returns %d\n", Math::add(5, 3));
	printf("sub(a, b) returns %d\n", Math::sub(5, 3));
	return 0;
}