#include<stdio.h>
int main(){
	// input a, b, c
	int a;
	scanf("%d",&a);
	
	int b;
	scanf("%d", &b);
	
	int c;
	scanf("%d", &c);
	 int Max;
	 Max = a;
	if(b>Max){
		Max= b;
	}
	if(c>Max){ 
		Max = c;
	}
		printf("so lon nhat la: %d",Max);
	
	
	}

