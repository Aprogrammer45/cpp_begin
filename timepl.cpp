#include<iostream>
#include<chrono>
using namespace std;
class intro{
	public:
	intro(){
	cout<<"Lets Play with time"<<endl;
}
};
class process{
	public:
	string t(string a){
		time_t now = time(0);
		a=ctime(&now);
		return a;
		
	}
	};
int main(){
	string tm;
	intro i;
	process p;
	tm=p.t(tm);
	cout<<"Current Time ="<<tm<<endl;
	return 0;
}
