//___________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ______________//
//____________   C++ PROGRAM TO CREATE MAN JOGGING ____________________//

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void body();
void first();
void second();
int i,a=0,b=0,c=0,d=0;

void main()
{
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

for(i=0;i<100;i++)
{
body();
if(i%2==0)
{
first();
}
else
{
second();
}
a=a+5;
delay(250);
cleardevice();
}
getch();
}


void first()
{
b=a;

setcolor(14);
//FIRST HAND
line(10+b,310,0+b,320);
line(10+b,308,0+b,318);
line(0+b,320,8+b,323);
line(0+b,318,8+b,323);

setcolor(10);
//SECOND HAND
line(10+b,310,15+b,320);
line(9+b,310,16+b,321);
line(15+b,320,18+b,312);
line(16+b,321,19+b,313);

setcolor(GREEN);
//FIRST LEG
setfillstyle(1,GREEN);
line(10+b,340,13+b,360);
line(13+b,360,10+b,375);
ellipse(13+b,375,0,360,4,2);
floodfill(14+b,375,GREEN);

setcolor(WHITE);
//SECOND LEG
setfillstyle(1,WHITE);
line(10+b,340,8+b,360);
line(8+b,360,1+b,364);
ellipse(2+b,367,0,360,2,4);
floodfill(3+b,367,WHITE);
}


void second()
{
c=a;

setcolor(12);
//SECOND HAND in 2
line(10+c,310,5+c,323);
line(8+c,310,4+c,323);
line(5+c,323,12+c,320);
line(4+c,323,12+c,320);
setcolor(15);

//FIRST HAND in 2
line(10+c,310,13+c,323);
line(11+c,310,14+c,324);
line(13+c,323,18+c,313);
line(14+c,324,17+c,313);

setcolor(15);

//LEG
setfillstyle(1,WHITE);
line(10+c,340,11+c,363);
line(11+c,360,7+c,375);
ellipse(9+c,375,0,360,4,2);
floodfill(10+c,375,WHITE);

setcolor(11);
setfillstyle(1,11);
line(10+c,340,13+c,360);
line(13+c,360,2+c,363);
ellipse(1+c,365,0,360,2,4);
floodfill(2+c,365,11);
}


void body()
{
// road
   setcolor(7);
   line(0,370,640,370);
   line(0,430,640,430);
   line(0,455,640,455);

   // hills
   setcolor(7);
   line(0,200,50,150);
   line(50,150,150,200);
   line(150,200,300,100);
   line(300,100,450,175);
   line(450,175,640,125);

   // sun
   setcolor(14);
   circle(475,75,25);

   // text
   settextstyle(3,0,2);
   setcolor(a);
   outtextxy(150,430,"CREATE BY ROHIT TECH STUDY");

setcolor(15);
ellipse(10+a,290,0,360,5,10);
circle(12+a,288,1);
line(10+a,300,10+a,340);
}




