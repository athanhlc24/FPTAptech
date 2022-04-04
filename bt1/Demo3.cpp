#include<stdio.h>
int main(){
	// input a,b,c
	int a;
	scanf("%d",&a);
	
	int b;
	scanf("%d",&b);
	
	int c;
	scanf("%d", &c);
	if(	a>b){
		
		if(a>c){
			printf("a la so lon nhat");
			
			
		}
		else{
			printf("c la so lon nhat");
		}
		
	}
	else {
		if(b>c){
			printf("b la so lo nhat ");
		}
		else {
			printf("c la so lon nhat");
		}
	}
}
