// Bai4_cacpheptinhdongian_sudungham.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Khai bao nguyen mau ham
double tinhtong(double a, double b);

int main()
{
	double so1, so2;
	// nhap gia tri vao bien
	cout << "Nhap so 1: ";
	cin >> so1; // 5
    cout << "Nhap so 2: ";
	cin >> so2; // 8
	cout << "\n goi ham tinh tong\n";
	cout << so1 << "+" << so2 << "=" << tinhtong(so1, so2);
}

double tinhtong(double a, double b) {
	double tong = a + b;
	// tra ve du lieu la bien tong
	return tong;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
