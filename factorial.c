// programe written by Majid Ansari

#include<conio.h>
#include<stdio.h>

int main( ) {
	
	printf("%d",fact(10));
	return 0;
}

int fact(int num) {
	if(num < 0)
		return -1;
	if(num == 0)
		return 1;
	
	return (num * fact(num-1));
}
