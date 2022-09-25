#include<iostream>
using namespace std;

class SIintrest
{
	float SI;
	
	public:
		
		void intrest(float P,float R,float T)
		{
			SI=(P*R*T)/100;
		}
		void display()
		{
			cout<<"simple intrest is= "<<SI;
			
		}
};
 
 int main(){
 	float p,t;
 	cout<<"enter the principal: "<<endl;
 	cin>>p;
 	cout<<"enter the time: "<<endl;
 	cin>>t;
 	SIintrest obj;
 	obj.intrest(p,2.5,t);
 	obj.display();
 }
