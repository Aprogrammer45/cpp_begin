#include<iostream>
#include<string>
#include<unordered_map>
#include<cstdlib>
using namespace std;
string a,d;
string b[4]={"Wood","Charcoal","Diesel","Kerosene"};
int c,e;
class intro{
	public:
    intro(){
        cout<<" Calorific Value\n Moisture Content\n Ignition Temperature\n "<<endl;
    }
    void fname(unordered_map<string,int>c){
        if (c.find(a)!=c.end()){
        switch(c[a]){
            case 1:
            cout<<"Choose what you want to know about wood."<<endl;
            break;
            case 2:
            cout<<"Choose what you want to know about charcoal"<<endl;
            break;
            case 3:
            cout<<"Choose what you want to know about diesel"<<endl;
            break;
            case 4:
            cout<<"Choose what you want to know about kerosene"<<endl;
            break;
        }
    }
    else{
        cout<<"No match found."<<endl;
        exit(0);
    }
}
};
class process{
	public:
	void proc1(unordered_map<string,int>c){
		if (c.find(a)!=c.end()){
        switch(c[a]){
            case 1:
            cout<<"3500-4500 kcal/kg"<<endl;
            break;
            case 2:
            cout<<"7000 kcal/kg"<<endl;
            break;
            case 3:
            cout<<"10000-10500 kcal/kg"<<endl;
            break;
            case 4:
            cout<<"11000 kcal/kg"<<endl;
            break;
        }
    }
    else{
        cout<<"No match found."<<endl;
    }
}
	void proc2(unordered_map<string,int>c){
		if (c.find(a)!=c.end()){
        switch(c[a]){
            case 1:
            cout<<"20-60%"<<endl;
            break;
            case 2:
            cout<<"5-10%"<<endl;
            break;
            case 3:
            cout<<"Negligible"<<endl;
            break;
            case 4:
            cout<<"Negligible"<<endl;
            break;
        }
    }
    else{
        cout<<"No match found."<<endl;
    }
	
	}
	void proc3(unordered_map<string,int>c){
		if (c.find(a)!=c.end()){
        switch(c[a]){
            case 1:
            cout<<"250-300(in degree celcius)"<<endl;
            break;
            case 2:
            cout<<"350-400(in degree celcius)"<<endl;
            break;
            case 3:
            cout<<"200-220(in degree celcius)"<<endl;
            break;
            case 4:
            cout<<"220-250(in degree celcius)"<<endl;
            break;
        }
    }
    else{
        cout<<"No match found."<<endl;
    }
	}
	
	void proc4(unordered_map<string,int>e,unordered_map<string,int>c){
		if (e.find(d)!=e.end()){
        switch(e[d]){
            case 1:
            proc1(c);
            break;
            case 2:
            proc2(c);
            break;
            case 3:
            proc3(c);
            break;
            default:
            cout<<"Invalid Input"<<endl;
		
	}
}
	else{
		cout<<"Invalid Input"<<endl;
		}
}
};
int main(){
	for(int l=0;l<4;l++){
    cout<<"Enter Fuel Name = "<<endl;
    getline(cin,a);
    intro s;
    unordered_map<string,int>c={{"Wood",1},{"Charcoal",2},{"Diesel",3},{"Kerosene",4}};
    s.fname(c);
    for(int m=0;m<3;m++){
    getline(cin ,d);
     unordered_map<string,int>e={{"Calorific Value",1},{"Moisture Content",2},{"Ignition Temperature",3}};
     process p;
     p.proc4(e,c);
 }
 }
    return 0;
}
