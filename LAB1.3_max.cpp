#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"Nhap c: "; cin>>c;
	int max = a;
	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	int max;
	//toán tu 3 ngôi:
	//max = (a > b && a > c) ? a : ((b > c) ? b : c);
	cout<<"So lon nhat trong ba so "<<a<<", "<<b<<", "<<c<<" la: "<<max;
	return 0;
}