#include "../lib/grid.h"

using namespace std;

int main()
{
	int row=0,coulmn=0;
	char winner='\0';
	char userChoice='\0';
	grid pg;
	cout<<"\nPlayer_1:-->\"X\"\nPlayer_2:-->\"O\"\n";
    do
    {
          do
            {
               pg.display();
		       cout<<"\nPlayer-1:";
		       cin>>row>>coulmn;
		       pg.take_input(row,coulmn,1);
		       pg.display();
               if((winner=pg.game_over()) =='X' || winner =='O' )
		       {	goto end;	}
		       if(winner=='Z') {               goto gameover;  }
		       cout<<"\nPlayer-2:";
		       cin>>row>>coulmn;
		       pg.take_input(row,coulmn,2);
		       if((winner=pg.game_over())=='X' || winner =='O')
		       {	goto end;	}
		       if(winner=='Z') {               goto gameover;  }
	        }while(1);
	        end:
	        {	cout<<"\nPlayer "<<winner<<" Won";	}
	        gameover:
            {        if(winner=='Z'){        cout<<"\nOops....No-one won....!!!";   }         }
         cout<<"\nDo u want 2 play again..???\nY/N........";
         cin>>userChoice;
    }while(toupper(userChoice)!='N');
}
