#include "Rectangle.h"

#include "stdio.h"

void Rectangle::Initialize(float height, float width) {

	height_ = height;

	width_ = width;
}

void Rectangle::Size() {

	area_ = height_ * width_;
}

void Rectangle::Draw() {

	printf("ñ êœ : %.2f\n", area_);
}