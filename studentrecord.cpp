#include<iostream>
using namespace std;

class student
{
    private: char name[10];
             int roll;
    public:
    void get()
    {
        cout<<"enter name and roll"<<endl;
        cin>>name>>roll;
    }
    void out()
    {
        cout<<"name="<<name<<endl;
        cout<<"roll="<<roll<<endl;
    }
};

int main(){
    student p;
    p.get();
    p.out();
    cout<<"size of subject="<<sizeof(student)<<endl;

    return 0;
}