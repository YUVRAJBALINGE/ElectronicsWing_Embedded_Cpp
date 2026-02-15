//Write a c++ program  to input string x and count the vowel in it using class and object

//input : string
//Process: count vowels "a",'e','i','o','u'
//output: display the cout of the vowels in string
// e.g. hello_world ->3
// e.g. test_trubo  ->2

#include<iostream.h>
#include<conio.h>
#include<string.h>

class item{
private:
char string[20];

public:
void getString();
void countVowel();

};

void item::getString(){
cin>> string;
}

void item::countVowel(){
 int count_vowel;
 int i=0;

 for(i=0; i< sizeof(string);i++)
	if(((string[i] == 'a')) |
	   ((string[i] == 'e')) |
	   ((string[i] == 'i')) |
	   ((string[i] == 'o')) |
	   ((string[i] == 'u')))
	cout << "It is a string";

}

void main(){
clrscr();
item t;
t.getString();
t.countVowel();

getch();
}