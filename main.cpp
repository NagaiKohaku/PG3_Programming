#include <stdio.h>
#include <iostream>

#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

//LE2C_18_�i�K�C_�R�n�N PG3_02_04 ���ۃN���X�ƃC���^�[�t�F�C�X

int main() {

	//�~
	Circle circle;

	//�l�p�`
	Rectangle rectangle;

	//�}�`�̏���������
	circle.Initialize(5.0f);
	rectangle.Initialize(5.0f, 5.0f);

	//�}�`�̖ʐς̌v�Z
	circle.Size();
	rectangle.Size();

	//�}�`�̖ʐς̕\��

	printf("===�~�̖ʐ�===\n");

	circle.Draw();

	printf("\n");

	printf("===�l�p�`�̖ʐ�===\n");

	rectangle.Draw();

	return 0;
}