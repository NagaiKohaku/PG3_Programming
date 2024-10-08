#include <stdio.h>
#include <Windows.h>

//再帰的な賃金体系
int RecursionPay(int n) {

	//最初の1時間の時給は100円
	if (n <= 1) {
		return 100;
	}

	//再起処理
	return (RecursionPay(n - 1) * 2 - 50);
}

int main() {

	for (int i = 1; i <= 10; i++) {

		printf("勤務時間 : %d 時間", i);

		printf("\n");

		printf("一般的な賃金体系 : %d 円", i * 1072);

		printf("\n");

		printf("再帰的な賃金体系 : %d 円", RecursionPay(i));

		printf("\n");

		printf("--------------------------");

		printf("\n");
	}

	return 0;
}