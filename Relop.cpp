#include<iostream>
using namespace std;
int a,b,c,j;
class Relation{
	public:
		void opt(){
			c= (a>b)?a:b;
	    cout<<"Greater No. "<< c<<"\n" ; }
};
int main(){
	while (j<3){
	cout<<"Enter 1st Number"<<endl;
	cin>>a;
	cout<<"Enter 2nd Number"<<endl;
	cin>>b;
	j++;
	Relation s;
    s.opt();
}
}
