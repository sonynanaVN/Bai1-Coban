#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	float s = 0;
	do{
		cout<<"Nhap n: "; cin>>n;
	}while(n <= 0);
	for(int i = 0; i <= n; i++){
		s += i * i;
	}
	cout<<"1 + 2^2 + 3^2 + ... + n^2 = "<<s;
	return 0;
}