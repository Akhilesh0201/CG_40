#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void pixel(int x,int y,int xc,int yc)
{
	putpixel(x+xc,y+yc,BLUE);
	putpixel(x+xc,-y+yc,BLUE);
	putpixel(-x+xc,y+yc,BLUE);
	putpixel(-x+xc,-y+yc,BLUE);
	putpixel(y+xc,x+yc,BLUE);
	putpixel(y+xc,-x+yc,BLUE);
	putpixel(-y+xc,x+yc,BLUE);
	putpixel(-y+xc,-x+yc,BLUE);
}
main()
{
	int gd=DETECT,gm=0,r,xc,yc,x,y;
	float p;
	//detectgraph(&gd,&gm);
	initgraph(&gd,&gm," ");
	printf("\n Enter the radius of the circle:");
	scanf("%d",&r);
	printf("\n Enter the center of the circle:");
	scanf("%d %d",&xc,&yc);
	y=r;
	x=0;
	p=(5/4)-r;
	while(x<y)
	{
		if(p<0)
		{
			x=x+1;
			y=y;
			p=p+2*x+3;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*x-2*y+5;
		}
		pixel(x,y,xc,yc);
	}
	getch();
	closegraph();
}
