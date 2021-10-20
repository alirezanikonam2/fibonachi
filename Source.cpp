#include<iostream>
using namespace std;
int main(){


	int n = 0,*a;
	cout << "hellow welcom to this program this program is for compuing fibonachi" << endl<<
		"please enter how many    fibonachi sentens do you want=   ";
	cin >>n;
	a = new int[n];
	if (n == 1){
		cout << 1<<endl;
	}
	if (n == 2){
		cout << 1 << "   " << 1;
	}
	if (n > 2){
		a[1] = 1;
		a[2] = 1;
		cout << a[1] << "   " << a[2] << "   ";
		for (int i = 3; i <= n; i++){
			a[i] = a[i-1] + a[i-2];
			cout << a[i] << "    ";
		}
	}

	system("pause");
	return 0;
}