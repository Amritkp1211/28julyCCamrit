#include<iostream>
using namespace std;


class bank
{
	private:
		char depositor[20];
	
		
		
		public:
			void member(){
				cout<<"......welcome to Hindustan bank......."<<endl;
				cout<<"enter the acc holder name :";
				gets(depositor);
			
			
};
class saving:public bank
{
		
		int accNo;
		int balance;
		public: 
		void display2{
		cout<<"enter the acc NO: ";
				cin>>accNo;
				cout<<"enter the amount to deposit: "<<endl;
				cin>>balance;
			}
};
class current:public bank
{
	
		int accNo;
		int balance;
		public: 
		void display1{
		cout<<"enter the acc NO: ";
				cin>>accNo;
				cout<<"enter the amount to deposit: "<<endl;
				cin>>balance;
			}
	
};
int main(){
	int acctype;
	cout<<"enter the account type \n press'1' for saving, press '2' for current" <<endl;
	cin>>acctype;
	current c;
	saving s;
	if(acctype==1){
		c.member();
	}
	return 0;
}
