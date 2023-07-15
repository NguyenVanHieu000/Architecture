#include <iostream>
#include <limits.h>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
using namespace std;


void dumpFloat(float *p);
void _nhiphan(unsigned n);


int main(void) {
	float x = 0.f;
	int n = 5;
	do{
		cout <<"Nhap vao so cham dong:";
		cin >>  x ;
		dumpFloat(&x);
		cout<<endl;
		n--;
	}while (n>0);
	getch();
	return 0;
}
void dumpFloat(float *p){
	float n = *p;
	 _nhiphan(*(unsigned *)(void*)&n);
}

void _nhiphan(unsigned n)
{
    n>>1?_nhiphan(n>>1):0;
    printf("%d",n&1);
}