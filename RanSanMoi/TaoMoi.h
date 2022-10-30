#pragma once
#include<iostream>
#include"DoHoa.h";
#include"VeRan.h"
using namespace std;

bool Ktra_RanDeMoi(int xmoi, int ymoi, int toadox[], int toadoy[]) {
	for (int i = 0; i < sl; i++) {
		if ((xmoi == toadox[i]) && (ymoi == toadoy[i]))
			return true;
	}
	return false;
}

void TaoMoi(int &xmoi, int &ymoi, int toadox[], int toadoy[]) {
	do {
		//x se nam trong [11,99]
		xmoi = rand() % (99 - 11 + 1) + 11;
		// y se nam trong [2,25]
		ymoi = rand() % (25 - 2 + 1) + 2;
	} while (Ktra_RanDeMoi(xmoi, ymoi, toadox, toadoy) == true);
	gotoXY(xmoi, ymoi);
	SetColor(12);
	cout << "$";
	SetColor(7);
}