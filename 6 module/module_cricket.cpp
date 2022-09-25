#include<iostream>
using namespace std;

class cricketer{
	public:
		void display(){
	cout<<"welcome to Kshetrpal Cricket Club Sindrath"<<endl;
	cout<<"...................info.................."<<endl;
}};

class batsman:public cricketer{
int run[5];
float trun;
 
	public:
		void runs(){
		 cout<<"enter five ennings run"<<endl;
		 for(int i=0;i<5;i++){
		 	cin>>run[i];
		 }
		}
		
		int total_run(){
		    float avg;
		    
			for(int i=0;i<5;i++){
			trun+=run[i];}
			cout<<".............."<<endl;
			cout<<"total run: "<<trun<<endl;
		return trun;
		}
		
		void avg(){
			cout<<"....................................."<<endl;
			cout<<"avg=  "<<trun/5<<endl;
		}
		void perfomane(){
			cout<<"best perfomance: "<<endl;
		}
		
};

int main(){
	
	batsman obj;
	obj.display();
	obj.runs();
	obj.total_run();
	obj.avg();
	return 0;
}
