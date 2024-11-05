#pragma once

#include "IShape.h"

//円クラス : 継承元 図形クラス
class Circle : public IShape {

public:

	//初期化
	void Initialize(float radius);

	//面積計算
	void Size() override;

	//面積の表示
	void Draw() override;

private:

	//半径
	float radius_;

	//面積
	float area_;
};