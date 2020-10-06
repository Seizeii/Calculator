#include<iostream>
using namespace std;

int main(){
	int sel;
	int num1;
	int num2;

	int add;
	int sub;
	double div;
	double mul;

	cout<<"1 = Addition \n2 = Subtraction \n3 = Division \n4 = Multiplication\n\n";
	cout<<"Select Operation: ";
	cin>>sel;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;

	add=num1+num2;
	sub=num1-num2;
	div=num1/num2;
	mul=num1*num2;
	switch(sel)
	{

		case 1:

			cout<<"The Sum is: "<<add;
			break;

		case 2:

			cout<<"The Difference is: "<<sub;
			break;

		case 3:

			cout<<"The Quotient is: "<<div;
			break;

		case 4:

			cout<<"The Product is: "<<mul;
			break;

}
}
