#include<iostream>
using namespace std;

class student;
int *p;
int main()
{
    student p[10];
    int i,n;
    cout<<"enter size"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        p[i].get();

    }

    for(i=0;i<n;i++)
    {
        p[i].out();
    }
}