#include <stdio.h>
#include <Windows.h>

#include "functional"

#include "random"

using namespace std;

//1~6の間でランダムな値を返す
int Random() {

	std::random_device rnd;
	std::mt19937 mt(rnd());
	std::uniform_int_distribution<> dice(1, 6);

	return static_cast<int>(dice(mt));
}

//4秒間待機
void SetTimeOut() {

	//1秒待ってから「.」を出す
	for (int i = 0; i < 3; i++) {

		Sleep(1000);

		printf(".\n");
	}

	Sleep(1000);
}

int main() {

	//プレイヤーの入力した値
	int input;

	//抽選結果
	function<bool()> lotteryResult = [&]() {

		//サイコロ(1個目)
		int dice1 = Random();

		//サイコロ(2個目)
		int dice2 = Random();

		//サイコロの和
		int diceSum = dice1 + dice2;

		//サイコロの結果
		int result = diceSum % 2;

		printf("サイコロの結果 : ");

		if (result == 0) {

			printf("丁(偶数)\n");
		} else {

			printf("半(奇数)\n");
		}

		printf("\n");

		//抽選結果を返す
		if (input == result) {

			return true;
		} else {

			return false;
		}

		};

	printf("丁半博打ゲーム\n");
	printf("ルール : ランダムで選ばれる値が 丁(偶数) か 半(奇数) かを当てる\n\n");

	while (1) {

		printf("偶数なら 0 、奇数なら 1 、終了するなら 9 を入力\n");
		scanf_s("%d", &input);

		//入力した値が「9」ならループを抜ける
		if (input == 9) {
			break;
		}

		//4秒間待機
		SetTimeOut();

		printf("あなたの予想 : ");

		if (input == 0) {

			printf("丁(偶数)\n");
		} else {

			printf("半(奇数)\n");
		}

		//抽選結果表示
		if (lotteryResult()) {

			printf("勝ち\n");
		} else {

			printf("負け\n");
		}

		printf("\n");
	}

	return 0;
}