#include"login.h"
#include"graph_lo.h"
#include"hod.h"
#include"jatt.h"
#include"graph_ta.h"
#include"tt_view.h"
#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>


void main()
{
clrscr();
int x,y;
login l1;
registration r1;
gotpassward p1;
graph lg1;
hello h;
lg1.front_graph();
cin>>x;
if (x==1)
{
	lg1.regis_graph();
	cin>>y;
	if(y==1)
	{
		r1.registration_t();
	}
	else if(y==2)
	{
		r1.registration_s();
	}
	else
	{
		cout<<"wrong choice";
	}
}
else if(x==2)
{
	lg1.login_graph();
	cin>>y;
	if(y==1)
	{
		l1.log_t();
	}
	else if(y==2)
	{
		l1.log_s();

	}
	else if(y==3)
	{
		l1.log_h();
		if(flag==1)
		{
		int i,j;

back:

cout << "1. Add Teacher" << endl;
cout << "2. Add Subject" << endl;
cout << "3. Add Classroom" << endl;
cout << "4. Allotment" << endl;
cout << "5.Time Table Generation"<<endl;
cout << "6. Exit" << endl;

cin >> i;

switch(i)
 {
case 1:

cout << "Press any number (not -1) to Add Teacher or -1 to exit!!" << endl;
cin >> j;

if (j != -1)
  {

    AddTeacher obj1;
    obj1.Addteacher();

    clrscr();
    cout << "Teacher Added Successfully!!!"<< endl;
    goto back;



  }

case 2:

cout << "Press any number (not -1) to Add Subject or -1 to exit!!" << endl;
cin >>j;
if (j != -1)
  {

  AddSubject obj2;
  obj2.Addsubject();
  clrscr();
  cout << "Subject Added Successfully!!!"<< endl;
  goto back;



  }

case 3:

cout << "Press any number (not -1) to Add Classroom or -1 to exit!!" << endl;
cin >> j;

if (j != -1)
  {

  AddClassroom obj3;
  obj3.Addclassroom();

  clrscr();
   cout << "Classroom Added Successfully!!!" << endl;

  goto back;

  }

case 4:

cout << "Press any number (not -1) for Allotment or -1 to exit!!" << endl;
cin >> j;

if (j != -1)
  {

  Allotment obj4;
  obj4.allotment();
  clrscr();
  cout << "Allotment done!!!"<< endl;
  goto back;

  }

case 5:
  cout << "Press any number (not -1) for Allotment or -1 to exit!!" << endl;
cin >> j;
sem obj;
obj.sec();

case 6:
break;

 }}
	}
	else
	{
		cout<<"wrong choice";
	}
}
else if(x==3)
{
	lg1.forgot_graph();
	cin>>y;
	if(y==1)
	{
		p1.forgot_passward_t();
	}

	else if(y==2)
	{
		p1.forgot_passward_s();
	}
}
getch();
}
