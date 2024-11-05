#include <stdio.h>
#include <iostream>

#include "Cheetah.h"
#include "Lion.h"

//LE2C_18_ナガイ_コハク PG3_02_03 ポリモーフィズム

int main() {

	//チーター
	Cheetah cheetah;

	//ライオン
	Lion lion;

	printf("=== チーターの説明 ===\n\n");

	//チーターの説明
	cheetah.Explanation();

	printf("\n");

	printf("=== ライオンの説明 ===\n\n");

	//ライオンの説明
	lion.Explanation();

	return 0;
}