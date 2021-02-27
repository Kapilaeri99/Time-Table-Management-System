#include<conio.h>
#include<fstream.h>
#include<string.h>
#ifndef tt_v_h
#define tt_v_h

class sem1_tt
{
	public:
	char sem[100],sec[100],sub[100],section[100],data[100];

	void sem1seca()
	{
		char m[100]="MONDAY",t[100]="TUESDAY",w[100]="WEDNESDAY",th[100]="THURSDAY",f[100]="FRIDAY";
		ifstream read("S1SA.txt");
		while(!read.eof())
		{
			read>>sub;
			strcpy(data,sub);
			if(strcmp(m,sub)==0)
			{
			   cout<<" "<<sub<<" ";
			   while(!read.eof())
			   {
			      read>>sub;
			      strcpy(data,sub);
			      if(strcmp(t,sub)==0)
			      {
				cout<<endl<<endl<<endl<<endl;
				cout<<" "<<sub<<" ";
				while(!read.eof())
				{
				  read>>sub;
				  strcmp(data,sub);
				  if(strcmp(w,sub)==0)
				  {
				    cout<<endl<<endl<<endl<<endl;
				    cout<<sub;
				    while(!read.eof())
				    {
				      read>>sub;
				      strcpy(data,sub);
				      if(strcmp(th,sub)==0)
				      {
					cout<<endl<<endl<<endl<<endl;
					cout<<sub<<" ";
					while(!read.eof())
					{
					  read>>sub;
					  strcpy(data,sub);
					  if(strcmp(f,sub)==0)
					  {
					    cout<<endl<<endl<<endl;
					    cout<<" "<<sub<<" ";
					    while(!read.eof())
					    {
					      read>>sub;
					      cout<<" "<<sub<<"  ";
					    }
					  }
					  else
					  {cout<<sub<<"  ";}
					}
				      }
				      else
				      {cout<<" "<<sub<<"  ";}
				    }

				  }
				  else
				  {cout<<" "<<sub<<"  ";}
				}
			      }
			      else
			      {cout<<" "<<sub<<"  ";}
			   }

			}

		}
	  read.close();


	}
	void sem1secb()
	{
		char sem[100],sec[100],sub[100],section[100],data[100];
		char m[100]="MONDAY",t[100]="TUESDAY",w[100]="WEDNESDAY",th[100]="THURSDAY",f[100]="FRIDAY";
		ifstream read("S1SB.txt");
		while(!read.eof())
		{
			read>>sub;
			strcpy(data,sub);
			if(strcmp(m,sub)==0)
			{
			   cout<<" "<<sub<<" ";
			   while(!read.eof())
			   {
			      read>>sub;
			      strcpy(data,sub);
			      if(strcmp(t,sub)==0)
			      {
				cout<<endl<<endl<<endl<<endl;
				cout<<" "<<sub<<" ";
				while(!read.eof())
				{
				  read>>sub;
				  strcmp(data,sub);
				  if(strcmp(w,sub)==0)
				  {
				    cout<<endl<<endl<<endl<<endl;
				    cout<<sub;
				    while(!read.eof())
				    {
				      read>>sub;
				      strcpy(data,sub);
				      if(strcmp(th,sub)==0)
				      {
					cout<<endl<<endl<<endl<<endl;
					cout<<sub<<" ";
					while(!read.eof())
					{
					  read>>sub;
					  strcpy(data,sub);
					  if(strcmp(f,sub)==0)
					  {
					    cout<<endl<<endl<<endl;
					    cout<<" "<<sub<<" ";
					    while(!read.eof())
					    {
					      read>>sub;
					      cout<<" "<<sub<<"  ";
					    }
					  }
					  else
					  {cout<<" "<<sub<<"  ";}
					}
				      }
				      else
				      {cout<<" "<<sub<<"  ";}
				    }

				  }
				  else
				  {cout<<" "<<sub<<"  ";}
				}
			      }
			      else
			      {cout<<" "<<sub<<"  ";}
			   }

			}

		}
	}
};
class sem3_tt
{
	public:
	void sem3seca()
	{
		char sem[100],sec[100],sub[100],section[100],data[100];
		char m[100]="MONDAY",t[100]="TUESDAY",w[100]="WEDNESDAY",th[100]="THURSDAY",f[100]="FRIDAY";
		ifstream read("S2SA.txt");
		while(!read.eof())
		{
			read>>sub;
			strcpy(data,sub);
			if(strcmp(m,sub)==0)
			{
			   cout<<" "<<sub<<" ";
			   while(!read.eof())
			   {
			      read>>sub;
			      strcpy(data,sub);
			      if(strcmp(t,sub)==0)
			      {
				cout<<endl<<endl<<endl<<endl;
				cout<<" "<<sub<<" ";
				while(!read.eof())
				{
				  read>>sub;
				  strcmp(data,sub);
				  if(strcmp(w,sub)==0)
				  {
				    cout<<endl<<endl<<endl<<endl;
				    cout<<sub<<" ";
				    while(!read.eof())
				    {
				      read>>sub;
				      strcpy(data,sub);
				      if(strcmp(th,sub)==0)
				      {
					cout<<endl<<endl<<endl<<endl;
					cout<<sub<<" ";
					while(!read.eof())
					{
					  read>>sub;
					  strcpy(data,sub);
					  if(strcmp(f,sub)==0)
					  {
					    cout<<endl<<endl<<endl;
					    cout<<" "<<sub<<" ";
					    while(!read.eof())
					    {
					      read>>sub;
					      cout<<" "<<sub<<"  ";
					    }
					  }
					  else
					  {cout<<sub<<"  ";}
					}
				      }
				      else
				      {cout<<sub<<"  ";}
				    }

				  }
				  else
				  {cout<<sub<<"  ";}
				}
			      }
			      else
			      {cout<<" "<<sub<<"  ";}
			   }

			}

		}
	}
	void sem3secb()
	{
		char sem[100],sec[100],sub[100],section[100],data[100];
		char m[100]="MONDAY",t[100]="TUESDAY",w[100]="WEDNESDAY",th[100]="THURSDAY",f[100]="FRIDAY";
		ifstream read("S2SB.txt");
		while(!read.eof())
		{
			read>>sub;
			strcpy(data,sub);
			if(strcmp(m,sub)==0)
			{
			   cout<<" "<<sub<<" ";
			   while(!read.eof())
			   {
			      read>>sub;
			      strcpy(data,sub);
			      if(strcmp(t,sub)==0)
			      {
				cout<<endl<<endl<<endl<<endl;
				cout<<sub<<" ";
				while(!read.eof())
				{
				  read>>sub;
				  strcmp(data,sub);
				  if(strcmp(w,sub)==0)
				  {
				    cout<<endl<<endl<<endl<<endl;
				    cout<<sub;
				    while(!read.eof())
				    {
				      read>>sub;
				      strcpy(data,sub);
				      if(strcmp(th,sub)==0)
				      {
					cout<<endl<<endl<<endl<<endl;
					cout<<sub<<" ";
					while(!read.eof())
					{
					  read>>sub;
					  strcpy(data,sub);
					  if(strcmp(f,sub)==0)
					  {
					    cout<<endl<<endl<<endl<<endl;
					    cout<<" "<<sub<<" ";
					    while(!read.eof())
					    {
					      read>>sub;
					      cout<<sub<<"  ";
					    }
					  }
					  else
					  {cout<<sub<<"  ";}
					}
				      }
				      else
				      {cout<<" "<<sub<<"  ";}
				    }

				  }
				  else
				  {cout<<" "<<sub<<"  ";}
				}
			      }
			      else
			      {cout<<" "<<sub<<"  ";}
			   }

			}

		}
	}
};
class sem5_tt
{
	public:
	void sem5seca()
	{
		char sem[100],sec[100],sub[100],section[100],data[100];
		char m[100]="MONDAY",t[100]="TUESDAY",w[100]="WEDNESDAY",th[100]="THURSDAY",f[100]="FRIDAY";
		ifstream read("S5SA.txt");
		while(!read.eof())
		{
			read>>sub;
			strcpy(data,sub);
			if(strcmp(m,sub)==0)
			{
			   cout<<" "<<sub<<"   ";
			   while(!read.eof())
			   {
			      read>>sub;
			      strcpy(data,sub);
			      if(strcmp(t,sub)==0)
			      {
				cout<<endl<<endl<<endl;
				cout<<" "<<sub<<"   ";
				while(!read.eof())
				{
				  read>>sub;
				  strcmp(data,sub);
				  if(strcmp(w,sub)==0)
				  {
				    cout<<endl<<endl<<endl;
				    cout<<sub;
				    while(!read.eof())
				    {
				      read>>sub;
				      strcpy(data,sub);
				      if(strcmp(th,sub)==0)
				      {
					cout<<endl<<endl<<endl<<endl;
					cout<<sub<<"   ";
					while(!read.eof())
					{
					  read>>sub;
					  strcpy(data,sub);
					  if(strcmp(f,sub)==0)
					  {
					    cout<<endl<<endl<<endl;
					    cout<<" "<<sub<<"    ";
					    while(!read.eof())
					    {
					      read>>sub;
					      cout<<" "<<sub<<"  ";
					    }
					  }
					  else
					  {cout<<sub<<"    ";}
					}
				      }
				      else
				      {cout<<" "<<sub<<"  ";}
				    }

				  }
				  else
				  {cout<<" "<<sub<<"  ";}
				}
			      }
			      else
			      {cout<<" "<<sub<<"  ";}
			   }

			}

		}
	}
	void sem5secb()
	{
		char sem[100],sec[100],sub[100],section[100],data[100];
		char m[100]="MONDAY",t[100]="TUESDAY",w[100]="WEDNESDAY",th[100]="THURSDAY",f[100]="FRIDAY";
		ifstream read("S5SB.txt");
		while(!read.eof())
		{
			read>>sub;
			strcpy(data,sub);
			if(strcmp(m,sub)==0)
			{
			   cout<<" "<<sub;
			   while(!read.eof())
			   {
			      read>>sub;
			      strcpy(data,sub);
			      if(strcmp(t,sub)==0)
			      {
				cout<<endl<<endl<<endl<<endl;
				cout<<" "<<sub<<"  ";
				while(!read.eof())
				{
				  read>>sub;
				  strcmp(data,sub);
				  if(strcmp(w,sub)==0)
				  {
				    cout<<endl<<endl<<endl<<endl;
				    cout<<sub<<" ";
				    while(!read.eof())
				    {
				      read>>sub;
				      strcpy(data,sub);
				      if(strcmp(th,sub)==0)
				      {
					cout<<endl<<endl<<endl<<endl;
					cout<<sub<<"  ";
					while(!read.eof())
					{
					  read>>sub;
					  strcpy(data,sub);
					  if(strcmp(f,sub)==0)
					  {
					    cout<<endl<<endl<<endl<<endl;
					    cout<<" "<<sub<<"   ";
					    while(!read.eof())
					    {
					      read>>sub;
					      cout<<" "<<sub<<"  ";
					    }
					  }
					  else
					  {cout<<" "<<sub<<"  ";}
					}
				      }
				      else
				      {cout<<" "<<sub<<"  ";}
				    }

				  }
				  else
				  {cout<<" "<<sub<<"  ";}
				}
			      }
			      else
			      {cout<<"  "<<sub<<"  ";}
			   }

			}

		}
	}
};
class sem7_tt
{
	public:
	void sem7seca()
	{
		char sem[100],sec[100],sub[100],section[100],data[100];
		char m[100]="MONDAY",t[100]="TUESDAY",w[100]="WEDNESDAY",th[100]="THURSDAY",f[100]="FRIDAY";
		ifstream read("S7SA.txt");
		while(!read.eof())
		{
			read>>sub;
			strcpy(data,sub);
			if(strcmp(m,sub)==0)
			{
			   cout<<" "<<sub<<" ";
			   while(!read.eof())
			   {
			      read>>sub;
			      strcpy(data,sub);
			      if(strcmp(t,sub)==0)
			      {
				cout<<endl<<endl<<endl<<endl;
				cout<<" "<<sub<<" ";
				while(!read.eof())
				{
				  read>>sub;
				  strcmp(data,sub);
				  if(strcmp(w,sub)==0)
				  {
				    cout<<endl<<endl<<endl<<endl;
				    cout<<sub;
				    while(!read.eof())
				    {
				      read>>sub;
				      strcpy(data,sub);
				      if(strcmp(th,sub)==0)
				      {
					cout<<endl<<endl<<endl<<endl;
					cout<<sub<<" ";
					while(!read.eof())
					{
					  read>>sub;
					  strcpy(data,sub);
					  if(strcmp(f,sub)==0)
					  {
					    cout<<endl<<endl<<endl;
					    cout<<" "<<sub<<" ";
					    while(!read.eof())
					    {
					      read>>sub;
					      cout<<" "<<sub<<"  ";
					    }
					  }
					  else
					  {cout<<sub<<"  ";}
					}
				      }
				      else
				      {cout<<" "<<sub<<"  ";}
				    }

				  }
				  else
				  {cout<<" "<<sub<<"  ";}
				}
			      }
			      else
			      {cout<<" "<<sub<<"  ";}
			   }

			}

		}
	}
	void sem7secb()
	{
		char sem[100],sec[100],sub[100],section[100],data[100];
		char m[100]="MONDAY",t[100]="TUESDAY",w[100]="WEDNESDAY",th[100]="THURSDAY",f[100]="FRIDAY";
		ifstream read("S7SB.txt");
		while(!read.eof())
		{
			read>>sub;
			strcpy(data,sub);
			if(strcmp(m,sub)==0)
			{
			   cout<<" "<<sub<<" ";
			   while(!read.eof())
			   {
			      read>>sub;
			      strcpy(data,sub);
			      if(strcmp(t,sub)==0)
			      {
				cout<<endl<<endl<<endl<<endl;
				cout<<" "<<sub<<" ";
				while(!read.eof())
				{
				  read>>sub;
				  strcmp(data,sub);
				  if(strcmp(w,sub)==0)
				  {
				    cout<<endl<<endl<<endl<<endl;
				    cout<<sub;
				    while(!read.eof())
				    {
				      read>>sub;
				      strcpy(data,sub);
				      if(strcmp(th,sub)==0)
				      {
					cout<<endl<<endl<<endl<<endl;
					cout<<sub<<" ";
					while(!read.eof())
					{
					  read>>sub;
					  strcpy(data,sub);
					  if(strcmp(f,sub)==0)
					  {
					    cout<<endl<<endl<<endl;
					    cout<<" "<<sub<<" ";
					    while(!read.eof())
					    {
					      read>>sub;
					      cout<<" "<<sub<<"  ";
					    }
					  }
					  else
					  {cout<<" 8"<<sub<<"  ";}
					}
				      }
				      else
				      {cout<<" "<<sub<<"  ";}
				    }

				  }
				  else
				  {cout<<" "<<sub<<"  ";}
				}
			      }
			      else
			      {cout<<" "<<sub<<"  ";}
			   }

			}

		}
	}
};
#endif


