/* Script by Elijah Effiong Daniel
*/


#include <iostream>

using namespace std;

class Bankaccount{
private:
    int mony = 100;
public:
    void Deposit(){
        int m;
   cout<<"insert amount to deposit"; cin >> m;
   if (m==0){
    cout<<"you must put a reasonable value to deposit"<<endl;
    Deposit();
   } else {
   mony = m + mony;
    cout<<"Thanks for banking with us"<<endl;
    cout<<"Have a nice day"<<endl;
   }
    }
    int widthraw (){
    int n;
    cout<<"insert amount to remove from account"<<endl; cin >> n;
    if (n>mony){

    cout<<"you do not have that kind of cash in your account"<<endl;
   widthraw();
   } else {
   mony = mony - n;
    cout<<"Thanks for banking with us"<<endl;
    cout<<"Have a nice day"<<endl;
   }
    }
    int activity (){
    string amount; // the
    cout<<"1 : Deposit"<<endl;
    cout<<"2 : remove"<<endl;
    cin>>amount;
if (amount=="1"){
    Deposit();
    accountbalance();
    activity();
}
if (amount=="2"){
    widthraw();
    accountbalance();
    activity();

    }
    }
    int accountbalance(){
        if (mony<100000){
    cout<<"Your remaining account balance is : "<<"N"<<mony<<endl;
    } else if (mony>=1000000){
    cout<<"Your remaining account balance is : "<<"N"<<mony<<"million"<<endl;
    }
    }
};

class Birthdate {
public :
int bm;
int by;
int bd;


birthday(){
    cout <<"Please input your birth day"<<endl; cin>> bd;
if (bd>31||bd<1){
    cout<<"invalid input, you no get sense?."<<endl;
    birthday();
    }
}
birthmonth(){
cout <<"Please input your birth month"<<endl; cin>>bm;
if (bm>12||bm<1){
    cout<<"invalid input"<<endl;
birthmonth();
}
}
birthyear(){
cout <<"Please input your birth year"<<endl; cin>>by;
if (by>2018||by<1890){
    cout<<"invalid input"<<endl;
    birthyear();
}
}
Date(){

cout<<"born on :"<<bd<<" / "<<bm<<" / "<<by<<endl;
}
};

int main (){
Bankaccount opp;
Birthdate bd;
string name;
cout<<"What is your name?"<<endl; cin>>name;
bd.birthday();
bd.birthmonth();
bd.birthyear();

cout<<"Welcome "<<name<<endl;
bd.Date();
opp.accountbalance();
cout<<"what do you want to do "<<name<<"?"<<endl;
opp.activity();
return 0;
}
