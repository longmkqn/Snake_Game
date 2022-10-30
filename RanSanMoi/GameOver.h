#pragma once
#include<iostream>
#include"DoHoa.h"
using namespace std;


bool RanChamTuong(int x0, int y0) {
	if (y0 == 1 && (x0 >= 10 && x0 <= 100))
		return true;//cham tuong tren
	else if (y0 == 26 && (x0 >= 10 && x0 <= 100))
		return true;//cham tuong duoi
	else if (x0 == 10 && (y0 >= 1 && y0 <= 26))
		return true;//cham tuong trai
	else if (x0 == 100 && (y0 >= 1 && y0 <= 26))
		return true;
	return false;
}

bool RanChamDuoi(int toadox[], int toadoy[]) {
	for (int i = 1; i < sl; i++) {
		if ((toadox[0] == toadox[i]) && (toadoy[0] == toadoy[i]))
			return true;
	}
	return false;
}

bool KtraGameOver(int toadox[], int toadoy[]) {
	bool Tuong = RanChamTuong(toadox[0], toadoy[0]);
	bool Duoi = RanChamDuoi(toadox, toadoy);
	if (Tuong == true || Duoi == true)
		return true;
	return false;
}