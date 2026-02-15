#include <iostream.h>

#include "fstream.h"
#include <conio.h>

int main(){
clrscr();
fstream fin;
fin.open("file1.txt", ios::in);
char x;
int c=0;
	while(!fin.eof()){
	x = fin.get();
	c = c+1;
	}
	cout << "\nTotal Character="<< c;
	fin.close();
getch();
return 0;
}
