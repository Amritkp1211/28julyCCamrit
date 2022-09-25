#include<iostream>
using namespace std;

	int returnTotalBill(int bill);


int main(){
int totbill;
	
	
	cout<<"your total" <<returnTotalBill(totbill)<<endl;
	cout<<"thanks for visiting"<<endl;
	cout<<"bhutka gaming and fruit store"<<endl;
	
	
	return 0;
}
int returnTotalBill(int bill){
		int choice, quantity, billamount=0;
	    char c,fruititem;
	    char x;
	        cout<<"....welcome to BHUTKA Fruit store....."<<endl;
	        cout<<"press for M to see menu"<<endl;
	        start:
	        cin>>c;
	        bhutka:
	        if(c=='m'||c=='M'){
	        	back:
	        	menu:
	        	cout<<"1. apple price: 100"<<endl;
                cout<<"2. orange price: 200"<<endl;
				cout<<"3. banana price: 50"<<endl;
				cout<<"4. cherry price: 30"<<endl;
				cin>>fruititem;
	 			
				cout<<"enter the choice"<<endl;
				cin>>choice;
				cout<<"enter the quantity"<<endl;
				cin>>quantity;
				
				if(choice==1){
					billamount=billamount+100;
				}
				
				else if(choice==2){
					billamount=billamount+200;
				}
				else if(choice==3){
					billamount=billamount+50;
				}
				else if(choice==4){
					billamount=billamount+30;
				}
				else {
					cout<<"please type correct value"<<endl;
					goto back;
				}
				again:
				cout<<"do you want to continue"<<endl;
				cout<<"if yes than press y and for no press n"<<endl;
				cin>>x;
				
				if(x=='y'){
					goto menu;
					
				}
				else {
					return billamount;
					
				}
				
				
			}
			else{
				cout<<"...thanks for visiting..."<<endl;
				cout<<endl;
				goto start;
				
			}

     return billamount;
 }
