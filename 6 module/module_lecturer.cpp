#include<iostream>
using namespace std;

class Lecture{
	
	char lecname[20],sub[20],course[20],detail[100];
	
	int numC;
	
	public:
		void assignValues(){
			cout<<"Enter Name of Lecture : ";
			gets(lecname);
			cout<<"Enter Name of Subject : ";
			gets(sub);
			cout<<"Enter Name of Course : ";
			gets(course);
			cout<<"Enter Number of Lectures : ";
			cin>>numC;
			cin.ignore();
		}
		
		void lectureDetail(){
			
			cout<<"Enter Lecture Detail : "<<endl;
			gets(detail);
		}
		
		void display(){
			
			cout<<"Lecture Name : "<<lecname<<endl;
			cout<<"----Lecture Details---"<<endl;
			cout<<detail;
		}
};

main(){
	
	Lecture obj;
	obj.assignValues();
	obj.lectureDetail();
	obj.display();
}
