#include<iostream>
using namespace std;

class bank
{
	private:
		char depositor[20];
		char acctype[20];
		int accNo;
		int balance;
		
		public:
			void member(){
				cout<<"......welcome to Hindustan bank......."<<endl;
				cout<<"enter the acc holder name :";
				gets(depositor);
				cout<<"select the account type"<<endl;
				cout<<"press A for saving accout...press B for current account ";
				gets(acctype);
				cout<<"enter the acc NO: ";
				cin>>accNo;
				cout<<"enter the amount to deposit: "<<endl;
				cin>>balance;
			}
			void deposit(){
				int amount;
				cout<<"........................................................"<<endl;
				cout<<"enter the amount to credit: "<<endl;
				cin>>amount;
				balance+=amount;
				cout<<"........................................................"<<endl;
				cout<<"amount credited successfully \n new balance is: "<<balance<<endl;
				cout<<"........................................................"<<endl;	
		}
	        void withdraw(){
	        	int amount;
	        	cout<<"enter the amount to debit: "<<endl;
	        	cin>>amount;
	        	cout<<"........................................................"<<endl;
	        	if(amount<=balance){
				
	        	balance-=amount;
				cout<<"after debit your balance is : "<<balance<<endl;
			}
				
				else{
					cout<<"your debit amount is more than your balance :"<<endl;
				
				}
		}
			void display(){
				cout<<".........................\n.........................."<<endl;
				cout<<"name: "<<depositor<<endl;
				
				cout<<"acc balance : "<<balance;
				
			}
};
int main(){
	    bank c;
	    c.member();
	    c.deposit();
	    c.withdraw();
	    c.display();
	    
	  
	  
	  return 0;
}

