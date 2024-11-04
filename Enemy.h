#pragma once

#include "Time.h"

enum Phase {
	Approach,
	Attack,
	Leave
};

class Enemy {

public:

	//�R���X�g���N�^
	Enemy();

	//�X�V
	void Update();

	//�ڋ�
	void Approach();

	//�U��
	void Attack();

	//���E
	void leave();

	//�s���t�F�[�Y��1�i�K�i�߂�
	void StepPhase();

	size_t GetPhase() { return phase_; }

private:

	//�s���e�[�u��
	static void (Enemy::* phaseTable_[])();

	//�s���ԍ�
	size_t phase_;

	//�^�C�}�[
	Time timer_;
};