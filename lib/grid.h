#ifndef _GRID_
#define _GRID_

#include<iostream>
#include<ctype.h>

using namespace std;

class grid
{
	char **p;
public:
	void take_input(int, int, int);
	void display();
	int check(int, int);
	char game_over(void);
	grid();
};

grid :: grid()
{
	p=new char *[3];
	for(int i=0;i<3;i++)
	{	p[i]=new char[3];	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			p[i][j]='\0';
		}
	}
}
void grid :: take_input(int r, int c, int  pl)
{
	start:
	if((check(r,c))==1)
	{
		if(pl==1)
		{	p[r-1][c-1]='X';	}
		else
		{	p[r-1][c-1]='O';	}
	}
	else
	{
		cout<<"\nWrong Entry.....!!!\nGive the correct one:";
		cin>>r>>c;
		goto start;
	}
}
void grid :: display(void)
{
	cout<<"\n  | 1 || 2 || 3 |\n";
	for(int i=0;i<3;i++)
	{
		cout<<i+1<<" ";
		for(int j=0;j<3;j++)
		{
			cout<<"| "<<p[i][j]<<" |";
		}
		cout<<"\n";
	}
}

int grid :: check(int row, int coulmn)
{
	if(p[row-1][coulmn-1]=='\0')
	{	return(1);	}
	else
	{	return(0);	}
}
char grid :: game_over(void)
{
	if(p[0][0]==p[0][1] && p[0][0]==p[0][2])  {	return(p[0][0]);	}
	if(p[0][0]==p[1][0] && p[0][0]==p[2][0])  {	return(p[0][0]);	}
	if(p[0][0]==p[1][1] && p[0][0]==p[2][2])  {	return(p[0][0]);	}
	if(p[2][2]==p[2][1] && p[2][2]==p[2][0])  {	return(p[2][2]);	}
	if(p[2][2]==p[1][2] && p[2][2]==p[0][2])  {	return(p[2][2]);	}
	if(p[2][0]==p[1][1] && p[1][1]==p[0][2])  {	return(p[1][1]);	}
	if(p[0][1]==p[1][1] && p[1][1]==p[2][1])  {	return(p[1][1]);	}
	if(p[1][1]==p[1][0] && p[1][1]==p[1][2])  {	return(p[1][1]);	}
	int cnt=0;
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                    if(p[i][j]=='\0')
                    {   cnt++;   }
            }
    }
    if(cnt!=0)
    {	 return('C');     }
    else
    {   return('Z');      }
}


#endif