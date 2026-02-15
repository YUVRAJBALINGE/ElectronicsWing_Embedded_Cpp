/*
 @brief : Write a c++ program to display the merge the data of 2 file into third file
 @param : file1 name file2 name file3 name
 @reval : display file merge successful
*/

#include "iostream.h"
#include "conio.h"
#include "fstream.h"


void main(){
clrscr();
ifstream f1,f2;
fstream f3;

f1.open("file1.txt");
f2.open("file2.txt");

f3.open("file3.txt",ios::out | ios:: nocreate | ios::noreplace);

char x;
while(!f1.eof()){
       x= f1.get();
       f3.put(x);
}
while(!f2.eof()){
x= f2.get();
f3.put(x);
}

cout << "File Merged completed";
f1.close();
f2.close();
f3.close();

getch();

}