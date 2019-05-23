#include "Opp.h"



Opp::Opp()
{
}


Opp::~Opp()
{
}
// cac ham thanh vien
void Opp::display()
{
	cout << "\t_*==Menu==*_" << endl;
	cout << "==========================" << endl;
	cout << "Moi ban chon  cac chuc nang sau :" << endl;
	cout << "1. + - x / hai so:" << endl;
	cout << "2. Trung binh cong hai so." << endl;
	cout << "3. Van toc ban dau." << endl;
	cout << "4. Nhap diem kiem tra " << endl;
	cout << "5. Tinh p s va total." << endl;
	cout << "6.Nhap vao n so va tim max trong do" << endl;
	cout << "7.Thoat" << endl;
	cout << "============================" << endl;
}
//void Opp::set()
//{
//	return giatri;
//}
//int Opp::get()
//{
//	return giatri;
//}
int Opp::get_gt1()
{
	return giatri1;
}
void Opp::set_gt1(int newgiatri1)
{
	giatri1 = newgiatri1;
}
void Opp::set_gt3(int newgiatri3)
{
	giatri3 = newgiatri3;
}
void Opp::set_gt4(int newgiatri4)
{
	giatri4 = newgiatri4;
}
int Opp::get_gt4()
{
	return giatri4;
}
int Opp::get_gt3()
{
	return giatri3;
}
int Opp::get_gt2()
{
	return giatri2;
}
void Opp::set_gt2(int newgiatri2)
{
	giatri2 = newgiatri2;
}
void Opp::nhap()
{
	cout << "Nhap vao so: ";
	cin >> a1;
}
void Opp::xuat()
{
	cout << "Gia tri " << a1;
}
int Opp::sum(int newgiatri1, int newgiatri2)
{
	int a3;
	a3 = newgiatri1 + newgiatri2;
	cout << "Tong " << a3;
	return a3;
}
int Opp::hieu(int newgiatri1, int newgiatri2)
{
	int a3;
	a3 = newgiatri1 - newgiatri2;
	cout << "Hieu: " << a3;
	return a3;
}
int Opp::multi(int newgiatri1, int newgiatri2)
{
	int a3;
	a3 = newgiatri1 * newgiatri2;
	cout << "Multi: " << a3;
	return a3;
}
int Opp::vantoc(int newgiatri1, int newgiatri2, int newgiatri3)
{
	int v;
	v = newgiatri1 + newgiatri2 * newgiatri3;
	return v;
}
int Opp::tongket(int newgiatri1, int newgiatri2, int newgiatri3, int newgiatri4)
{
	int tongket;
	tongket = (newgiatri1 + newgiatri2 + newgiatri3 * 2 + newgiatri4 * 3) / 7;
	cout << tongket << endl;
	return tongket;
}

void Opp::menu()
{
	cout << " chon me nu tu 1 -7: " << endl;
}
int Opp::giatritest(int newgt)
{
	cin >> newgt;
	cout << newgt;
	return newgt;
}
int Opp::max()
{
	return 0;
}
void Opp::nhapmang(int a[], int &n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap vao phan tu la: " << i << endl;
		cin >> arr[i];
	}
}
void Opp::xuatmang(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "sola:" << endl;
		cout << arr[i];
		cout << "\n";
	}
}