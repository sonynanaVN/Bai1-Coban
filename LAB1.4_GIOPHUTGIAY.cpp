#include<iostream>
using namespace std;
int main(){
	int gio, phut, giay, x;
	cout<<"Nhap so giay: "; cin>>x;
	gio = x / 3600;
	phut = (x % 3600) / 60;
	giay = x % 60;
	cout<<gio<<" Gio "<<phut<<" Phut "<<giay<<" Giay!";
	return 0;
}