#include<iostream>
using namespace std;

class college{
	private:
		char name[20];
		char sub[20];
		char course[20];
		int lec;
		
		public:
		void members(){
			cout<<"enter the name of lecturer: ";
			gets(name);
			cout<<"enter the name of sub: ";
			gets(sub);
			cout<<"enter the name of course: ";
			
		}
	
};
