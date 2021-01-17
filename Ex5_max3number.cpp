#include<stdio.h>
#include<conio.h>
void lonnhat(float a,  float b, float c)
{
	float max;
	max=a;
	if (b>max)
		max=b;
	else if(c>max)
		max=c;
	printf("So lon nhat la %.3f",max);
}
main()
{
	float x, y, z;
	printf("Nhap so x= ");	sc     anf("%f",&x);
	printf("Nhap so y= ");	scanf("%f",&y);	
	printf("Nhap so z= ");	scanf("%f",&z);
	lonnhat(x,y,z);
	getch();
}
