#include<iostream>
using namespace std;

class person{
	char name[20];
	int age;
	int per[5];
	int Sum;
	int add;
	float p;
	public:
		void Name(){
			cout<<"enter the name: "<<endl;
			gets(name);
			
		}
		void Age(){
			cout<<"enter the age :"<<endl;
			cin>>age;
		}
		void marks(){int sum;
			cout<<"enetr the marks of five subject :"<<endl<<" ";
			for(int i=0;i<5;i++){
				cout<<" ";
				cin>>per[i];
			
				}
			
		}
		void percentage(){
		for(int i=0;i<5;i++){
	
			add+=per[i];
			}
				cout<<"..........................................."<<endl;
				cout<<"additon: "<<add<<endl;
				cout<<"..........................................."<<endl;
				cout<<"percentage is: "<<float(add/5)<<endl;
					
		}
	void display(){	cout<<"......................................................."<<endl;
		cout<<"_______full info______________________________"<<endl;
	
		cout<<"name: "<<name<<endl;
		cout<<"total marrks: "<<add<<endl;
		cout<<"percentage: "<<add/5<<endl;
		
		
	}
};

int main(){
	
	person obj;
	obj.Name();
	obj.Age();
	obj.marks();
	obj.percentage();
	obj.display();
	return 0;
	
}
