#include <curses.h>
using  namespace std;
int main(){
	int y=1, x=1;
	initscr();
	WINDOW * win =newwin(20, 30, 1, 1);
	refresh();
	box(win,0,0);
	wmove(win,y,x);
	wprintw(win,"O");
	wrefresh(win);
	
	while(true){
		char movement = wgetch(win);
		switch (movement){
		case 'a':
			if(x ==1){
				x = 28;
			}else{
				x--;
			}
			break;
		case 'd':
		    if( x ==28)	{
		       	x = 1;
		}else{
			x++;
		}
	    	break;
		case 'w':
			if(y == 1){
				y = 18;
		}else{
			y--;
		}
	    	break;
		case 's':
			break;
		
			if(y ==18){
				y = 1;
			}else{
				y++;
			}
			break;
	}
			wclear(win);
			box(win, 0, 0);
			wmove(win, y, x);
			wprintw(win, "O");
			wrefresh(win);
}
			getch();
			endwin();
}
			
