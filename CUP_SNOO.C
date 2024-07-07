#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void pop();
void main()
{
	int gd=DETECT,gm;
	int i,j,k,l,m,n,o,p,q,flag=0,r,s,t,u,v,w,x,y,z,a,b,c,d,e,f,O=362;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(i=0;i<200;i++)
	{
			line(170,335,170+i,335);
			delay(10);
	}
	for(j=0;j<30;j++)
	{
		arc(200,300,230,230+j,50);
		delay(10);
	}
	for(k=0;k<155;k++);
	{
		line(195,350,195+k,350);
		delay(10);
	}
	for(l=0;l<30;l++)
	{
		arc(335,303,290,290+l,50);
		delay(10);
	}
	for(m=0;m<150;m++)
	{
		line(192,330,200+m,330);
		delay(10);
	}
	for(n=0;n<70;n++)
	{
		arc(210,283,180,180+n,50);
	       delay(10);
	}
	for(o=0;o<60;o++);
	{
		arc(325,285,300,300+o,50);
	delay(10);
	}
	for(p=0;p<90;p++)
	{
		line(160,200,160,200+p);
	       delay(10);
	}
	for(q=0;q<90;q++)
	{
		line(375,200,375,200+q);
		delay(10);
	}
	for(r=0;r<215;r++)
	{
		line(160,200,160+r,200);
		delay(10);
	}
	for(s=0;s<60;s++)
	{
		arc(145,255,150,150+s,40);
		delay(10);
	}
	for(t=0;t<90;t++)
	{
		arc(135,255,135,135+t,40);
		delay(10);
	}
	for(u=0;u<53;u++)
	{
		line(108,225,108+u,225);
		delay(10);
	}
	for(v=0;v<53;v++)
	{
		line(108,285,108+v,285);
		delay(10);
	}
	for(w=0;w<51;w++)
	{
		line(110,235,110+w,235);
		delay(10);
	}
	for(x=0;x<51;x++)
	{
		line(110,275,110+x,275);
		delay(10);
	}
	for(y=0;y<10;y++)
	{
		line(250,220,250+y,220);
		delay(10);
	}
	for(z=0;z<60;z++)
	{
		line(250,220,250,220+z);
		delay(10);
	}
	for(a=0;a<60;a++)
	{
		line(260,220,260,220+a);
		delay(10);
	}
	for(b=0;b<180;b++)
	{
		arc(242,278,180,180+b,18);
		delay(10);
	}
	for(c=0;c<180;c++)
	{
		arc(242,279,180,180+c,7);
		delay(10);
	}
	for(d=0;d<11;d++)
	{
		line(224,277,224+d,277);
		delay(10);
	}
	for(e=0;e<361;e++)
	{
		arc(254,281,0,0+e,7);
		delay(10);
		}
	settextstyle(1,0,4);
	setcolor(RED);
	outtextxy(450,200,"Your");
	settextstyle(4,0,5);
	setcolor(YELLOW);
	outtextxy(500,250,"Coffee");
	settextstyle(1,0,4);
	setcolor(WHITE);
	outtextxy(530,300,"is");
	settextstyle(5,0,4);
	setcolor(RED);
	outtextxy(500,350,"READY");
	for(O=362;O<=500;O++)
	{
		delay(20);
		if(O==500)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		pop();
	}
	getch();
	closegraph();
}
void pop()
{
	int gd=DETECT,gm,i;
     //	int stick[]={120,240,-10,235,-10,245};
	clrscr();
	for(i=210;i<=1500;i=i+7)
	{
	cleardevice();
	initgraph(&gd,&gm,"c:\\Turboc3\\bgi");
   // setfillstyle(CLOSE_DOT_FILL,GREEN);
     //	rectangle(18,19,620,461);
       //	floodfill(19,20,GREEN);
	setfillstyle(SLASH_FILL,BLUE);
	rectangle(2,2,18,478);
	floodfill(3,3,WHITE);
	setfillstyle(SLASH_FILL,BLUE);
	rectangle(18,461,620,478);
	floodfill(19,462,WHITE);
	setfillstyle(SLASH_FILL,BLUE);
	rectangle(18,2,620,19);
	floodfill(19,3,WHITE);
	setfillstyle(SLASH_FILL,BLUE);
	rectangle(620,2,637,478);
	floodfill(621,3,WHITE);
      setfillstyle(SOLID_FILL,WHITE);
	circle(i,240,13); //White Ball
	floodfill(i,240,WHITE);
	setfillstyle(SOLID_FILL,RED);
	circle(320,240,11); //Ball 1
	floodfill(321,240,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(339,226,11); //Ball 2
	floodfill(340,226,WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	circle(340,250,11); //Ball 3
	floodfill(341,250,WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	circle(357,215,11); //Ball 4
	floodfill(358,215,WHITE);
	setfillstyle(SOLID_FILL,CYAN);
	circle(358,237,11); //Ball 5
	floodfill(359,237,WHITE);
	setfillstyle(SOLID_FILL,BLACK);
	circle(360,259,11); //Ball6
	floodfill(361,259,WHITE);
	setfillstyle(SOLID_FILL,MAGENTA);
	circle(375,202,11); //Ball 7
	floodfill(376,202,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	circle(378,225,11); //Ball 8
	floodfill(379,225,WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	circle(380,248,11); //Ball 9
	floodfill(381,248,WHITE);
	setfillstyle(SOLID_FILL,RED);
	circle(380,270,11); //Ball 10
	floodfill(381,270,WHITE);
	arc(19,20,270,0,30); //Hole 1
	arc(320,20,180,0,30); //Hole 2
	arc(619,20,180,270,30); //Hole 3
	arc(19,461,0,90,30); //Hole 4
	arc(317,460,0,180,30);  //Hole 5
	arc(620,460,90,180,30); //Hole 6
       //	fillpoly(3,stick); //Stick
       delay(79);
       }
	getch();
	closegraph();
}