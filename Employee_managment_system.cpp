#include<bits/stdc++.h>
using namespace std;
struct employee{
    int employeeid;
    string employeename;
    int age;
    float salary;

};
int main(){
    employee e;
    cout<<"enter the emp id";
    cin>>e.employeeid;
    cout<<"enter the emp name";
    cin>>e.employeename;
    cout<<"enter the emp Age";
    cin>>e.age;
    cout<<"enter the emp salary";
    cin>>e.salary;
    cout<<"employee detail"<<endl;
    cout<<"emp id:"<<e.employeeid<<endl;
    cout<<"emp name:"<<e.employeename<<endl;
    cout<<"emp age:"<<e.age<<endl;
    cout<<"emp salary:"<<e.salary<<endl;

}
