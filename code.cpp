#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
static int p = 0;
class a
{
  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];
public:
	void install();
	void allotment();
	void empty();
	void show();
	void avail();
	void position(int i);
}
bus[10];
void vline(char ch)
{
	for (int i=80;i>0;i--)
	cout<<ch;
}
void a::install()
{
 cout<<"Enter bus no: ";
 cin>>bus[p].busn;
 cout<<"\nEnter driver's name: ";
 cin>>bus[p].driver;
 cout<<"\nArrival time:";
 cin>>bus[p].arrival;
 cout<<"\nDeparture: ";
 cin>>bus[p].depart;
 cout<<"\nFrom: \t\t\t";
 cin>>bus[p].to;
 bus[p].empty();
 p++;
}
void a::allotment()
{
 int seat;
 char number[5];
 top:
 cout<<"Bus no: ";
 cin>>number;
 int n;
 for(n=0;n<=p;n++)
 {
  if(strcmp(bus[n].busn, number)==0)
  break;
}
 while(n<=p)
 {
    cout<<"\nSeat Number: ";
    cin>>seat;
    if(seat>32)
    {
	  cout<<"\nThere are only 32 seats available in this bus.";
   }
   else
   {
   if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)
     {
       cout<<"Enter passenger's name: ";
       cin>>bus[n].seat[seat/4][(seat%4)-1];
       break;
     }
   else
       cout<<"The seat is already reserved.\n";
     } 
     
     } 
   if(n>p)
   {
      cout<<"Enter correct bus no.\n";
      goto top;
   }
}
void a::empty()
{
 for(int i=0; i<0;i++)
 {
  for(int j=0;j<4;j++)
  {
     strcpy(bus[p].seat[i][j], "Empty");
  }
 }
}
void a::show()

{
 int n;
 char number[5];
 cout<<"Enter bus no: ";
 cin>>number;
 for(n=0;n<=p;n++)
 {
 	if(strcmp(bus[n].busn, number)==0)
 	break;
 }
while(n<=p)
{
	vline('*');
	cout<<"Bus no: \t"<<bus[n].busn
	<<"\ndriver: \t"<<bus[n].driver<<"\t\tarrival time: \t"
	<<bus[n].arrival<<"\tDeparture time;"<<bus[n].depart
     <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<
	 bus[n].to<<"\n";
	 vline('*');
	 bus[0].position(n);
	 int a=1;
	 for (int i=0; i<8; i++)
	 {
	 	for(int j=0;j<4;j++)
	 	{
	 		a++;
	 		if(strcmp(bus[n].seat[i][j],"Empty")!=0)
	 		cout<<"\nThe seat no "<<(a-1)<<"is reserver for"<<bus[n].seat[i][j]<<".";
	 	}
	 }
	 break; 
 }
 if(n>p)
    cout<<"Enter correct bus no: ";
}
void a::position(int i)
{
	int s=0;p=0;
	for (int j = 0;j<4; j++)
	{
		s++;
		if(strcmp(bus[1].seat[i][j], "Empty")==0)
		{
			cout.width(5);
			cout.fill(' ');
			cout<<5<<".";
			cout.width(10);
			cout.fill(' ');
			cout<<bus[1].seat[i][j];
			p++;
		 }
		 else
		 {
		 	cout.width(5);
		 	cout.fill(' ');
		 	cout<<5<<".";
		 	cout.width(10);
		 	cout.fill(' ');
		 	cout<<bus[1].seat[i][j];
		 }
	}
 }
 cout<<"\n\nThere are"<<p<<"seats empty in Bus No: "<<bus[1].busn;
 }
void a::avail()
{
	for(int n=o;n<p;n++)
	{
		vline('*');
		cout<<"Bus no. \t"<<bus[n].busm<<"\nDriver: \t"<<bus[n].driver
		<<"\t\tArrival time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"
		<<bus[n]."\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"
		<<bus[n].to<<"\n";
		vline('*');
		vline('_');
			}
}
	}
		 }
	 }}
	 }	}    
