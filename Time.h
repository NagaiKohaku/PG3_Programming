#pragma once

#include "chrono"

class Time {

public:

	//初期化
	void Initialize();

	//更新
	void Update();

	//計測時間のリセット
	void Reset();

	//計測時間のゲッター
	float GetTime() { return static_cast<float>(time_.count()); }

	//DeltaTimeのゲッター
	float GetDeltaTime() { return static_cast<float>(deltaTime_.count()); }

private:

	//計測開始時間
	std::chrono::steady_clock::time_point startTime_;

	//前フレームの時間
	std::chrono::steady_clock::time_point lastTime_;

	//現在の時間
	std::chrono::steady_clock::time_point currentTime_;

	//計測時間
	std::chrono::duration<float> time_;

	//1フレーム間の時間
	std::chrono::duration<float> deltaTime_;
};