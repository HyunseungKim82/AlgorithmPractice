#include <stdio.h>


int N;
int S;
int arr[25];
int result;


int main() {

	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		long int sum = 0;
		for (int j = i; j < N; j++) {
			sum += arr[j];
			if (sum == S) {
				result++;
			}
		}
	}

	printf("%d", result);


	return 0;
}