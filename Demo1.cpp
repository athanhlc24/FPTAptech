#include <stdio.h>
int main(){
	// input num
	int num;
	scanf("%d", &num);
	
	// r = num % 2
	int r;
	r = num%2;
	
	// kiem tra r = 0
	if(r==0){
		// Yes
		// Display: num la so chan
		printf("num la so chan");
	}
	else {
		// Na
		// Display: nam la so le
		printf("num la so le");
	}
	//stop
}
