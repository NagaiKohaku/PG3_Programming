#pragma once

#include "Time.h"

enum Phase {
	Approach,
	Attack,
	Leave
};

class Enemy {

public:

	//コンストラクタ
	Enemy();

	//更新
	void Update();

	//接近
	void Approach();

	//攻撃
	void Attack();

	//離脱
	void leave();

	//行動フェーズを1段階進める
	void StepPhase();

	size_t GetPhase() { return phase_; }

private:

	//行動テーブル
	static void (Enemy::* phaseTable_[])();

	//行動番号
	size_t phase_;

	//タイマー
	Time timer_;
};