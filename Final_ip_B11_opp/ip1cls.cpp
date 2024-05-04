#include<iostream>
using namespace std;
class Student{
	private:
		int roll_no;
	public:
		std::string name;
		Student(std::string n,int roll){
			name=n;
			roll_no = roll;
			cout<<"Name: "<<n<<" Roll NO: "<<roll;
		}
};
int main(void){
	Student s("John",2);
}