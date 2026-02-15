#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<sstream>
using namespace std;
class problem{
	public:
	double a;
	int b;
	problem(){
		cout<<"Using known to find the unknown"<<endl;
		cout<<"D1 is the distance for first 50kms\n"
		    <<"D2 is the distance 50-100kms\n"
		    <<"D3 is the distance 100-150kms\n"
		    <<"D4 is the distance 150-200kms\n"
		    <<endl;
		cout<<"Let us consider different speed limits at different points."<<endl;
		cout<<"Enter Kilometers="<<endl;
		cin>>a;
		cout<<"Enter Distance Point(1/2/3/4)="<<endl;
		cin>>b;
	}
	
};
class toolkit:public problem{
	public:
	double durationd;
	double durt40(double a){
		durationd=a/40.0;
		return durationd;
	}
	double durt60(double a){
		durationd=a/60.0;
		return durationd;
	}	
};
class solution:public toolkit{
	public:
	string dout;
	void sol(){
		switch(b){
			case 1:
				durt40(a);
				break;
		    case 2:
		    	durt60(a);
		    	break;
		    case 3:
		    	durt40(a);
		    	break;
		    case 4:
		    	durt60(a);
		    	break;
		    default:
		    	cout<<"Invalid Input"<<endl;
		    	exit(0);
		}
		ostringstream oss;
		oss<<fixed<<setprecision(1)<<durationd;
		if (durationd<1){
			cout<<"You will reach in "<<durationd*60<< " minutes"<<endl;
			}
		else{
		string dout="You will reach in "+oss.str()+" hours";
		cout<<dout<<endl;
	}
}
};
int main(){
	for(int k=0;k<3;k++){
	solution s;
	s.sol();
	ofstream fh("Duration.txt",ios::app);
	fh<<fixed<<setprecision(1);
    fh<<"Distance="<<s.a<<"km"<<endl;
    fh<<"Duration="<<s.durationd<<"hrs"<<endl;
    fh.close();
}
    cout<<"Saved as Duration.txt"<<endl;
    return 0;	
}

