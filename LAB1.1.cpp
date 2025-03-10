#include<iostream>
#include<cmath>
iomanip
using namespace std;
int main(){
	float a, b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	float sum = 0;
	sum = a * a + b * b;
	//5 * 5 + 2 * 2 = 29
	cout<<a<<" * "<<a<<" + "<<b<<" * "<<b<<" = "<<sum;
	cout<<"Tong: "<<sum;
}


