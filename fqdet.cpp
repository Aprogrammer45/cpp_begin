#include<iostream>
using namespace std;
class problem{
	public:
	int a;
	problem(){
	cout<<"Using the known to find the unknown."<<endl;
	cout<<"Checking the quality of gasoline based on octane no."<<endl;
}
void ip(){
	cout<<"Enter Octane No."<<endl;
	cin>>a;
}
};
class process:public problem{
	public:
	void onchk(){
		if(a<90){
			cout<<"Fuel is harmful for engine in long run."<<endl;
		}
		else if(a>=90 & a<100){
			cout<<"Fuel is good for engine."<<endl;
		}
		else{
			cout<<"Invalid Octane Rating"<<endl;
		}
	}
};
int main(){
	process p;
	for(int i;i<3;i++){
	p.ip();
	p.onchk();
}
}
