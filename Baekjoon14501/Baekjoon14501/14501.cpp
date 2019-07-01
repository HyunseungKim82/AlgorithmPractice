#include <stdio.h>

int N;
int T[20];
int P[20];
int pay[20];
int maxpay;

int main() {

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &T[i]);
		scanf("%d", &P[i]);
	}

	
	for (int i = N - 1; i >= 0; i--) {
		if (i + T[i] > N) {
			for (int j = i + 1; j < N; j++) {
				if (pay[i] < pay[j]) {
					pay[i] = pay[j];
				}
			}
		}
		else {
			int temp = i + T[i];
			pay[i] = P[i] + pay[temp];
			for (int j = i + 1; j <= temp; j++) {
				if (pay[i] < pay[j]) {
					pay[i] = pay[j];
				}
			}

		}
		
	}


	printf("%d", pay[0]);


	return 0;

}