#include <stdio.h>
#include <algorithm>
using namespace std;

int n[9];
int result[7];
int allsum;

int main() {

	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]);
		allsum += n[i];
	}

	int out1, out2;

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			int isHundred = allsum - n[i] - n[j];
			if (isHundred == 100) {
				out1 = i;
				out2 = j;
				break;
			}
		}
	}

	int j = 0;
	for (int i = 0; i < 9; i++) {
		if (i == out1 || i == out2) {
			continue;
		}
		else {
			result[j++] = n[i];
		}
	}

	sort(result, result + 7);
	for (int i = 0; i < 7; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}