#include<iostream>
using namespace std;
int main(){
	int n;
	do{
		cout<<"Nhap n: "; cin>>n;
	}while(n <= 0);
	float s = 0;
	for(int i = 1 ; i <= n; i++){
		s +=  (float) 1 / i;
		// hoac s += 1.0 / i;
	}
	int i = 1;
	cout<<"1 + 1/2 + 1/3 + 1/4 + ... + 1/n = "<<s;
	return 0;
}