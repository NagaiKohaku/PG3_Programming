#include <stdio.h>

#include "chrono"
#include "thread"

#include "Enemy.h"

//LE2C_18_�i�K�C_�R�n�N PG3_02_01 �����o�֐��|�C���^

int main() {

	printf("�G�l�~�[�͐�����A3�b���Ƃɍs����ύX���܂�\n\n");

	//1�b�ԑҋ@
	std::this_thread::sleep_for(std::chrono::seconds(1));

	//�G�l�~�[�N���X
	Enemy enemy;

	while (true) {

		//�G�l�~�[�̍X�V
		enemy.Update();

		//�G�l�~�[�̃t�F�[�Y�����E�t�F�[�Y�ɂȂ�����
		if (enemy.GetPhase() > Phase::Leave) {

			//���[�v�𔲂���
			break;
		}
	}

	return 0;
}