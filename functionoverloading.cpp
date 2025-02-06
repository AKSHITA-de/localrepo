#include<iostream>
using namespace std;

void sum(int a,int b)
{
    int c;
    c= a+b;
    cout<<"sum="<<c<<endl;
}

void sum(float a, float b)
{
    float c;
    c = a+b;
    cout<<"sum="<<c<<endl;

}

int main()
{
    sum(3,5);
    sum(4.5f,6.1f);

    return 0;
}