#include <stdio.h>
#include <iostream>

#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

//LE2C_18_ナガイ_コハク PG3_02_04 抽象クラスとインターフェイス

int main() {

	//円
	Circle circle;

	//四角形
	Rectangle rectangle;

	//図形の初期化処理
	circle.Initialize(5.0f);
	rectangle.Initialize(5.0f, 5.0f);

	//図形の面積の計算
	circle.Size();
	rectangle.Size();

	//図形の面積の表示

	printf("===円の面積===\n");

	circle.Draw();

	printf("\n");

	printf("===四角形の面積===\n");

	rectangle.Draw();

	return 0;
}