#include <stdio.h>
int maior(int a, int b){
	if(a > b)
	    return a;
	else
	    return b;
}

int main () {
	int n1, n2, r;
	
	printf("digite um numero: ");
	scanf("%d", &n1);
	printf("digite outro numero: ");
	scanf("%d", &n2);
	
	r = maior(n1, n2);
	printf("o maior entre eles eh %d ",r);
}