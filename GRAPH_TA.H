#include<iostream.h>
#include"tt_view.h"
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>
#ifndef graph_ta_h
#define graph_ta_h
class graph_main
{      public:
       void graphics()
	{
		int gdriver=DETECT,gmode,j=192,i=64;
		initgraph(&gdriver,&gmode,"..\\bgi");
		setcolor(WHITE);

		rectangle(2,100,638,450);
		while(i<=590)
		{
			line(i,100,i,450);
			i+=72;
			}
		line(2,132,638,132);
		while(j<=390)
		{
			line(2,j,351,j);
			line(424,j,638,j);
			j+=64;
		}

		setcolor(WHITE);
		settextstyle(8,1,4);
		outtextxy(360,getmaxy()/2,"BREAK");
		settextstyle(8,0,4);
		rectangle(30,10,610,50);
		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		settextstyle(11,0,1);
		outtextxy(275,getmaxy()/8,"TIME TABLE");
		settextstyle(11,0,1);

		outtextxy(75,106,"09:00-");
		outtextxy(75,117,"10:00");
		outtextxy(150,106,"10:00-");
		outtextxy(150,117,"11:00");
		outtextxy(225,106,"11:00-");
		outtextxy(225,117,"12:00");
		outtextxy(295,106,"12:00-");
		outtextxy(295,117,"01:00");
		outtextxy(368,106,"01:00-");
		outtextxy(368,117,"02:00");
		outtextxy(440,106,"02:00-");
		outtextxy(440,117,"03:00");
		outtextxy(515,106,"03:00-");
		outtextxy(515,117,"04:00");
		outtextxy(580,106,"04:00-");
		outtextxy(580,117,"05:00");

	 }

};
  sem1_tt stt1;
sem3_tt stt3;
sem5_tt stt5;
sem7_tt stt7;
class view:public graph_main
{
public:
int i;
void s1sa()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"..\\bgi");
  graph_main::graphics();
  setbkcolor(DARKGRAY);
  for(i=0;i<10;i++)
  {
  cout<<endl;
  }
  stt1.sem1seca();
  }
void s1sb()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"..\\bgi");
  graph_main::graphics();
   setbkcolor(DARKGRAY);
  for(i=0;i<10;i++)
  {
  cout<<endl;
  }
  stt1.sem1secb();
  }
void s3sa()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"..\\bgi");
  graph_main::graphics();
   setbkcolor(DARKGRAY);
  for(i=0;i<10;i++)
  {
  cout<<endl;
  }
  stt3.sem3seca();
  }
void s3sb()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"..\\bgi");
  graph_main::graphics();
   setbkcolor(DARKGRAY);
  for(i=0;i<10;i++)
  {
  cout<<endl;
  }
  stt3.sem3secb();
  }
void s5sa()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"..\\bgi");
  graph_main::graphics();
   setbkcolor(DARKGRAY);
  for(i=0;i<10;i++)
  {
  cout<<endl;
  }
  stt5.sem5seca();
  }
  void s5sb()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"..\\bgi");
  graph_main::graphics();
   setbkcolor(DARKGRAY);
  for(i=0;i<10;i++)
  {
  cout<<endl;
  }
  stt5.sem5secb();
  }
  void s7sa()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"..\\bgi");
  graph_main::graphics();
   setbkcolor(DARKGRAY);
  for(i=0;i<10;i++)
  {
  cout<<endl;
  }
  stt7.sem7seca();
  }
  void s7sb()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"..\\bgi");
  graph_main::graphics();
   setbkcolor(DARKGRAY);
  for(i=0;i<10;i++)
  {
  cout<<endl;
  }
  stt7.sem7secb();
  }



};
#endif

