#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char input[6][5],temp;
	for (int i = 0;i < 6;i++) {
		for (int j = 0;j < 4;j++) {
			scanf("%c",&input[i][j]);
		}
	}
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 4;j++) {
			if (input[i][j] > input[i + 1][j]) {
				temp = input[i][j];
				input[i][j] = input[i + 1][j];
				input[i + 1][j] = temp;
			}
		}
	}
	for (int i = 0;i < 6;i++) {
		for (int j = 0;j < 4;j++) {
			printf("%c", input[i][j]);
		}
	}
	return 0;
}