#include<iostream>
using namespace std;

class store{
	char name[20];
	int accno;
	public: 
	
	void display(){
		cout<<"welcome to khetlaji store"<<endl;
		 cout<<"enter the name: "<<endl;
		 gets(name);
		 cout<<"enter acc no:"<<endl;
		 cin>>accno;
		 }
    };
    class saving:public store
    {
    	int balance=1000,deposit,t,k;
    	float intrest;
    	public:
    		void display1(){
    			cout<<"your current balance :"<<balance<<endl;
    				cout<<"------------------------------------"<<endl;
    			cout<<"enter the amount to deposit :"<<endl;
    			cin>>deposit;
    				balance+=deposit;
    					cout<<"------------------------------------"<<endl;
				cout<<"balance after deposit is : "<<balance<<endl;	
				
			
				intrest=(balance*12*7)/100;
				
					cout<<"intrest on balance is rate =7% and time =12month :"<<endl;
						cout<<"------------------------------------"<<endl;
					cout<<"intrest is : "<<intrest<<endl;
					
					balance+=intrest;
						cout<<"------------------------------------"<<endl;
					
					cout<<"balance after aadding the interst: "<<balance<<endl;
						cout<<"------------------------------------"<<endl;
					
					cout<<"enter the amount the to withdraw : "<<endl;
					cin>>k;
					balance-=k;
						cout<<"------------------------------------"<<endl;
				
				cout<<"after withdwal balance is : "<<balance<<endl;
				
				cout<<"note: after the withdrwl if balance is below the 10000rs, 500rs penalty will be imposed "<<endl;
				if(balance>=10000){
						cout<<"------------------------------------"<<endl;
					cout<<"your balance is above criteria so no penalty is imposed "<<endl;
					cout<<"final balance is : "<<balance;
				}
				else{
					cout<<"------------------------------------"<<endl;
					cout<<"500 rs penalty imposed on your acc"<<endl;
					balance-=500;
					cout<<"balance after the penalty imposed : "<<balance<<endl;
				}
			}
    		

    	
	};
	class current: public store
    {
    	int balance=2000,deposit,t,k;
    	float intrest;
    	public:
    		void display2(){
    			cout<<"your current balance :"<<balance<<endl;
    				cout<<"------------------------------------"<<endl;
    			cout<<"enter the amount to deposit :"<<endl;
    			cin>>deposit;
    				balance+=deposit;
    					cout<<"------------------------------------"<<endl;
				cout<<"balance after deposit is : "<<balance<<endl;	
				
			
				intrest=(balance*12*10)/100;
				
					cout<<"intrest on balance is rate =10% and time =12month :"<<endl;
						cout<<"------------------------------------"<<endl;
					cout<<"intrest is : "<<intrest<<endl;
					
					balance+=intrest;
						cout<<"------------------------------------"<<endl;
					
					cout<<"balance after aadding the interst: "<<balance<<endl;
						cout<<"------------------------------------"<<endl;
					
					cout<<"enter the amount the to withdraw : "<<endl;
					cin>>k;
					balance-=k;
						cout<<"------------------------------------"<<endl;
				
				cout<<"after withdwal balance is : "<<balance<<endl;
				
				cout<<"note: after the withdrwl if balance is below the 20000rs, 1500rs penalty will be imposed "<<endl;
				if(balance>=20000){
						cout<<"------------------------------------"<<endl;
					cout<<"your balance is above criteria so no penalty is imposed "<<endl;
					cout<<"final balance is : "<<balance;
				}
				else{
					cout<<"------------------------------------"<<endl;
					cout<<"1500 rs penalty imposed on your acc"<<endl;
					balance-=1500;
					cout<<"balance after the penalty imposed : "<<balance<<endl;
				}
			}
    		

    	
	};

int main(){
	saving obj;
	current obj1;
	obj.display();
	int c;
	cout<<"type of acc \n 1. current  2. saving"<<endl;
	cin>>c;
	if(c==2){
		
		
		obj.display1();
	}
	else if(c==1){
		obj1.display2();
	}
	
	
	return 0;
	}
