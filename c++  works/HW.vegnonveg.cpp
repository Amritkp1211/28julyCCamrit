 #include<iostream>
using namespace std;
int returnTotalBill();
int main(){
	
	int totbill = returnTotalBill();
	cout<<"your bill :"<<totbill;
	cout<<"thank for visiting"<<endl;
	
	
	
	
	
}

int returnTotalBill(){
	char c;
	char item;
	char fruititem;
	int billamount=0;
	char selectagain;
	char vegeitem;
	
	
	cout<<"....welcome to BHUTKA Fruit and vegetables....."<<endl;
	cout<<"follow the intruction"<<endl;
	cout<<"step 1:press s to start your order"<<endl;
	cout<<"step 2: you can order both fruit nand vegetable"<<endl;
	cout<<"step 3: please select a for fruit"<<endl;
	cout<<"step 4: please select b for vegetable"<<endl;
	cout<<"step 5: you will get your bill after order"<<endl;
	start:
	cin>>c;
	if(c=='s'||c=='S'){
		items:
		cout<<"please enter your choice from list"<<endl;
		cout<<"(a) fruit     (b)Vegetable"<<endl;
		cin>>item;
		if(item=='a'||item=='A'){
			fruitlist:
			cout<<"please select your choice"<<endl;
            cout<<"(1) apple .. price:100"<<endl;
            cout<<"(2) banana .. price:50"<<endl;
            cout<<"(3) orange .. price:80"<<endl;
            cout<<"(4) kivi .. price:150"<<endl;
            cout<<"(5) jackfruit .. price:30"<<endl;
            
            cin>>fruititem;
            if(fruititem='1'){
            	billamount=billamount+100;
			}
			else if(fruititem='2'){
            	billamount=billamount+50;
			}
            else if(fruititem='3'){
            	billamount=billamount+80;
			}
			else if(fruititem='4'){
            	billamount=billamount+150;
			}
             else if(fruititem='5'){
            	billamount=billamount+30;
			}
            
            else{
            	cout<<"you entered wrong!selectagain"<<endl;
            	goto fruitlist;
			}
            cout<<"do you want to add more item"<<endl;
            cout<<"press y for yes n for no"<<endl;
            cin>>selectagain;
            if(selectagain=='y' || selectagain=='Y'){
            	goto items;
			}
			else{
				return billamount;
			}
							
					}
		else if(item=='b' || item=='B'){
			vegelist:
			cout<<"please select your choice"<<endl;
            cout<<"(1) carrot .. price:200"<<endl;
            cout<<"(2) potato .. price:150"<<endl;
            cout<<"(3) tomato .. price:180"<<endl;
            cout<<"(4) onion .. price:100"<<endl;
            cout<<"(5) pea .. price:130"<<endl;
            
            cin>>vegeitem;
            if(vegeitem='1'){
            	billamount=billamount+200;
			}
			else if(vegeitem='2'){
            	billamount=billamount+150;
			}
            else if(vegeitem='3'){
            	billamount=billamount+180;
			}
			else if(vegeitem='4'){
            	billamount=billamount+100;
			}
             else if(vegeitem='5'){
            	billamount=billamount+130;
			}
            
            else{
            	cout<<"you entered wrong!selectagain"<<endl;
            	goto vegelist;
			}
            cout<<"do you want to add more item"<<endl;
            cout<<"press y for yes n for no"<<endl;
            cin>>selectagain;
            if(selectagain=='y' || selectagain=='Y'){
            	goto items;
			}
			else{
				return billamount;
			}
			
		}
		else{
			cout<<"you entered wrong value please try again"<<endl;
			goto items;
			
		}
		
		
	}
	
	else{
		cout<<"you entered wrong value please press s!"<<endl;
		goto start;
	}
	
	
	
	
	return billamount;
}
