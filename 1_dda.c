#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
int main()
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i,gd=DETECT,gm;
	//detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"");
	printf("\nEnter the x-coordinate of the first point:");
	scanf("%f",&x1);
	printf("\nEnter the y-coordinate of the first point:");
	scanf("%f",&y1);
	printf("\nEnter the x-coordinate of the second point:");
	scanf("%f",&x2);
	printf("\nEnter the y-coordinate of the second point:");
	scanf("%f",&y2);
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>dy)
	{
		step=dx;
	}
	else
	{
		step=dy;
	}
	dx=dx/step;
	dy=dy/step;
	x=x1;
	y=y1;
	i=1;
	while(i<=step)
	{
		putpixel(x,y,14);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(100);
	}
	getch();
	closegraph();
}
