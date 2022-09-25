//write a program to swap two numbers using template;
#include<iostream>
using namespace std;

template<class T>

class swap{
	public:
		T temp;
	void input(T a , T b){
		
			temp=a;
			a=b;
			b=temp;
			
		}

	
};
int main(){
	int a ,b;
cout<<"enter first number: "<<endl;
cin>>a;
cout<<"enter second no: "<<endl;
cin>>b;
cout<<"befor swap values:"<<a<<b;
swap k;
  k.input(a,b);
cout<<"after swap"<<endl;
cout<<"a values is: "<<a<<endl;
cout<<"b value is : "<<b;

	return 0;
}
