#include "Circle.h"

#include "stdio.h"

void Circle::Initialize(float radius) {

	radius_ = radius;
}

void Circle::Size() {

	area_ = radius_ * radius_ * 3.14f;
}

void Circle::Draw() {

	printf("ñ êœ : %.2f\n", area_);
}