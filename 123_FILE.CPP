/*
 @brief : WRITE THE C++ PROGRAM TO WRITE THE FILE1.TXT TO FILE2.TXT
	  Copy the content of file1 to file2
 @param  : file1 name & file2 name
 @retval : coping of file is done
*/

#include "iostream.h"'
#include "fstream.h"
#include "conio.h"

void main(){
clrscr();
ifstream fin;
ofstream fout;


fin.open("file1.txt",ios::in);
fout.open("file2.txt",ios::out);

char x;

while(!fin.eof()){
x = fin.get();
fout.put(x);
}
cout << "\n file is copied";

fin.close();
fout.close();

getch();
}