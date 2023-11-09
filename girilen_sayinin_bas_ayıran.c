#include <iostream>
#include <stdio.h>
#include<locale.h>



int main(){
setlocale(LC_ALL, "Turkish");
int a,bas,kal,i=0,deger=1,yedek;

printf("Sayiyi girin:");
scanf("%d",&a);
yedek=a;
printf("Kaç basamak ayırmak istiyorsunuz:");
scanf("%d",&bas);
for(; i<bas;  i++){
	kal=a%10;
	a=a/10;
	if(i==0){
		printf("1'ler/lar basamağı=%d\t",kal);
	}
	
	else{
	printf("%d'ler/lar basamağı=%d\t",deger,kal);
	}
	
	deger=deger*10;
	if(deger>yedek){
		break;
	}
	
	
	}

}
