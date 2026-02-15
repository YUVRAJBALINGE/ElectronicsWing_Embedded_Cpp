//Write the c++ program to print the triangle of star using object & class

#include<iostream.h>
#include<conio.h>

class pattern{
private:
	int n;
public:
	void getData();
	void displayPattern1();
};
void pattern::getData(){
 cin>>n;;
}
void pattern::displayPattern1(){
//  n=2: *
//       **
//  n=3: *
//       **
//       ***
int i,j;

for(i=0;i<n;i++){
	for(j=0;j<=i;j++)
	  cout<<"*";
	cout<<"\n";
	}
}

void main(){
clrscr();
pattern p;
p.getData();
p.displayPattern1();

getch();
}