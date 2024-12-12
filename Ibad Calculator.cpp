#include<iostream>
using namespace std;
int main(){
	char op;
	double num1, num2;
	cout<< "Enter Operator (+,-,*,/,%):";
	cin>>op;
	cout<<"Enter two numbers:";
	cin>>num1 >> num2;
	
	if(op== '+'){
		cout<<"Result:"<<num1+num2<<endl;
	}
	else if(op=='-'){
		cout<<"Result:"<<num1-num2<<endl;
	}
	else if(op=='*'){
		cout<<"Result:"<<num1*num2<<endl;
	}
	else if(op=='/'){
		if(num2!=0)
		cout<<"Result:"<<num1/num2<<endl;
		else{
			cout<<"Error! Devision is zero"<<endl;
		}
	}
	else if(op=='%'){
		if(num2!=0){
		cout<<"Result:"<<num1/num2<<endl;
	}
		else{
			cout<<"Error! Devision is zero"<<endl;
			}
	}
	else{
		cout<<"Invalid Operator."<<endl;
	}
}
