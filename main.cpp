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

int main() 
{

	//勤務時間
	int workingHours = 9;

	printf("勤務時間 : %d 時間", workingHours);

	printf("\n");

	printf("一般的な賃金体系 : %d 円", workingHours * 1072);

	printf("\n");

	printf("再帰的な賃金体系 : %d 円", RecursionPay(workingHours));

	printf("\n");

	return 0;
}