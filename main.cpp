#include <stdio.h>
#include <Windows.h>

#include "random"

typedef int (*PFunc)();

//1~6の間でランダムな値を返す
int Random() {

	std::random_device rnd;
	std::mt19937 mt(rnd());
	std::uniform_int_distribution<> dice(1, 6);

	return static_cast<int>(dice(mt));
}

//抽選結果を表示
void LotteryResult(PFunc pFunc, int input) {

	printf("\n");

	printf("勝負\n");

	//1秒待ってから「.」を出す
	for (int i = 0; i < 3; i++) {

		Sleep(1000);

		printf(".\n");
	}

	Sleep(1000);

	//サイコロ(1個目)
	int dice1 = pFunc();

	//サイコロ(2個目)
	int dice2 = pFunc();

	//サイコロの和
	int diceSum = dice1 + dice2;

	//抽選結果
	int result = diceSum % 2;

	printf("出た目は (%d、%d)\n", dice1, dice2);

	printf("\n");

	//抽選結果の表示
	if (result == 0) {

		printf("今回の結果   : 丁(偶数)\n");
	} else {

		printf("今回の結果   : 半(奇数)\n");
	}

	//プレイヤーの予想の表示
	if (input == 0) {

		printf("あなたの予想 : 丁(偶数)\n");
	} else {

		printf("あなたの予想 : 半(奇数)\n");
	}

	printf("\n");

	//勝敗の表示
	if (result == input) {

		printf("勝ち\n");
	} else {

		printf("負け\n");
	}

	printf("\n");
}

int main() {

	//プレイヤーの入力した値
	int input;

	//関数ポインタ
	PFunc pFunc = Random;

	printf("丁半博打ゲーム\n");
	printf("ルール : ランダムで選ばれる値が 丁(偶数) か 半(奇数) かを当てる\n\n");

	while (1) {

		printf("偶数なら 0 、奇数なら 1 、終了するなら 9 を入力\n");
		scanf_s("%d", &input);

		//入力した値が「9」ならループを抜ける
		if (input == 9) {
			break;
		}

		//抽選開始
		LotteryResult(pFunc, input);
	}

	return 0;
}