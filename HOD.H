#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#ifndef hod_h
#define hod_h
class AddTeacher
{
protected:
 char a[20];
 char b[20];
 char c[20];
 int d;
 char e[20];
public:
void Addteacher()
{ int i;
for(i=0;i<=8;i++)
{
cout<<endl;
}
cout<<"                                       ";
 cin >> a;
 cout<<endl<<endl;
 cout<<"                                       ";
 cin >> b;
  cout<<endl<<endl;
  cout<<"                                       ";
 cin >> c;
 cout<<endl<<endl;
  cout<<"                                       ";
 cin >> d;
  cout<<endl<<endl<<endl;
  cout<<"                                       ";
 cin >> e;
 }
};
class AddSubject
{
protected:
char s[20];
char t[10];
char u[20];
int v;
char w[20];

public:

void Addsubject ()
  {
    int i;
for(i=0;i<=8;i++)
{
cout<<endl;
}
cout<<"                                       ";
  cin >> s;
   cout<<endl<<endl;
 cout<<"                                       ";
  cin >> t;

   cout<<endl<<endl;
  cout<<"                                       ";
  cin >> u;

   cout<<endl<<endl;
  cout<<"                                       ";
  cin >> v;

   cout<<endl<<endl<<endl;
  cout<<"                                       ";
  cin >> w;

  }

};

class AddClassroom
{
protected:
char x[20];
public:
void Addclassroom ()
  {
    int i;
for(i=0;i<=8;i++)
{
cout<<endl;}
cout<<"                                       ";

  cin >> x;
   cout<<endl<<endl;



  }


};


class Allotment: public AddTeacher , public AddSubject , public AddClassroom
{

public:

void allotment()
  {
    int i;
for(i=0;i<=8;i++)
{
cout<<endl; }
cout<<"                                       ";

  cin >> a;
   cout<<endl<<endl;
 cout<<"                                       ";

  cin >> s;

  cout<<endl<<endl;
  cout<<"                                       ";
  cin >> x;

  }

};



#endif