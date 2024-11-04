#include "Time.h"

void Time::Initialize() {

	//計測開始
	startTime_ = std::chrono::high_resolution_clock::now();

	//現在の時間を設定
	lastTime_ = startTime_;
}

void Time::Update() {

	//現在の時間を記録
	currentTime_ = std::chrono::high_resolution_clock::now();

	//計測時間の計算
	time_ = currentTime_ - startTime_;

	//1フレーム間の時間の計算
	deltaTime_ = currentTime_ - lastTime_;

	//現在の時間を設定
	lastTime_ = currentTime_;
}

void Time::Reset() {

	//計測開始時間を現在の時間にリセット
	startTime_ = std::chrono::high_resolution_clock::now();
}