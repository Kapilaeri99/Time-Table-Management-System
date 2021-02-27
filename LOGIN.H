
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include"graph_ta.h"
#include"tt_view.h"
#ifndef login_h
#define login_h
int flag=0;
class registration
{
	public:
	char username[100],passward[100],semester[100],section[100],subjects[100],sub[100];
	void registration_t()
	{       int y,i=0;
		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<endl<<endl<<endl;
		cout<<"enter the username:";
		cin>>username;
		cout<<"enter the passward:";
		cin>>passward;
	      ofstream data("teacher_id.txt",ios::app);
		data<<username<<" "<<passward<<" ";
		cout<<"how many subjects you can teach:";
		cin>>y;
		while(i<y)
		{
			cout<<"enter next subject";
			cin>>subjects;
			data<<subjects<<" ";
			i+=1;
		}
		data.close();
		cout<<"you are registered sucessfully"<<endl;

	}
	void registration_s()
	{
		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<endl<<endl<<endl;
		cout<<"enter your username:";
		cin>>username;
		cout<<"enter your passward:";
		cin>>passward;
		cout<<"enter your semester:";
		cin>>semester;
		cout<<"enter your section:";
		cin>>section;
		ofstream data("student_id.txt");
		data<<username<<" "<<passward<<" "<<semester<<" "<<section<<endl;
		data.close();
		cout<<"you are registered successfully."<<endl;

	}
};
view v;
class login
{
		public:
	char username[100],passward[100],semester[10],section[10],subjects[100],sub[1000],sec[100];
	 char un[100],pw[100],data[100],sem[100];


	void log_t()
	{

		 cout<<endl<<endl<<endl<<endl<<endl<<endl;
		 cout<<endl<<endl<<endl<<endl<<endl;
				cout<<"enter the username:";
				cin>>un;
				cout<<"enter the passward:";
				cin>>pw;
				ifstream read("teacher_id.txt");

			while(read>>data)
			{
				strcpy(username,data);
				read>>data;
				strcpy(passward,data);
				if(strcmp(un,username)==0 && strcmp(pw,passward)==0 )
				{
				cout<<"login ID successfully";
				::flag=1;
				break;
				}




			}
				if(flag==0)
				{
					cout<<"invalid username or passward";

				}
			read.close();
	 }
	void log_s()
	{
			char f[100]="1st",th[100]="3rd",fi[100]="5th",se[100]="7th",a[100]="a",b[100]="b";
			cout<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<endl<<endl<<endl<<endl<<endl;
				cout<<"enter the username:";
				cin>>un;
				cout<<"enter the passward:";
				cin>>pw;
				ifstream output("student_id.txt");
				while(output>>data)
				{
					strcpy(username,data);
					output>>data;
					strcpy(passward,data);
					if(strcmp(un,username)==0 && strcmp(pw,passward)==0 )
					{
						cout<<"login ID successfully"<<endl;
						output>>sem;
						output>>section;
						cout<<sem<<" "<<section;
					       //	strcpy(sem,data);
					       //	strcpy(section,sec);
						if(strcmp(f,sem)==0 && strcmp(a,section)==0)
						{
						  v.s1sa();
						}
						else if(strcmp(data,f)==0 && strcmp(sec,b)==0)
						{
						  v.s1sb();
						}else if(strcmp(data,th)==0 && strcmp(sec,a)==0)
						{
						  v.s3sa();
						}else if(strcmp(data,th)==0 && strcmp(sec,b)==0)
						{
						  v.s3sb();
						}else if(strcmp(data,fi)==0 && strcmp(sec,a)==0)
						{
						  v.s5sa();
						}else if(strcmp(data,fi)==0 && strcmp(sec,b)==0)
						{
						  v.s5sb();
						}else if(strcmp(data,se)==0 && strcmp(sec,a)==0)
						{
						  v.s7sa();
						}else  if(strcmp(data,se)==0 && strcmp(sec,b)==0)
						{
						  v.s7sb();
						}
					::flag=1;
					break;
					}




				}
				if(flag==0)
				{
					cout<<"invalid username or passward";
				}

				output.close();
	}
	void log_h()
	{
			cout<<endl<<endl<<endl<<endl<<endl<<endl;
		 cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"Enter the username";
			cin>>un;
			cout<<"Enter the passward";
			cin>>pw;
			ifstream ext("hod_id.txt");
			while(ext>>data)
			{
				strcpy(username,data);
				ext>>data;
				strcpy(passward,data);
				if(strcmp(un,username)==0 && strcmp(pw,passward)==0 )
				{
				cout<<"login ID successfully";


					::flag=1;
				}


				}
				if(flag==0)
				{
					cout<<"invalid username or passward";

				}
				ext.close();


	}
};
class gotpassward
{     	public:
	char username[100],passward[100],semester[10],section[10],subjects[100],sub[1000];
	 char un[100],pw[100],data[100];
	void forgot_passward_t()
	{

		int flag=0;
				cout<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<endl<<endl;
				cout<<"enter the username:";
				cin>>un;
				fstream read("teacher_id.txt",ios::in | ios::out);

			while(read>>data)
			{
				strcpy(username,data);
				if(strcmp(un,username)==0)
				{
				cout<<"username found successfully"<<endl;
				read>>data;
				cout<<"passward for user is "<<data;



				read.close();

				flag=1;
				break;

				}
			}
				if(flag==0)
				{
					cout<<"invalid username or passward";
				}
	   }
	   void forgot_passward_s()
	   {                    int flag=0;
				cout<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<endl<<endl;
				cout<<"enter the username:";
				cin>>un;
				fstream read("student_id.txt",ios::in | ios::out);
					while(read>>data)
			{
				strcpy(username,data);
				if(strcmp(un,username)==0)
				{
				 cout<<"username found succesfully"<<endl;
				 read>>data;
				 cout<<"passward for user is"<<data;


				read.close();
					flag=1;
					break;
				}


			}
				if(flag==0)
				{
					cout<<"invalid username or passward";
				}



	}
};
#endif




