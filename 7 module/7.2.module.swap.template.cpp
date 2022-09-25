#include<iostream>
using namespace std;

template<class t>

class tempswap{

	public:
		
	
	
	void display(){
		t i,j,n;
	t arr[n];
	t temp;
		cout<<"enter the size  of array: "<<endl;
		cin>>n;
		cout<<"enter the element of array : "<<endl;
		for(i=0;i<n;i++){
			cin>>arr[i];
			
		}
	
			
		 	cout<<"array before sorting: "<<endl;
		
		for(i=0;i<n;i++){
			cout<<" "<<arr[i];
			
			
	            }
	            
	            	cout<<endl;
	     	cout<<"===================================================="<<endl;
	     	for(i=0;i<n;i++){
	     		for(j=i+1;j<n;j++){
	     		 if(arr[i]>arr[j]){
				 temp = arr[i];
				 arr[i] = arr[j];
				 arr[j] = temp;
				 }
				}
				 cout<<" "<<arr[i];
				 } }
	
};
int main(){
	tempswap<int> obj;
	obj.display();
	
	return 0;
}
