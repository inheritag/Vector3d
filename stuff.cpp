#include<cstdlib>
#include<cstdio>
#include <iomanip>
#include <cmath>
#include "tester.h"

int main(){
	Vec3f v1(1.0,0.0,0.0),v2(0.0,1.0,0.0);
	
	v1 = v1.cross(v2);
	printf("x coord is %f, y coord is %f and z coord is %f \n",v1.getPos_x(),v1.getPos_y(),v1.getPos_z());
	printf("%d",sizeof(int));
}
