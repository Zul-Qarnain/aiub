#include<iostream>
using namespace std;
int i;
struct Person
{
	std::string name;
	std::string address;
	int age;
	void show(){
		cout<<"Person "<<i+1<<" name is: "<<name<<"\n";
		cout<<"Person "<<i+1<<" address is: "<<address<<"\n";
		cout<<"Person "<<i+1<<" age is: "<<age<<"\n";
		cout<<"\n";
	}
};
int main(void){
	Person p[3];
	for(i=0;i<3;i++){
		cout<<"Enter name for person "<<i+1<<" : ";
		cin>>p[i].name;
		cout<<"Enter address for person "<<i+1<<" : ";
		cin>>p[i].address;
		cout<<"Please enter age for person "<<i+1<<" : ";
		cin>>p[i].age;
		cout<<"\n";
	}
	for(i=0;i<3;i++){
		cout<<"INFORMATION FOR Person "<<i+1<<"\n";
		p[i].show();
		cout<<"\n";
	}
}