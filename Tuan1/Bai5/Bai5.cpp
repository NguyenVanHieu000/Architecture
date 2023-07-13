#include <iostream>
#include <limits.h>
using namespace std;

void Bai5a();
void Bai5b();
void Bai5c();

int main() {
	return 0;
}

void Bai5a(){
	const int a= 0 ;
	try{
		a = 256;
		x = a;
		cout<< x << endl;

	}catch(exception e){
		std::cerr << e.what();
	}
}
void Bai5b() {
	int maxIntVariable = INT_MAX;
	try {
		int addMaxIntVariable = maxIntVariable++;
		cout << addMaxIntVariable << endl;
		long long checkMaxIntVariable = maxIntVariable + 1;
		cout << checkMaxIntVariable << endl;
		checkMaxIntVariable = LLONG_MAX;
		cout << checkMaxIntVariable << endl;
		checkMaxIntVariable = 2147483648;
		cout << checkMaxIntVariable << endl;
	}
	catch (exception e)
	{
		std::cerr << e.what();
	}
}

void Bai5c() {
	long x = 0;
	int p = INT_MIN;
	unsigned int q = 0;
	unsigned char r = 0;

	x = p + q + r;

	cout << x << endl;

	x =q + p + r;

	cout << x << endl;

	x = q + r + p;

	cout << typeid(x).name() << endl;

	p = INT_MAX;
	q = UINT_MAX;
	r = UCHAR_MAX;

	cout << r << endl;

	cout << q << endl;

	x = p + q;

	cout << typeid(p + q).name() << endl;

	x = q + p;

	cout << typeid(q + p).name() << endl;

	x = q + r + p;

	cout << typeid(q + r + p).name() << endl;
}
