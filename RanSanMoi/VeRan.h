#pragma once
#include<iostream>
#include"DoHoa.h"
using namespace std;
int sl = 4;

void KhoiTaoRan(int ToaDox[],int ToaDoy[]) {
	int x = 50, y = 13;
	for (int i = 0; i < sl; i++) {
		ToaDox[i] = x;
		ToaDoy[i] = y;
		x--;

	}
}

void VeRan(int ToaDox[],int ToaDoy[]) {
	for (int i = 0; i < sl; i++) {
		gotoXY(ToaDox[i], ToaDoy[i]);
		if (i == 0) cout << "0";
		else if (i == sl - 1) cout << "~";
		else cout << "o";
	}
}