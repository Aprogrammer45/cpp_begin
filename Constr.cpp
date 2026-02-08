#include<iostream>
using namespace std;
int a,b,c,d,j;
class intro{
	public:
		 intro(){
		cout<<"Using Bitwise operators"<<endl;}
		int num(){
		
			cout<<"Enter 1st Number:"<<endl;
			cin>>a;
			cout<<"Enter 2nd Number:"<<endl;
			cin>>b;
		
			return 0;
		}
};

class compute{
	public:
		int cpt(){
			c=a&b;
			d=a|b;
			cout<<"On operating with AND="<<c<<endl;
			cout<<"On operating with OR="<<d<<endl;
		}
};


int main(){
	intro s;
	compute p;
	while(j<3){
	
	j++;
	s.num();
	p.cpt();
}
	return 0;
	
}
