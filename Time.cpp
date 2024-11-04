#include "Time.h"

void Time::Initialize() {

	//�v���J�n
	startTime_ = std::chrono::high_resolution_clock::now();

	//���݂̎��Ԃ�ݒ�
	lastTime_ = startTime_;
}

void Time::Update() {

	//���݂̎��Ԃ��L�^
	currentTime_ = std::chrono::high_resolution_clock::now();

	//�v�����Ԃ̌v�Z
	time_ = currentTime_ - startTime_;

	//1�t���[���Ԃ̎��Ԃ̌v�Z
	deltaTime_ = currentTime_ - lastTime_;

	//���݂̎��Ԃ�ݒ�
	lastTime_ = currentTime_;
}

void Time::Reset() {

	//�v���J�n���Ԃ����݂̎��ԂɃ��Z�b�g
	startTime_ = std::chrono::high_resolution_clock::now();
}