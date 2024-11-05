#pragma once

//図形クラス
class IShape {

public:

	//純粋仮想デストラクタ
	virtual ~IShape() = 0;

	//面積計算(純粋仮想関数)
	virtual void Size() = 0;

	//面積の表示(純粋仮想関数)
	virtual void Draw() = 0;

};