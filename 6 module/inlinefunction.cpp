//inline function cub and mult;
#include<iostream>
using namespace std;

class cubmul
{
	public:
		inline float mul(float x,float y)
		{
			return x*y;
		}
		inline float cube(float x){
			return x*x*x;
			
		}
};

int main(){
	float x,y;
	cout<<"enter the numbers: "<<endl;
	cin>>x>>y;
	 
	cubmul k;
	cout<<"multiplication is: "<<k.mul(x,y)<<endl;
	cout<<"cube of x is : "<<k.cube(x)<<"\n"<<"cube of y is : "<<k.cube(y);
	return 0;
	
}
