#pragma once
#include <iostream>
using namespace std;
class Opp
{
private:
	int giatri1, giatri2, giatri3, giatri4;

public:
	Opp();
	~Opp();
	int a1, newgt1, newgt2, n;
	int arr[100];
	// Phương thức : hiển thị, các toán tử bên trong hiển thị nó
		/*void set_gt1(int gt1);
		void set_gt2(int gt2);
		int get_gt2();
		int get_gt1();*/
	int get_gt1();
	int get_gt2();
	int get_gt3();
	int get_gt4();
	void set_gt1(int newgiatri1);
	void set_gt2(int newgiatri2);
	void set_gt3(int newgiatri3);
	void set_gt4(int newgiatri4);
	void display();
	void nhap();
	void xuat();
	int sum(int newgiatri1, int newgiatri2);
	int hieu(int newgiatri1, int newgiatri2);
	int multi(int newgiatri1, int newgiatri2);
	int vantoc(int newgiatri1, int newgiatri2, int newgiatri3);
	int tongket(int newgiatri1, int newgiatri2, int newgiatri3, int newgiatri4);
	int max();
	void nhapmang();
	void xuatmang();
	void menu();
	int giatritest(int giatri);
};

