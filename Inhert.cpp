#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int a,d;
string b;
class cv{
    public:
    cv(){
        cout<<"Only kcal/kg and kJ/kg are accepted units."<<endl;
    }
    void ccal(){
        if (a>4000){
        	cout<<"Fuel is good."<<endl;
		}
        else{
        	cout<<"Fuel is bad"<<endl;
		}
    }
    void jcal(){
        if (a>16700){
        	cout<<"Fuel is good."<<endl;
		}
        else{
        	cout<<"Fuel is bad"<<endl;
		}
    }
};
class fuel:public cv{
    public:
    void cfl(unordered_map<string ,int>d){
    	if (d.find(b)!=d.end()){	
    switch(d[b]){
        case 1:
        ccal();
        break;
        case 2:
        jcal();
        break;
        default:
        cout<<"Invalid Output"<<endl;
        }
    }
    else{
    	cout<<"Invalid unit entered"<<endl;
	}
    }
};
int main(){
	int k=0;
	while(k<5){
		k++;
    cout<<"Enter Calorific Value(Value only)"<<endl;
    cin>>a;
    fuel f;
    cout<<"Units of value="<<endl;
    cin>>b;
    unordered_map<string ,int>d={
	{"kcal/kg",1},{"kJ/kg",2}
	};
	f.cfl(d);
}
	return 0;
}

