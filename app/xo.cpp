#include "../lib/grid.h"

using namespace std;

int main(void)
{
	int row = 0,coulmn = 0;
	char winner = '\0';
	char userChoice = '\0';
	grid pg;
	cout << getTextColorString(CYAN) << "\nPlayer-1 ---->\"X\"\nPlayer-2 ----> \"O\"\n" << getTextColorString(WHITE);
	do
	{
		do
		{
			pg.display();
			cout << getTextColorString(CYAN) << "\nPlayer-1:" << getTextColorString(WHITE);
			cin >> row >> coulmn;
			pg.take_input(row,coulmn,1);
			pg.display();
			if((winner = pg.game_over()) == 'X' || winner == 'O')
			{
				goto end;
			}
			if(winner == 'Z')
			{
				goto gameover;  
			}
			cout << getTextColorString(CYAN) << "\nPlayer-2:" << getTextColorString(WHITE);
			cin >> row >> coulmn;
			pg.take_input(row,coulmn,2);
			if( (winner=pg.game_over()) == 'X' || winner == 'O')
			{
				goto end;
			}
			if( winner == 'Z' )
			{
				goto gameover; 
			}
		}while(1);

		end:
		{
			cout << getTextColorString(GREEN) <<  "\nPlayer " << winner << " Won" << getTextColorString(WHITE);
		}
		gameover:
		{
			if(winner == 'Z')
			{
				cout << getTextColorString(RED) << "\nOops, no one won!!" << getTextColorString(WHITE);
			}
		}
		cout << getTextColorString(GREEN) << "\nDo u want 2 play again??\t........Y/N:" << getTextColorString(WHITE);
		cin >> userChoice;
	}while(toupper(userChoice) != 'N');
}
