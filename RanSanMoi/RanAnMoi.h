#pragma once
#include<iostream>
#include"DoHoa.h"
#include"TaoMoi.h"
using namespace std;

bool KtraRanAnMoi(int x0, int y0, int xmoi, int ymoi) {
	if ((x0 == xmoi) && (y0 == ymoi))
		return true;
	return false;
}