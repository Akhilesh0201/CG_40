#include<graphics.h>
#include<stdio.h>
#include<conio.h>


int main()
{
	int x,y,x1,y1,x2,y2,p,dx,dy;
	int gd=DETECT,gm=0;
	initgraph(&gd,&gm, "");
	printf("\n Enter x1 cordinate: ");
	scanf("%d",&x1);
	printf("\n Enter y1 cordinate: ");
	scanf("%d",&y1);
	printf("\n Enter x2 cordinate: ");
	scanf("%d",&x2);
	printf("\n Enter y2 cordinate: ");
	scanf("%d",&y2);
	
	x=x1;
	y=y1;
	dx=x2-x1;
	dy=y2-y1;
	
	putpixel (x,y, RED);
	p = (2 * dy-dx);
	
	while(x <= x2)
	{
		if(p<0)
		{
			x = x+1;
			p = p + 2*dy;
		}
		else 
		{
			x = x + 1;
			y = y + 1;
			p = p + (2 * dy) - (2 * dx);
			
		}
		putpixel (x,y, RED);
		
	}

	getch();
	closegraph();
}
