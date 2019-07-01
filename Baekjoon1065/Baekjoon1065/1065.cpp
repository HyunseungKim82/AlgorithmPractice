#include <stdio.h>

int N;
int result;

int main() {

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		int n = i;
		if (n < 100) {
			result++;
		}
		else {
			int one = n % 10;
			int ten = (n / 10) % 10;
			int hundred = n / 100;

			if (one - ten == ten - hundred) {
				result++;
			}
		}
	}

	printf("%d", result);



	return 0;
}