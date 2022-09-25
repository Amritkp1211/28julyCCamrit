#include<iostream>
using namespace std;

class A{
	
	string name,add,n,type;
	int pass,dob,pin,choice,amount;
	public: 
	 void display(){
	 	cout<<"-------welcome to SBI-----------"<<endl;
	 	cout<<" 1.gujrat\n 2.rajasthan\n 3.Mp"<<endl;
	 	 }
	 	 
	 	 void login(){
	 	 	fflush(stdin);
	 	 	cout<<".................................................................."<<endl;
	 	 	cout<<"enter user name: "<<endl;
	 	 	cin>>name;
	 	 	cout<<"enter password: "<<endl;
	 	 	cin>>pass;
	 	 	}
	 	 	
	 	 	void registration(){
	 	 			cout<<".................................................................."<<endl;
	 	 		cout<<"enter name: "<<endl;
	 	 		cin>>n;
	 	 		cout<<"HINT: write dob in format DDMMYY "<<endl;
	 	 		cout<<"enter dob : "<<endl;
	 	 		cin>>dob;
	 	 		cout<<"enter aadhar pin: "<<endl;
	 	 		cin>>pin;
	 	 		cout<<"enter address: "<<endl;
	 	 		cin>>add;
	 	 		cout<<"enter account type (char): "<<endl;
	 	 		cin>>type;
	 	 	
	 	 		
	 	 		cout<<"----registration succesfully----"<<endl;
			  }
			  void bank(){
			  	cout<<".................................................................."<<endl;
			  	cout<<"------------------your bank details-------------------"<<endl;
			  	cout<<"name: "<<n<<endl;
			  	cout<<"dob= "<<dob<<endl;
			  	cout<<"adhar pin: "<<pin<<endl;
			  	cout<<"address: "<<add<<endl;
			  	cout<<"acc type: "<<type<<endl;
			  	cout<<"ifsc code : 212332443"<<endl;
	 	 		cout<<"account no:  98573479473954735"<<endl;
	 	 		
			  }
			  
			  void menu(){
			  	cout<<"................................................"<<endl;
			  	cout<<"-------------------menu--------------------"<<endl;
			  		int balance;
			  		
			  		cout<<"NOTE :dear customer you must have to add minimum 1000rs to avail debit credit facility"<<endl;
			  			cout<<"......................."<<endl;
			  	cout<<"amount u want to add in account "<<endl;
			  	cin>>balance;
			  				  start:
			  				  	cout<<"............................................................."<<endl;

			  	cout<<" 1. credit \n 2. debit \n 3. view \n 4. logout"<<endl;
			  	cout<<"enter the choice : "<<endl;
			  	cin>>choice;
			  	
			  	if(choice==1){
			  		cout<<"............................................................."<<endl;
			  		cout<<"enter the amount to credit : "<<endl;
			  		cin>>amount;
			  		balance+=amount;
			  		cout<<"account balnce after credit :";
			  		cout<<balance<<endl;
			  		cout<<"............................................................."<<endl;
			  		goto start;
			  		
				  }
				  else if(choice==2){
				  	cout<<"............................................................."<<endl;
				  	cout<<"enter the amount to debit: "<<endl;
				  	cin>>amount;
				  		if(amount>balance){
				  			cout<<"balance is insufficient "<<endl;
				  			cout<<"............................................................."<<endl;
				  			goto start;
				}
				else{
				 cout<<"............................................................."<<endl;
				  	balance-=amount;
				  		cout<<"account balnce after debit :  ";
				  	cout<<balance<<endl;
				  	cout<<"............................................................."<<endl;
					  goto start;}
				  }
				  else if(choice==3){
				  	cout<<" --------acc balance------- "<<endl;
				  	cout<<"account balance: ";
				  	cout<<balance;
				  	cout<<"............................................................."<<endl;
				  	goto start;
				  }
				  else{
				  	cout<<"log out succesfully"<<endl;
				  }
			  	
			  }
	 	
	
};
class gujrat: public A
{
	public:
		void guj(){
	 	cout<<"------------------------------"<<endl;
	 	cout<<"-----list of Sbi branch cities-------"<<endl;
	 	cout<<" 1.ahemdabad\n 2.baroda\n 3.surat"<<endl;
	 
	 }
};
class rajasthan: public A
{
	public:
		void raj(){
		
		cout<<"-----------------------"<<endl;
		cout<<"----list of cities------"<<endl;
		cout<<" 1.jaipur \n 2.kota \n 3.sirohi "<<endl;
	}
	
};
class MP: public A
{
	public:
		void mp(){
		
		cout<<"--------------------------"<<endl;
		cout<<".....list  of cities........"<<endl;
		cout<<" 1.indore \n 2. bhopal \n 3.jabalpur"<<endl;;
		
}
};

int main(){
	MP obj; rajasthan obj2; gujrat obj3;
	int s,c,y;
	obj3.display();
	
	cout<<"select the state: ";
	cin>>s;

		if(s==1){
		obj3.guj();	
		cout<<"select city: "<<endl;
	    cin>>c; 
	    {
	    	if(c==1){
	    		cout<<"----welcome to ahemdabad sbi-----"<<endl;
	    		cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    		{
	    			if(y==1){
	    				obj3.login();
	    				obj3.menu();
	    				
					}
					else if(y==2){
						obj3.registration();
						obj3.bank();
						obj3.menu();
						
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
			}
			else if(c==2){
				cout<<"------welcome to baroda sbi----------"<<endl;
				cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    			{
	    			if(y==1){
	    				obj3.login();
	    				obj3.menu();
					}
					else if(y==2){
						obj3.registration();
						obj3.bank();
						obj3.menu();
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
	    		
			}
			else if(c==3){
				cout<<"-------welcome to surat sbi--------------"<<endl;
				cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    			{
	    			if(y==1){
	    				obj3.login();
	    				obj3.menu();
					}
					else if(y==2){
						obj3.registration();
						obj3.bank();
						obj3.menu();
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
	    		
			}
			else{
				cout<<"thanks for visiting"<<endl;
			}
		}
		}
		else if(s==2){
			obj2.raj();
			cout<<"select city: "<<endl;
	        cin>>c;
	        {
	    	if(c==1){
	    		cout<<"----welcome to jaipur sbi-----"<<endl;
	    		cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    			{
	    			if(y==1){
	    				obj2.login();
	    				obj2.menu();
					}
					else if(y==2){
						obj2.registration();
						obj2.bank();
						obj2.menu();
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
			}
			else if(c==2){
				cout<<"------welcome to kota sbi----------"<<endl;
				cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    			{
	    			if(y==1){
	    				obj2.login();
	    				obj2.menu();
	    				
					}
					else if(y==2){
						obj2.registration();
						obj2.bank();
						obj2.menu();
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
	    			
			}
			else if(c==3){
				cout<<"-------welcome to sirohi sbi--------------"<<endl;
				cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    			{
	    			if(y==1){
	    				obj2.login();
	    				obj2.menu();
					}
					else if(y==2){
						obj2.registration();
						obj2.bank();
						obj2.menu();
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
	    		
			
	}
		}}
		else if(s==3){
			obj.mp();
			cout<<"select city: "<<endl;
	        cin>>c;
	        {
	    	if(c==1){
	    		cout<<"----welcome to indore sbi-----"<<endl;
	    		cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    			{
	    			if(y==1){
	    				obj.login();
	    				obj.menu();
					}
					else if(y==2){
						obj.registration();
						obj.bank();
						obj.menu();
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
			}
			else if(c==2){
				cout<<"------welcome to bhopal sbi----------"<<endl;
				cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    			{
	    			if(y==1){
	    				obj.login();
	    				obj.menu();
					}
					else if(y==2){
						obj.registration();
						obj.bank();
						obj.menu();
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
			}
			else if(c==3){
				cout<<"-------welcome to jabalpur sbi--------------"<<endl;
				cout<<"are you registered user"<<endl;
	    		cout<<"1. yes , 2. no"<<endl;
	    		cout<<"select choice: "<<endl;
	    		cin>>y;
	    			{
	    			if(y==1){
	    				obj.login();
	    				obj.menu();
					}
					else if(y==2){
						obj.registration();
						obj.bank();
						obj.menu();
					}
					else{
						cout<<"you entered wrong value"<<endl;
					}
				}
			}
			else{
				cout<<"thanks for visiting"<<endl;
			}
		}
	}
		else{
			cout<<"thanks for visiting"<<endl;
		}

	
	
	return 0;
 }
