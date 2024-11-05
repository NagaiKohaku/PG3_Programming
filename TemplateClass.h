#pragma once

//�e���v���[�g�^��錾
template <typename Type, typename Type2>

//�e���v���[�g�N���X
class TemplateClass {

public:

	//�R���X�g���N�^
	TemplateClass(Type number1, Type2 number2) :
		Number1(number1), Number2(number2) {}

	//�l���������ق���Ԃ�
	Type Min() {

		if (Number1 < Number2) {

			//Number1�̂ق���������
			return static_cast<Type> (Number1);
		}
		else {

			//Number2�̂ق���������
			return static_cast<Type2>(Number2);
		}
	}

private:

	//�l1
	Type Number1;

	//�l2
	Type2 Number2;
};