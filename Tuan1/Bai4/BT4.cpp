#include <iostream>
#include <conio.h>
#include <limits.h>
#include <math.h>

using namespace std;
template <typename T>
void ChuyenNhiPhan(T n)
{
	int i=0;
	for(i=sizeof(n)*8-1;i>=0;i--)
	{
		cout<<(GiaTri(n,i)?"1":"0");
		if(0==1%4)
		cout<<" ";
	}
	cout<<endl;
}
bool GiaTri(long m, int n)
{
	if(((m) & ((1L) << (n))) !=0)
		return true;
	return false;
}

void main()
{
	int decimalNumber;
	short u=CHAR_MAX;
	short v=CHAR_MIN;
	short x=SHRT_MAX;
	short y=SHRT_MIN;
	int a=INT_MAX;
	int b=INT_MIN;
	cout << "So char lon nhat: " << u << endl;
	cout << "So char nho nhat: " << v << endl;
	cout << "So short int lon nhat:"<<x<<endl;
	cout << "So short int nho nhat:"<<y<<endl;
	cout << "So int lon nhat: " << a << endl;
	cout << "So int nho nhat: " << b << endl;
	cout << endl;

	cout << "So char nhi phan lon nhat: "; ChuyenNhiPhan<char>( u );
	cout<< endl;
	cout << "So char nhi phan nho nhat: "; ChuyenNhiPhan<char>(v);
	cout << endl;
	cout << "So short int nhi phan lon nhat: "; ChuyenNhiPhan<short>(x);
	cout << endl;
	cout << "So short int nhi phan nho nhat: " ; ChuyenNhiPhan<short>(y);
	cout<< endl;
	cout << "So int nhi phan lon nhat: "; ChuyenNhiPhan(a);
	cout << endl;
	cout << "So int nhi phan nho nhat: " ; ChuyenNhiPhan(b);
	cout<< endl;
	getch();
}

