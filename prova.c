#include <stdio.h>
int main(){
	
	int a,sayac=1,yedeksay,b,c=1;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		sayac++;
		printf("sayac=%d ",sayac);
		b=sayac;
		for(int j=0;j<4;j++){
			yedeksay=b+c;
			b=b+c;
			printf("yedeksay=%d ",yedeksay);
		}
		c++;
		printf("\n");       
	}
	return 0;
}
/*	çıktı :	5 girilince
			2 3 4 5 6
			3 5 7 9 11
			4 7 10 13 16
			5 9 13 17 21	
			6 11 16 21 26
*/
