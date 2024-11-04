#include "Enemy.h"

#include "stdio.h"
#include "math.h"

//�t�F�[�Y�̊֐��e�[�u��
void (Enemy::* Enemy::phaseTable_[])()
= {
	&Enemy::Approach, //�ڋ�
	&Enemy::Attack,   //�U��
	&Enemy::leave     //���E
};

//�R���X�g���N�^
Enemy::Enemy() {

	//�t�F�[�Y��0�ԂŃ��Z�b�g
	phase_ = 0;

	timer_.Initialize();

	printf("�G�l�~�[�𐶐�\n");
}

//�X�V
void Enemy::Update() {

	//�^�C�}�[�̍X�V
	timer_.Update();

	//1�b��������
	if (fmodf(timer_.GetTime(),1.0f) <= 1e-6f) {

		//�u.�v��\��
		printf(".\n");
	}

	//3�b��������
	if (timer_.GetTime() >= 3.0f) {

		//���݂̃t�F�[�Y�����s
		(this->*phaseTable_[phase_])();

		//�t�F�[�Y��1�i�K�i�߂�
		StepPhase();

		//�^�C�}�[�̃��Z�b�g
		timer_.Reset();
	}
}

//�ڋ�
void Enemy::Approach() {

	printf("���݂̍s�� : �v���C���[�Ɍ����Đڋߒ�\n");
}

//�U��
void Enemy::Attack() {

	printf("���݂̍s�� : �ˌ���\n");
}

//���E
void Enemy::leave() {

	printf("���݂̍s�� : �X�e�[�W�O�ɗ��E��\n");
}

//�s���t�F�[�Y��1�i�K�i�߂�
void Enemy::StepPhase() {

	//�s���t�F�[�Y��1�i�K�i�߂�
	phase_++;
}