/*
@brief : Write dowbn the c++ code to show the object oriented code start

@param : void
@relval : Display the Hello World
*/

#include<iostream.h>
#include<conio.h>

//Define the class of item
class item{
private:
int x;
int y;

int *address_x;
int *address_y;

public:
void getdata();
void display();
void display_pointer_address();
};

void item::getdata(){
cin>>x>>y;
address_x = &x;
address_y = &y;
}

void item::display(){
cout<<x<<"\n";
cout<<y<<"\n";
}

void item::display_pointer_address(){
cout<<address_x<<"\n";
cout<<address_y<<"\n";
}

int main(){
clrscr();
//Define the object :: allocate a memory
item t1;

t1.getdata();
t1.display();
t1.display_pointer_address();

getch();
return 0;
}




