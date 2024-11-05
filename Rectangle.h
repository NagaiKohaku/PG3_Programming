#pragma once

#include "IShape.h"

//��`�N���X : �p���� �}�`�N���X
class Rectangle : public IShape {

public:

	//������
	void Initialize(float height, float width);

	//�ʐόv�Z
	void Size() override;

	//�ʐς̕\��
	void Draw() override;

private:

	//����
	float height_;

	//��
	float width_;

	//�ʐ�
	float area_;
};