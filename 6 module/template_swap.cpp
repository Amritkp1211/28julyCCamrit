#include<iostream>
using namespace std;

template <class T>

class A
{
	public:
	T a,b,temp;
	
		void input(){
			cout<<"enter the value of no: ";
			cin>>a>>b;
			cout<<"before swaping no is: "<<a<<endl<<b;
			cout<<"..................................................."<<endl;
			
		}
		void change(){
			
			temp=a;
			a=b;
			b=temp;
		}
		void show(){
			cout<<"after swaping the no is: "<<a<<endl<<b;
			
		}
};
int main(){
	cout<<"....................................."<<endl;
	A<int> obj;
	obj.input();
	obj.change();
	obj.show();
	return 0;
}
