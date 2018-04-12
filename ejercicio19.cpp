/* Este es para segundo orden*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl; 
int func(int x, int y, int z);
int funz(int x, int y, int z);
int main(){
	
	float y=1.0;
	float x=0.0;
	float z=0.0;
	float h=0.1;
	int N=10/h;
	int i;
	float k1; 
	float k2;
	float k3;
	float k4;



	for(i=0; i<N; i++){
		
		k1=func(x, y, z);
		k2=func(x+(h/2.0), z, y+((h/2.0)*k1));
		k3=func(x+(h/2.0), z,  y+((h/2.0)*k2));
		k4=func(x+(h), z,  y+(h*k3));

		k11=funz(x, y, z);
		k22=funz(x+(h/2.0), z+((h/2.0)*k1), y);
		k33=funz(x+(h/2.0), z+((h/2.0)*k2), y);
		k44=funz(x+(h), z+(h*k3), y);
		
		y=y+(h/6.0)*(k1+(2.0*k2)+(2.0*k3)+k4);
		z=z+(h/6.0)*(k11+(2.0*k22)+(2.0*k33)+k44);

		x=x+h;
		cout<<x<<" "<<y<< " "<< z<<endl; 
}
	return 0;
}

int func(int x, int y, int z){
	return -y;
}

int funz(int x, int y, int z){
	return z;
}


