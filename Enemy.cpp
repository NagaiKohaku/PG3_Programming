#include "Enemy.h"

#include "stdio.h"
#include "math.h"

//フェーズの関数テーブル
void (Enemy::* Enemy::phaseTable_[])()
= {
	&Enemy::Approach, //接近
	&Enemy::Attack,   //攻撃
	&Enemy::leave     //離脱
};

//コンストラクタ
Enemy::Enemy() {

	//フェーズを0番でリセット
	phase_ = 0;

	timer_.Initialize();

	printf("エネミーを生成\n");
}

//更新
void Enemy::Update() {

	//タイマーの更新
	timer_.Update();

	//1秒立ったら
	if (fmodf(timer_.GetTime(),1.0f) <= 1e-6f) {

		//「.」を表示
		printf(".\n");
	}

	//3秒立ったら
	if (timer_.GetTime() >= 3.0f) {

		//現在のフェーズを実行
		(this->*phaseTable_[phase_])();

		//フェーズを1段階進める
		StepPhase();

		//タイマーのリセット
		timer_.Reset();
	}
}

//接近
void Enemy::Approach() {

	printf("現在の行動 : プレイヤーに向けて接近中\n");
}

//攻撃
void Enemy::Attack() {

	printf("現在の行動 : 射撃中\n");
}

//離脱
void Enemy::leave() {

	printf("現在の行動 : ステージ外に離脱中\n");
}

//行動フェーズを1段階進める
void Enemy::StepPhase() {

	//行動フェーズを1段階進める
	phase_++;
}