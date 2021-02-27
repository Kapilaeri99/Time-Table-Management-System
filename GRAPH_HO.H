#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#ifndef graph_ho_h
#define graph_ho_h

class graph_hod
{
	public:
	void options()
	{
		int gd=DETECT,gm,i;
		initgraph(&gd,&gm,"..\\bgi");
		 setbkcolor(CYAN);
		settextstyle(8,0,4);
		cin>>i;
		switch(i)
		{
		case 1:

		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		rectangle(30,10,610,50);
		settextstyle(8,0,2);
		outtextxy(4,getmaxy()/5,"SELECT OPERATION THAT YOU WANT TO PERFORM");
		settextstyle(1,0,1);
		outtextxy(40,getmaxy()/3.5,"1. Add Teacher");
		outtextxy(40,getmaxy()/2.6,"2. Add Subject");
		outtextxy(40,getmaxy()/2.1,"3. Add Classroom");
		outtextxy(40,getmaxy()/1.75,"4. Allotment");
		outtextxy(40,getmaxy()/1.5,"5. Exit");
		rectangle(300,getmaxy()/3.8,600,getmaxy()/1.2);
		outtextxy(304,getmaxy()/3.5,"Teacher Name");
		outtextxy(304,getmaxy()/2.6,"Faculity Number");
		outtextxy(300,getmaxy()/2.1,"Designation");
		outtextxy(304,getmaxy()/1.75,"Email-id");
		 case 2:

		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		rectangle(30,10,610,50);
		settextstyle(8,0,2);
		outtextxy(4,getmaxy()/5,"SELECT OPERATION THAT YOU WANT TO PERFORM");
		settextstyle(1,0,1);
		outtextxy(40,getmaxy()/3.5,"1. Add Teacher");
		outtextxy(40,getmaxy()/2.6,"2. Add Subject");
		outtextxy(40,getmaxy()/2.1,"3. Add Classroom");
		outtextxy(40,getmaxy()/1.75,"4. Allotment");
		outtextxy(40,getmaxy()/1.5,"5. Exit");
		rectangle(300,getmaxy()/3.8,600,getmaxy()/1.2);
		outtextxy(304,getmaxy()/3.5,"Subject Name");
		outtextxy(304,getmaxy()/2.6,"Subject code");
		outtextxy(300,getmaxy()/2.1,"course type");
		outtextxy(304,getmaxy()/1.75,"semester");
		outtextxy(304,getmaxy()/1.5,"department");

		case 3:

		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		rectangle(30,10,610,50);
		settextstyle(8,0,2);
		outtextxy(4,getmaxy()/5,"SELECT OPERATION THAT YOU WANT TO PERFORM");
		settextstyle(1,0,1);
		outtextxy(40,getmaxy()/3.5,"1. Add Teacher");
		outtextxy(40,getmaxy()/2.6,"2. Add Subject");
		outtextxy(40,getmaxy()/2.1,"3. Add Classroom");
		outtextxy(40,getmaxy()/1.75,"4. Allotment");
		outtextxy(40,getmaxy()/1.5,"5. Exit");
		rectangle(300,getmaxy()/3.8,600,getmaxy()/1.2);
		outtextxy(304,getmaxy()/3.5,"Classroom number");


		case 4:

		outtextxy(3,8,"   GURU NANAK DEV UNIVERSITY");
		rectangle(30,10,610,50);
		settextstyle(8,0,2);
		outtextxy(4,getmaxy()/5,"SELECT OPERATION THAT YOU WANT TO PERFORM");
		settextstyle(1,0,1);
		outtextxy(40,getmaxy()/3.5,"1. Add Teacher");
		outtextxy(40,getmaxy()/2.6,"2. Add Subject");
		outtextxy(40,getmaxy()/2.1,"3. Add Classroom");
		outtextxy(40,getmaxy()/1.75,"4. Allotment");
		outtextxy(40,getmaxy()/1.5,"5. Exit");
		rectangle(300,getmaxy()/3.8,600,getmaxy()/1.2);
		outtextxy(304,getmaxy()/3.5,"Teacher Name");
		outtextxy(304,getmaxy()/2.6,"Subject Name");
		outtextxy(300,getmaxy()/2.1,"Classroom");
		};
	}
};
#endif
