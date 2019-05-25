#include <stdio.h>
int d(int n) {
	if (n == 0)return 0;
	else {
		return d(n / 10) + n % 10;
	}
}
int main() {
	int A[100000] = {};
	int i;
	for (i = 1; i <= 9972; i++) {
		int a = d(i);
		A[a+ i] = 1;
	}
	
	for (i = 1; i < 10000; i++) {
		if (A[i]!=1) {
			printf("%d\n", i);
		}
	}
}


