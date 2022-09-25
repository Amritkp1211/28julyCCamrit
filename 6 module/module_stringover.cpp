#include<iostream>
#include<string.h>
using namespace std;

class A{
	char str[20];
	public:
		void input(){
			cout<<"enter the string: "<<endl;
		    gets(str);
					}
					
		A operator+(A k){
			A temp;
			strcpy(temp.str,str);
			strcat(temp.str,k.str);
			return temp;
		}			
					
		void display(){
			cout<<"addiiton of string is : "<<str;
	}
};
int main(){
	
	A a1,a2,a3;
	a1.input();
	a2.input();
	a3=a1+a2;
	a3.display();
	return 0;
}

