#include <stdio.h>
#include "PUT HERE DIRECTORY OF THE MMATH.H FILE IN YOUR SYTEM" // EXAMPLE C:\\Users\user\Desktop\mmath library\MMATH.H

void PrintBinDigit(unsigned int Xi) {
	int i;

	for (i = 31; i >= 0; i--) {
		if ((((i + 1) % 4) == 0) && i != 31)
			printf(" ");
		printf("%X", ((Xi & 1 << i)) >> i);
	}
	printf("   ");
}

void PrintBin(M_LONG X) {
	int i;

	for (i = X[0]; i > 0; i--) {
		PrintBinDigit(X[i]);
		if (((i + 1) % 3) == 0 && i != X[0])
			printf("\n");
	}
	printf("\n\n");
}

void PrintHex(M_LONG X) {
	int i;

	for (i = X[0]; i > 0; i--) {
		if ((i % 4) == 0 && i != X[0])
			printf("\n");
		printf("%X ", X[i]);
	}
	printf("\n\n");
}

void main() {
	M_LONG P = { 16, // 16*32 = 512 bits
	  0x6f18544d,0xedb374f5,0xffbc3bcc,0x7249bb52,
	  0xb09152ec,0x9551dc2c,0x7f6e2853,0xa4dba914,
	  0xa9bd6e9b,0x70cd54ce,0x31fe7bd3,0xcc61f6d2,
	  0x5d45c7fc,0x11a20acc,0x39b8708c,0x9df3ef1d };

	M_LONG X = { 3,11,10,9,8,7,6 };

	PrintHex(P);
	PrintBin(P);
}