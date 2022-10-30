#pragma once
#include<iostream>
#include"XuLyRan.h"
#include"GameOver.h"
#include"TaoMoi.h"

using namespace std;

bool GameOver = false;
int score = 0;

void XoaDuoiRan(int ToaDox[], int ToaDoy[]) {
	//KhoiTaoRan(ToaDox[], ToaDoy[]);
	for (int i = 0; i < sl; i++) {
		gotoXY(ToaDox[i], ToaDoy[i]);
		cout << " ";
	}
}

int check = 2;

void DiCHuyen(int toadox[],int toadoy[],int &xmoi,int &ymoi) {
	
	int x = 50, y = 13;// dinh hinh vi tri can di chuyen ran 
	while (GameOver == false){
		XoaDuoiRan(toadox, toadoy);
		if (_kbhit()) {
			char kitu = _getch();
			if (kitu == -32) {
				kitu = _getch();
				if (kitu == 72 && check != 0) check = 1; // di len 
				else if (kitu == 80 && check != 1) check = 0; // di xuong
				else if (kitu == 77 && check != 3) check = 2; // qua trai
				else if (kitu == 75 && check != 2) check = 3; // qua phai
			}
		}
		// di xuong
		if (check == 0) {
			y++;
		}
		// di len
		else if (check == 1) {
			y--;
		}
		// di phai
		else if (check == 2) {
			x++;
		}
		// di trai
		else if (check == 3) {
			x--;
		}
		XuLyRan(toadox, toadoy, x, y, xmoi, ymoi);
		GameOver = KtraGameOver(toadox, toadoy);
		if (KtraGameOver(toadox, toadoy) == true) {
			system("cls");
			gotoXY(50, 13);
			cout << "===== GAME OVER =====";
		}
	
		Sleep(200);
	}
	_getch();
}