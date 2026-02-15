/*
@brief : Friend function

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
friend void mean(item);
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

void mean(item t){
float s;
s = (t.x +t.y)/2.0;
cout << "mean=" <<s;
}

int main(){
clrscr();
//Define the object :: allocate a memory
item t1;

t1.getdata();
t1.display();
t1.display_pointer_address();
mean(t1);

getch();
return 0;
}




