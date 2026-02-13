#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class intro{
	public:
	intro(){
		cout<<"Welcome to HRTC"<<endl;
		cout<<"Ordinary bus fare in hilly areas"<<endl;
	}	
};
class ticket{
	public:
	int a;
	string b;
	void ip(){
		cout<<"Enter Kilometers:"<<endl;
		cin>>a;
		cout<<"Enter Gender of Passenger(M/F):"<<endl;
		cin>>b;
	}
	int c;
	void fare(){
		c=a*2.5;
		cout<<"Your fare without concession = Rs."<<c<<endl;
	}
};
class concession:public ticket{
	public:
	void fconc(){
		if (b=="F"){
			cout<<"Your fare after concession = Rs."<<c/2<<endl;
		}
		else if(b=="M"){
			cout<<"No concession applied."<<endl;
		}
		else{
			cout<<"Invalid Input"<<endl;
		}
	}
	
};
int main(){
	intro i;
	ticket t;
	concession c;
	for(int k=0;k<2;k++){
	c.ip();
	c.fare();
	c.fconc();
}
}

