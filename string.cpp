#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
string a,b,choice;
int l,f;
class intro{
    public:
    intro(){
        cout<<"Experimenting With strings"<<endl;
    }
};
class funct{
    public:
    void concat(string a,string b){
                   cout<<a+b<<endl;       
    }
    void length(){
    cout<<"String1 or String2(Enter No.)"<<endl;
    int c;
    cin>>c;
    if (c==1){
    		cout<<"Length of String1="<<a.length()<<endl;
		}
		else if (c==2){
			cout<<"Length of String2="<<b.length()<<endl;
		}
		else{
			cout<<"Invalid Input"<<endl;
		}
    }
};
class process:public funct{
    public:
    unordered_map<string,int>f={{"Concat",1},{"Length",2}};
    void proc(unordered_map<string,int>f){
        if(f.find(choice)!=f.end()){
        switch(f[choice]){
            case 1:
            concat(a,b);
            break;
            case 2:
            length();
        }
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
}
};

class store{
    public:
    void input(){
        cout<<"Enter a random string1 = "<<endl;
        cin>>a;
        cout<<"Enter a random string2 = "<<endl;
        cin>>b;
        cout<<"Choose Parameter:\n Concat\n Length\n "<<endl;
        cin>>choice;
    
    }
};

int main(){
    intro i;
    store s;
    for(int i;i<3;i++){
    s.input();
    process p;
    unordered_map<string,int>f={{"Concat",1},{"Length",2}};
    p.proc(f);}
    return 0;
};

