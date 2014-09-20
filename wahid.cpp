#include <stdio.h>                                  
#include <conio.h>

main()
{
	float f;
   float r;
   float c;
   c=0;
	printf("Tugas konvensi suhu Fahrenheit,Reamur,Celsius""\n""Masukkan suhu celsius : ");
   scanf("%f",&c);
   f=c*1.8+32;
   r=c*0.8;
   printf("jadi %2.2f derajat Fahrenheit sama dengan %2.2f derajat Reamur dan %2.2f derajat Celsius",f,r,c);
	getch();
}

