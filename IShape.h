#pragma once

//�}�`�N���X
class IShape {

public:

	//�������z�f�X�g���N�^
	virtual ~IShape() = 0;

	//�ʐόv�Z(�������z�֐�)
	virtual void Size() = 0;

	//�ʐς̕\��(�������z�֐�)
	virtual void Draw() = 0;

};