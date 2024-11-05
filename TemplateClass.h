#pragma once

//テンプレート型を宣言
template <typename Type, typename Type2>

//テンプレートクラス
class TemplateClass {

public:

	//コンストラクタ
	TemplateClass(Type number1, Type2 number2) :
		Number1(number1), Number2(number2) {}

	//値が小さいほうを返す
	Type Min() {

		if (Number1 < Number2) {

			//Number1のほうが小さい
			return static_cast<Type> (Number1);
		}
		else {

			//Number2のほうが小さい
			return static_cast<Type2>(Number2);
		}
	}

private:

	//値1
	Type Number1;

	//値2
	Type2 Number2;
};