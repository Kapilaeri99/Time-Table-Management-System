#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<fstream.h>
#define jatt_h
class sem
{
public:
void sec()
{
int gdriver=DETECT,gmode,i,j;
initgraph(&gdriver,&gmode,"..\\bgi");
char subm[10],subt[10],subw[10],subth[10],subfr[10];
char section[10];
char sem[10];
setbkcolor(BLUE);
settextstyle(11,0,4);
ofstream data("default_tt.txt",ios::app);
cout<<"enter semester"<<endl;
cin>>sem;
for(j=0;j<=2;j++)
{
cout<<"Enter your section";
cin>>section;
data<<section;
cout<<"Enter subjects for monday"<<endl;
for(i=0;i<=7;)
{
cout<<i+9<<"to";
i++;
cout<<i+9;
cin>>subm;
data<<subm<<endl;
}


cout<<"Enter subjects of tuesday"<<endl;
for(i=0;i<=7;)
{
cout<<i+9<<"to";
i++;
cout<<i+9;
cin>>subt;
data<<subt;
}
cout<<"Enter subjects of wednesday"<<endl;
for(i=0;i<=7;)
{
cout<<i+9<<"to";
i++;
cout<<i+9;
cin>>subw;
data<<subw;
}
cout<<"enter subject of thursday"<<endl;
for(i=0;i<=7;)
{
cout<<i+9<<"to";
i++;
cout<<i+9;
cin>>subth;
data<<subth;
}
cout<<"Enter subjects of friday"<<endl;
for(i=0;i<=7;)
{
cout<<i+9<<"to";
i++;
cout<<i+9;
cin>>subfr;
data<<subfr;
}

}
data.close();
}

};