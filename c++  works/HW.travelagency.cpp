#include<iostream>
#include<string.h>
using namespace std;

class Travel{
		char c;
	public:
	
		void member(){
		
		cout<<"welcome to application"<<endl;
		cout<<"ten must visit places in india "<<endl;
		cout<<" 1.leh \n 2.manali \n 3.kasol\n 4.jaisalmer \n 5.mount abu \n 6.manisram \n 7.dehradun \n 8.bhuvneshwer \n 9.lonavala \n 10.rameshweram"<<endl;
			
	
}
};
class yes:public Travel{
	public:
	char c;
	void no(){
	cout<<"..................................registration........................................"<<endl;
	
		}

};
class registration:public yes
{

	 	 public:
	  	char name[20];
	    int age;
     	char city[20];
	    char email[20];
	   char username[20];
	   int pass;
	  void display1(){
	  	fflush(stdin);
	  	cout<<"enter the name: "<<endl;
	  	gets(name);
	  	cout<<"enter the age: "<<endl;
	  	cin>>age;
	  		fflush(stdin);
	  	cout<<"enter the city: "<<endl;
	    gets(city);
	    	fflush(stdin);
	    cout<<"eneter the email: "<<endl;
	    gets(email);
	    	fflush(stdin);
	    cout<<"enter the username: "<<endl;
	    gets(username);
	    cout<<"enter password: "<<endl;
	    cin>>pass;
	    	fflush(stdin);
	    cout<<"registration succeful"<<endl;
	  
	   	  }
	 
	 
};
class login:public registration
{
	char user[20];
	int password;
	public:
	
	void display2(){
		cout<<"login page"<<endl;
		cout<<"username : "<<endl;
		cin>>user;
		cout<<"password: "<<endl;
		cin>>password;
		if( password==pass && strcmp(user,username)==0){
			
			cout<<"login successfully"<<endl;
		}
		else{
			cout<<"access denied"<<endl;
		}
	}
	
};
int  main(){
		login obj;
		obj.member();
	char choice;
	cout<<"press y/Y for continue"<<endl;
	cin>>choice;
	if(choice=='y'||choice=='Y'){
		obj.no();
		obj.display1();
		obj.display2();
	}
else{
	cout<<"thanks for visiting"<<endl;
	
}
	

	return 0;
}
