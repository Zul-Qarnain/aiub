#include<iostream>
class Triangle{
	int a,b,c;
	public:
		Triangle(int a,int b,int c){
			std::cout<<"Area: "<<showarea(a,b,c)<<"\n";
			std::cout<<"Perimeter: "<<showperi(a,b,c);
		}
		float showarea(int a,int b,int c){
			return(0.5*(a+b+c));
		}
		int showperi(int a,int b,int c){
			return(a+b+c);
		}
};
int main(void){
	Triangle t(3,4,6);
}
