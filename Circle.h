#pragma once

#include "IShape.h"

//�~�N���X : �p���� �}�`�N���X
class Circle : public IShape {

public:

	//������
	void Initialize(float radius);

	//�ʐόv�Z
	void Size() override;

	//�ʐς̕\��
	void Draw() override;

private:

	//���a
	float radius_;

	//�ʐ�
	float area_;
};