//Input : m ->row
//	  n -> column
//Process: Sum of diagnoal element
//Output :  Display the sum of diagnoal element

#include<iostream.h>
#include<conio.h>
//#include"stdlib.h"

class matrix{
 private:
 int row;
 int column;
 int sum;
 int matrix_array[10][10]; //static delaration of matrix array


 public:
 void inputMatrixOrder();
 void calculateSum();
 void displaySum();

 //Usecase of construct
 matrix(){
 row= 0;
 column=0;
 sum=0;

 }

};
void matrix::inputMatrixOrder(){
 int index1=0;
 int index2=0;
 cout << "\nEnter the order of Matrix m(row) n(column)=";
 cin>>row>>column;

 for (index1=0; index1<row;index1++)
 {
  for(index2=0; index2<column;index2++)

   cin>>matrix_array[index1][index2];
 }

}
void matrix::calculateSum(){
 int index1;
 int index2;


 for(index1=0; index1< row; index1++){
	for(index2=0; index2<column; index2++){

	if(index1== index2)
		sum = sum + matrix_array[index1][index2];
	}
 }

}

void matrix::displaySum(){
cout << "\nMatrix Sum="<<sum;
}

void main(){
 clrscr();

 cout << "Hello World" ;

 matrix m;

 m.inputMatrixOrder();
 m.calculateSum();
 m.displaySum();


getch();
}