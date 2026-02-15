//Write down the c++ program to find factorial of a number using class & object

#include<iostream.h>
#include<conio.h>


class math_operation{
private:
int n;
int fact;

public:
void getData();
void processData();
void displayData();
};
void math_operation::getData(){
cout<<"Enter the number=";
cin>>n;
}
void math_operation::processData(){

 int result=1;

 if(n==0)
 {
 fact=1;
 }
 //n=0, 1
 //n=1, 1,
 //n=2, 2,
 //n=3, 6,
 //n=4, 24,
 //n=5, 120
  if(n==1)
  {
  fact = 1;
  }
  else{
	for(int i=1; i<=n; i++){
	result = result*i;
	}
	fact= result;
  }
}
void math_operation::displayData(){
cout << "Factorial= "<<fact;
}

void main(){
	 clrscr();
	    math_operation fact;

	    fact.getData();
	    fact.processData();
	    fact.displayData();
	getch();
}