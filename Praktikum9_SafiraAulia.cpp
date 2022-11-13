#include <curses.h>
using namespace std;
int main(){
	initscr();
	
	printw(" Nama Saya Safira");
	refresh();
	getch();
	endwin();
}
