#include<iostream>
using namespace std;

class bank{
	float simple;
	float am,r,t,k,u,g;
	public: 
	
	void member(){
		cout<<"welcome to --Bharat bank--"<<endl;
		
	}
	void saving(){
		cout<<"note : no  chequebook facility available for saving account"<<endl;
		cout<<"enter the amount to credit: "<<endl;
		cin>>am;
		cout<<"time(in months): "<<endl;
		cin>>t;
		cout<<"bank pay rate 6.5%"<<endl;
		r=6.5;
		cout<<"---------------------"<<endl;
		simple=am*r*t/100;
		cout<<"SI on creditc amount : "<<simple<<endl;
			cout<<"---------------------"<<endl;
		
		am+=simple;
		cout<<"balnce after adding SI : "<<am<<endl;
		
		cout<<"enetr the amount to withdraw: "<<endl;
		cin>>k;
		
		am-=k;
		
		cout<<"amount after withdrawal: "<<am;
	}
	
	void current(){
		cout<<"you have to add minimum amount :5000"<<endl;
		cout<<"enter the amount : "<<endl;
		cin>>u;
		cout<<"note:you can avail the facility of cheque book"<<endl;
		cout<<"enter the amount to credit: "<<endl;
		cin>>g;
		u+=g;
		cout<<"balance after credit : "<<u<<endl;
		
		if(u<6000){
			cout<<"-----------------------------------------------------"<<endl;
			cout<<"your balance  below the minimum amount \n therefor penalty of 500rs emposed"<<endl;
			u-=500;
			cout<<"-----------------------------------------------------"<<endl;
			cout<<"balance after penalty: "<<u<<endl;
			
		}
	}
};
int main(){
	int c;
	bank obj;
	cout<<"select bank acc type\n 1. saving 2.current"<<endl;
	cin>>c;
	if(c==1){
		obj.member();
		obj.saving();
		}
 else if(c==2){
 	obj.member();
 	obj.current();
 }

return 0;	
}
