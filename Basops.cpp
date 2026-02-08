#include<iostream>
using namespace std;
int signed a,c;
class integer{
	public:
	void av(){
		c=(a<0)?-a:a ;
		cout<<"Absolute value= "<<c<<endl;
		
	}
	void sq(){
		cout<<"Squared no. "<<a*a<<endl;
		
	}
};
int main(){
	cout<<"Enter Number="<<endl;
	cin>>a;
	integer i;
	i.av();
	i.sq();
	
}
