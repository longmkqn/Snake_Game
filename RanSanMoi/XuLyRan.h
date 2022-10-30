#pragma once
#include"DoHoa.h"
#include<iostream>
#include"VeRan.h"
#include"RanAnMoi.h"
using namespace std;


void Them(int a[], int x) {
	for (int i = sl; i > 0; i--) {
		a[i] = a[i - 1];
	}
	a[0] = x;
	sl++;
}

void Xoa(int a[],int vt) {
	for (int i = vt; i < sl; i++) {
		a[i] = a[i + 1];
	}
	sl--;
}

void XuLyRan(int toadox[], int toadoy[],int x,int y, int &xmoi, int &ymoi) {
	//them toa do moi vao dau mang
	Them(toadox, x);
	Them(toadoy, y);
	if (KtraRanAnMoi(toadox[0], toadoy[0], xmoi, ymoi) == false) {
		//xoa toa do cuoi mang
		Xoa(toadox, sl - 1);
		Xoa(toadoy, sl - 1);
	}
	else {
		TaoMoi(xmoi, ymoi, toadox, toadoy);
		sl--;
	}
	//Ve ran
	VeRan(toadox, toadoy);
}