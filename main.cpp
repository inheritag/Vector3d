#include<cstdlib>
#include<cstdio>
#include <iomanip>
#include <cmath>
#include "tester.h"

int main(){
	// initialize two vectors with 1x3 dimension.
	Vec3f v1(1.0,0.0,0.0),v2(0.0,1.0,0.0);
	
	// find v1 x v2 ( cross product of v1 with v2)
	v1 = v1.cross(v2);
	printf("After performing cross product \n");
	printf("x coord is %f, y coord is %f and z coord is %f \n",v1.getPos_x(),v1.getPos_y(),v1.getPos_z());
	//printf("%d",sizeof(int));
	
	Vec3f v3(1.0,0.0,0.0);
	Vec3f v4 = v3.normalise();
	printf("After normalizing \n");
	printf("x coord is %f, y coord is %f and z coord is %f \n",v4.getPos_x(),v4.getPos_y(),v4.getPos_z());
	
	Vec3f v5(1.0,3.0,4.0);
	Vec3f v6(3.0,-9.0,7.0);
	v5 = v5.cross(v6);
	printf("After normalizing \n");
	printf("x coord is %f, y coord is %f and z coord is %f \n",v5.getPos_x(),v5.getPos_y(),v5.getPos_z());
	
	
}
