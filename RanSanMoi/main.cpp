#include<bits/stdc++.h>
using namespace std;
#include"VeTuong.h";
#include"DoHoa.h"
#include"VeRan.h";
#include"XuLyRan.h"
#include"DiCHuyen.h"
#include"TaoMoi.h"
#include"RanAnMoi.h"
#define MAX 100
int main() {
	srand(time(NULL));
	int toadox[MAX], toadoy[MAX];
	int xmoi = 0, ymoi = 0;
	VeTuong();
	KhoiTaoRan(toadox, toadoy);
	VeRan(toadox, toadoy);
	TaoMoi(xmoi, ymoi, toadox, toadoy);
	DiCHuyen(toadox,toadoy,xmoi,ymoi);
	_getch();
}