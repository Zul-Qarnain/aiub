#include<iostream>
using namespace std;
class Student{
	private:
		int roll_number;
		std::string phone_number;
		std::string address;
	public:
		std::string name;
		Student(std::string name,int roll_number,std::string phone_number,std::string address){
			this->name=name=name;
			this->roll_number=roll_number;
			this->phone_number=phone_number;
			this->address=address;
			cout<<"Name: "<<name<<" Roll NO: "<<roll_number<<" Phone Number: "<<phone_number<<" Address: "<<address<<"\n";
		}
};
int main(void){
	Student s1("Sam",1,"0198423232","c-block/oxford street,london");
	Student s2("Jhon",2,"013239439","221/baker street/london");
}