#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
using namespace std;
class umpires
{
	private:
		char data100[400];
	public:
	void display78()
	   {
		cout<<"****Umpires****";
		ifstream infile52;
	    infile52.open("Umpires.txt");
	    while(!infile52.eof())
	    {
		    infile52.getline(data100,400);
		    cout<<data100<<endl;
	    }
        infile52.close();
		}
};
class schedule
{
	char sch[5000];
	public:
		void display51()
		{
		cout<<"*******Schedule********";
		ifstream infile51;
	                infile51.open("ipl2.txt");
	                while(!infile51.eof())
	                {
		             infile51.getline(sch,5000);
		            cout<<sch<<endl;
	                }
                	infile51.close();
        }
};
class team
{
	int q1;
	int q2;
	char d[500];
	public:
	void display10()
	{

		cout<<"*****TEAMS*****\n";
		cout<<"1.RCB\n 2.KKR\n 3.MI\n 4.DD\n 5.CSK\n 6.SRH\n 7.RR\n 8.KXIP\n";
		cout<<"Press key\n";
		cin>>q1;
		switch(q1)
		{
			case 1:
				{
					cout<<"Player details\n";
					ifstream infile21;
	                infile21.open("RCBTEAM.txt");
	                while(!infile21.eof())
	                {
		             infile21.getline(d,500);
		            cout<<d<<endl;
	                }
                	infile21.close();
                	break;
                }
            case 2:
			    {
			    	cout<<"Player details\n";
			    	ifstream infile22;
	                infile22.open("KKRTEAM.txt");
	                while(!infile22.eof())
	                {
		             infile22.getline(d,500);
		            cout<<d<<endl;
	                }
                	infile22.close();
                	break;
                }
            case 3:
            	{


			    	ifstream infile23;
	                infile23.open("MITEAM.txt");
	                while(!infile23.eof())
	                {
		             infile23.getline(d,500);
		            cout<<d<<endl;
	                }
                	infile23.close();
                	break;
                }
            case 4:
			    {
			    	ifstream infile24;
	                infile24.open("DDTEAM.txt");
	                while(!infile24.eof())
	                {
		             infile24.getline(d,500);
		            cout<<d<<endl;
	                }
                	infile24.close();
                	break;
                }
            case 5:
			{
				ifstream infile25;
	                infile25.open("CSKTEAM.txt");
	                while(!infile25.eof())
	                {
		             infile25.getline(d,500);
		            cout<<d<<endl;
	                }
                	infile25.close();
                	break;
            }
            case 6:
            	{
            		ifstream infile26;
	                infile26.open("SRHTEAM.txt");
	                while(!infile26.eof())
	                {
		             infile26.getline(d,500);
		            cout<<d<<endl;
	                }
                	infile26.close();
                	break;
                }
            case 7:
			{
				ifstream infile27;
	                infile27.open("RRTEAM.txt");
	                while(!infile27.eof())
	                {
		             infile27.getline(d,500);
		            cout<<d<<endl;
	                }
                	infile27.close();
                	break;
           }
           case 8:
           	{
           		ifstream infile28;
	                infile28.open("KXIPTEAM.txt");
	                while(!infile28.eof())
	                {
		             infile28.getline(d,500);
		            cout<<d<<endl;
	                }
                	infile28.close();
                	break;
            }
            cout<<"\n1.back \n2.exit";
			cout<<"\npress key : ";
			cin>>q2;
			switch(q2)
			{
				case 1:
				{
				cout<<"back\n";
				break;
				}
				case 2:exit(1);
				break;
			}



        }
    }
};
class stadium
{
	char sta[500];
	public:
		void display17()
		{
		cout<<"STADIUMS\n";
		ifstream infile14;
	                infile14.open("Stadiums.txt");
	                while(!infile14.eof())
	                {
		             infile14.getline(sta,500);
		            cout<<sta<<endl;
	                }
                	infile14.close();
        }

};
class bowl
{
	private:
		char data6[500];
	public:
	void display3()
	{
		cout<<"Bowling Leaders\n";
		            ifstream infile5;
	                infile5.open("Bowling_leaders.txt");
	                while(!infile5.eof())
	                {
		            infile5.getline(data6,500);
		            cout<<data6<<endl;
	                }
                	infile5.close();
	}
};
class bat
{
	private:
		int a;
		char data4[100];
	public:
	void display2()
	{
		cout<<"Batting Leaders\n";
			        ifstream infile4;
	                infile4.open("Batting_leaders.txt");
	                while(!infile4.eof())
	                {
		            infile4.getline(data4,500);
		            cout<<data4<<endl;
	                }
                	infile4.close();

	}
};

class software
{
	private:
		char s[100];
		int n;
		int b;
		int d;
		char data1[500];
		char data[500];
		char data2[1000];
	public:
		void display()
		{
                        cout<<setw(130)<<"*********************                     *********************"<<endl;
			            cout<<setw(130)<<"***********  Welcome to Indian Premier League 2019  ***********"<<endl;  
                        cout<<setw(130)<<"*********************                     *********************"<<endl;
        	cout<<"Enter Username:\n";
			cin>>s;
			cout<<"Enter Password:\n";
			cin>>n;
			b=12345;
	    }

	    void display1()
	    {

			bat ob;
			bowl ob1;
			team ob2;
			stadium ob3;
			schedule ob4;
			umpires obj10;
			if(n==b)
			{
				cout<<"Available Options:-\n";
				cout<<"\n 1.Owners\n 2.Coaching Staffs\n 3.Team\n 4.Schedule\n 5.PointsTable\n 6.Batting Leaders\n 7.Bowling Leaders\n 8.Stadiums\n 9.Umpires\n 10.EXIT";
				cout<<"\nPress any number to check in:-";
				cin>>d;
				switch(d)
				{
					case 1:
						cout<<"Owner\n";
						{
						ifstream infile;
	                infile.open("Owner.txt");
	                while(!infile.eof())
	                {
		            infile.getline(data,500);
		            cout<<data<<endl;
	                }
                	infile.close();
                	break;

						}

                	case 2:
                		cout<<"Coaching Staff";
                	{
                		ifstream infile1;
                	infile1.open("CoachingStaff.txt");
                	while(!infile1.eof())
                	{
                		infile1.getline(data1,500);
                		cout<<data1<<endl;
					}
					infile1.close();
					break;
				    }
					case 3:
						{
							ob2.display10();
						}
						break;
					case 4:
					    {
					   	ob4.display51();
						}
						break;

					case 5:
						{
                	ifstream infile2;
                	infile2.open("Points table.txt");
                	while(!infile2.eof())
                	{
                		infile2.getline(data2,1000);
                		cout<<"\n"<<data2<<endl;
					}
					infile2.close();
					break;
					}

					case 6:
						{
							ob.display2();
							break;
						}
					case 7:
					{
						ob1.display3();
						break;
					}
					case 8:
					{
						ob3.display17();
						break;
					}
					case 9:
					{
						obj10.display78();
						break;
					}
					case 10:
					{
						exit(1);
						break;
					}
			}
		}

			else
			{
				cout<<"Your Password is incorrect\n";
			}

			int f;
			cout<<"\n1.back \n2.exit";
			cout<<"\npress key : ";
			cin>>f;
			switch(f)
			{
				case 1:
				{
				display1();
				 break;
				}
				case 2:exit(1);break;
			}
	   }

};
int main()
{
	software obj1;
	obj1.display();
	obj1.display1();
}
