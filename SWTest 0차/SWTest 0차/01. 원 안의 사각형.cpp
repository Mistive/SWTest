#include <stdio.h>

int main(void)
{
	// ���⼭���� �ۼ�
	int N;
	scanf("%d", &N);

	int sum = 0;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if ((N - x)*(N - x) + (N - y)*(N - y) <= N * N) sum++;
		}
	}

	printf("%d\n", sum * 4);
	return 0;
}