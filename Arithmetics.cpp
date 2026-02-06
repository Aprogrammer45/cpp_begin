#include <iostream>
using namespace std;
int main(){
	int a,b,c;	
	cout<<"Enter 1st number="<<endl;
	cin>>a;
	cout<<"Enter 2nd number="<<endl;
	cin>>b;
	cout<<"1.Add\n 2.Subtract\n 3.Multiply"<<endl;
	int i;
	while(i<3){
	i++;
	cout<<"Enter Choice No.="<<endl;
	cin>>c;
	switch(c){
		case 1:
			cout<<"Addition="<<a+b<<endl;
			break;
		case 2:
			cout<<"Subtraction="<<a-b<<endl;
			break;
		case 3:
			cout<<"Multiplication="<<a*b<<endl;
			break;
	}
}
		return 0;	
}
