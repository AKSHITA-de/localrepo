#include<iostream>
using namespace std;
class sum {
private:int a,b,c;
public:

void get()
{
cout<<"enter two no :"<<endl;
cin>>a>>b;
}

void call()
{
    c = a+b;

}

void out()
{
    cout<<"sum="<<c<<endl;

}
};
int main(){
    sum p;
    p.get();
    p.call();
    p.out();
}

