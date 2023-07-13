#include <iostream>
#include <limits.h>
using namespace std;
#include <conio.h>

#define a 21474836485998 // giá trị vượt quá phạm vi
void Bai5a();

int main() {
	Bai5a();
	getch();
}

void Bai5a(){
	int x = 39831;
	printf("gia tri nam trong pham vi chua:%d",x);
	x = a;
	printf("\ngia tri vuot qua pham vi chua cua x:%d",x);
}