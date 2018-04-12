/* Este es para primer orden*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl; 

float func(float x, float y);
int main(){
	
	float y=1.0;
	float x=0.0;
	float h=0.1;
	int N=3/h;
	int i;
	float k1;
	float k2;
	float k3;
	float k4;
	

	for(i=0; i<N; i++){
		k1=func(x, y);
		k2=func(x+(h/2.0), y+((h/2.0)*k1));
		k3=func(x+(h/2.0), y+((h/2.0)*k2));
		k4=func(x+(h), y+(h*k3));
		y=y+(h/6.0)*(k1+(2.0*k2)+(2.0*k3)+k4);
		x=x+h;
		cout<<x<<" "<<y<<endl; 
}
	return 0;
}

float func(float x, float y){
	return -y;
}



