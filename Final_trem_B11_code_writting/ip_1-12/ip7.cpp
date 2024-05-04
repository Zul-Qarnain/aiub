#include<iostream>
using namespace std;
float convt;
struct Time
{
	int hour,min;
	float sec;
	void show(){
		cout<<hour<<"hour, "<<min<<" min,"<<sec<<"sec";
	}
};
int main(void){
	Time t;
	cout<<"Enter the time in seconds for conversion: ";
	cin>>convt;
	t.hour=convt/3600;
	convt=(float(convt)/3600)-t.hour;
	t.min = convt*60;
	convt = (float(convt)*60)-t.min;
	t.sec=(convt*60);
	cout<<"conversion is compeleted\n";
	cout<<"\n";
	cout<<"Showing result\n";
	t.show();
}