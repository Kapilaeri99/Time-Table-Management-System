#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#ifndef hello_h
#define hello_h
#ifndef graphics_h
#define graphics_h
class hello
{
	public:
	void hello_graph()
	{       int gd=DETECT,gm;
		initgraph(&gd,&gm,"..\\bgi");
		setbkcolor(WHITE);
		setcolor(BLUE);
		circle(getmaxx()/2,getmaxy()/2,100);
		circle(350,200,6);
		circle(280,200,6);
		arc(315,250,180,360,50);
		delay(1000);
		settextstyle(8,0,4);
		outtextxy(270,350,"HELLO");
		delay(2000);
	}
};
class graph:public hello
{
	public:
	void front_graph()
	{
		hello::hello_graph();
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"..\\bgi");
		setbkcolor(WHITE);
		setcolor(BLUE);
		settextstyle(8,0,4);
		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		settextstyle(8,0,2);
		outtextxy(130,getmaxy()/8,"welcome to timetable management");
		rectangle(30,10,610,50);
		rectangle(60,130,580,330);
		settextstyle(1,0,2);
		outtextxy(225,getmaxy()/3.5,"Enter Your Choice");
		outtextxy(80,getmaxy()/2.6," 1. Registration");
		outtextxy(80,getmaxy()/2.2," 2. Login ID");
		outtextxy(80,getmaxy()/1.9," 3. Forgot Passward");
		outtextxy(80,getmaxy()/1.655," 4. Exit");
		settextstyle(11,0,1);
		outtextxy(80,350,"NOTE:-");
		outtextxy(80,370,".For New Registration Press 1 and Then Enter ");
		outtextxy(80,390,".For Login ID Press 2 and Then Enter");
		outtextxy(80,410,".If You Forgot Your Passward or User ID Press 3 and Then Enter");
		outtextxy(80,430,".When You Finish Your Work Press 4 and Then Enter");
		outtextxy(80,450,".If you select wrong choice time table management automatically  off");
	}
	void regis_graph()
	{	int gd=DETECT,gm;
		initgraph(&gd,&gm,"..\\bgi");
		setbkcolor(LIGHTBLUE);
		setcolor(WHITE);
		rectangle(30,10,610,50);
		settextstyle(8,0,4);
		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		settextstyle(6,0,1);
		outtextxy(3,70,
"************************** Enter Required Information *************************");
		settextstyle(3,0,1);
		outtextxy(10,100,"1.Registration for teacher");
		outtextxy(10,130,"2.Registration for student");

	}
	void login_graph()
	{	int gd=DETECT,gm;
		initgraph(&gd,&gm,"..\\bgi");
		setbkcolor(DARKGRAY);
		setcolor(WHITE);
			rectangle(30,10,610,50);
		settextstyle(8,0,4);
		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		settextstyle(6,0,1);
		outtextxy(3,70,
"************************** Enter Required Information *************************");
		settextstyle(3,0,1);
		outtextxy(10,100,"1.Login for TEACHER");
		outtextxy(10,130,"2.Login for STUDENT");
		outtextxy(10,160,"3.Login for HOD/ADMIN");
	 }
		void forgot_graph()
	{	int gd=DETECT,gm;
		initgraph(&gd,&gm,"..\\bgi");
		setbkcolor(CYAN);
		setcolor(WHITE);
			rectangle(30,10,610,50);
		settextstyle(8,0,4);
		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		settextstyle(6,0,1);
		outtextxy(3,70,
"************************** Enter Required Information *************************");
		settextstyle(3,0,1);
		outtextxy(10,100,"1.Forgot Passward for TEACHER");
		outtextxy(10,130,"2.Forgot passward for STUDENT");
	 }
};
#endif
#endif
