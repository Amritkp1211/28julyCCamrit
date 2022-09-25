#include<iostream>
using namespace std;

int div(int a , int b){
	
	if(b == 0){
		throw "0 can not be divided";
	}
	return a/b;
}


int main(){
	
	float a,b;
	cout<<"Enter 2 Number : ";
	cin>>a>>b;
	try{
		cout<<"Ans "<<div(a,b);
	}
	
	catch(const char*e){
		cout<<"Error"<<e;
	}return 0;
}
