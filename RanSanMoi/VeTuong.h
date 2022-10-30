#pragma once
#include<iostream>
#include"DoHoa.h"
#include"RanAnMoi.h"
using namespace std;

void VeTuongTren() {
	int x = 10;
	int y = 1;
	while (x < 101) {
		gotoXY(x, y);
		cout << "_";
		x++;
	}
}

void VeTuongDuoi() {
	int x = 10;
	int y = 26;
	while (x < 101) {
		gotoXY(x, y);
		cout << "_";
		x++;
	}
}

void VeTuongTrai() {
	int x = 10;
	int y = 2;
	while (y < 27) {
		gotoXY(x, y);
		cout << "|";
		y++;
	}
}

void VeTuongPhai() {
	int x = 101;
	int y = 2;
	while (y < 27) {
		gotoXY(x, y);
		cout << "|";
		y++;
	}
}


void VeTuong() {
	SetColor(2);
	VeTuongTren();
	VeTuongPhai();
	VeTuongDuoi();
	VeTuongTrai();
	SetColor(7);
}