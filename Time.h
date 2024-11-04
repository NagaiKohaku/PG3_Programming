#pragma once

#include "chrono"

class Time {

public:

	//������
	void Initialize();

	//�X�V
	void Update();

	//�v�����Ԃ̃��Z�b�g
	void Reset();

	//�v�����Ԃ̃Q�b�^�[
	float GetTime() { return static_cast<float>(time_.count()); }

	//DeltaTime�̃Q�b�^�[
	float GetDeltaTime() { return static_cast<float>(deltaTime_.count()); }

private:

	//�v���J�n����
	std::chrono::steady_clock::time_point startTime_;

	//�O�t���[���̎���
	std::chrono::steady_clock::time_point lastTime_;

	//���݂̎���
	std::chrono::steady_clock::time_point currentTime_;

	//�v������
	std::chrono::duration<float> time_;

	//1�t���[���Ԃ̎���
	std::chrono::duration<float> deltaTime_;
};