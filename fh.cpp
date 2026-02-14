#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<fstream>
using namespace std;
class intro{
	public:
	intro(){
	cout<<"Handling Everything in a File"<<endl;
}
};
class input{
	public:
	int a,c;
	string n;
	void ip(){
	cout<<"Enter Your Name"<<endl;
	cin>>n;
}
void num(){
	cout<<"Enter a number="<<endl;
	cin>>a;
}
void choice(){
	cout<<"Enter Operation -\n 1 for Square\n 2 for Square Root"<<endl;
	cin>>c;
}
};
class output:public input{
	public:
	string d;
	string opt(){
		switch(c){
			case 1:
			d="Square of Number="+to_string(pow(a,2));
			cout<<d<<endl;
			break;
			case 2:
			d="Square Root of Number="+to_string(sqrt(a));
			cout<<d<<endl;
			break;
			default:
			d="Invalid Input";
			cout<<d<<endl;
		}
		return d;
	}
	
};
int main(){
	intro i;
	input ip;
	output op;
	op.ip();
	for(int k=0;k<2;k++){
	op.num();
	op.choice();
	string r=op.opt();
	ofstream str("Computation.txt",ios::app);
	str<<"Name="<<op.n<<endl;
	str<<"Number="<<op.a<<endl;
	str<<r<<endl;
	str.close();
}
	cout<<"Saved as Computation.txt"<<endl;
	return 0;
}

