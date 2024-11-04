#include <stdio.h>

#include "chrono"
#include "thread"

#include "Enemy.h"

//LE2C_18_ナガイ_コハク PG3_02_01 メンバ関数ポインタ

int main() {

	printf("エネミーは生成後、3秒ごとに行動を変更します\n\n");

	//1秒間待機
	std::this_thread::sleep_for(std::chrono::seconds(1));

	//エネミークラス
	Enemy enemy;

	while (true) {

		//エネミーの更新
		enemy.Update();

		//エネミーのフェーズが離脱フェーズになったら
		if (enemy.GetPhase() > Phase::Leave) {

			//ループを抜ける
			break;
		}
	}

	return 0;
}