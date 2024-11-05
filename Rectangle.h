#pragma once

#include "IShape.h"

//矩形クラス : 継承元 図形クラス
class Rectangle : public IShape {

public:

	//初期化
	void Initialize(float height, float width);

	//面積計算
	void Size() override;

	//面積の表示
	void Draw() override;

private:

	//高さ
	float height_;

	//幅
	float width_;

	//面積
	float area_;
};