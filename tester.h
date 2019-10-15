#include<math.h>

namespace test{
template<typename T>
class Vector{
	private:
	T x_pos,y_pos,z_pos;
	public:
	Vector(): x_pos(0),y_pos(0),z_pos(0){}
	Vector(T n): x_pos(n),y_pos(n),z_pos(n){}
	Vector(T xx,T yy,T zz): x_pos(xx),y_pos(yy),z_pos(zz){}
	
	//getter
	T getPos_x() {return x_pos;}
	T getPos_y() {return y_pos;}
	T getPos_z() {return z_pos;}
	
	//setter
	T setPos_x(T x){this->x_pos = x;}
	T setPos_y(T y){this->y_pos = y;}
	T setPos_z(T z){this->z_pos = z;}
	
	//length of zi vector
	T length(){ return sqrt(this->x_pos*this->x_pos+this->y_pos*this->y_pos+this->z_pos*this->z_pos); }
	
	//dot product
	T dot(Vector<T>& v){ return this->x_pos*v.x_pos+this->y_pos*v.y_pos+this->z_pos*v.z_pos; }
	
	//normalise zi vector
	Vector<T>& normalise(){
		T l = this->length();
		T invl = 1/l;
		x_pos *= invl;
		y_pos *= invl;
		z_pos *= invl;
		return *this;
	}
	
	//cross
	Vector<T> cross(Vector<T> v){
		T x = this->y_pos*v.z_pos - this->z_pos*v.y_pos;
		T y = this->x_pos*v.z_pos - this->z_pos*v.x_pos;
		T z = this->x_pos*v.y_pos - this->y_pos*v.x_pos;
		return  Vector<T>(x,y,z);
	}
	
	//zi operators
	Vector<T> operator + (const Vector<T>& v)const { return Vector<T>(this->x_pos+v.x_pos,this->y_pos+v.y_pos,this->z_pos+v.z_pos);}
	Vector<T> operator - (const Vector<T>& v)const { return Vector<T>(this->x_pos-v.x_pos,this->y_pos-v.y_pos,this->z_pos-v.z_pos);}
	Vector<T> operator / (const Vector<T>& v)const { return Vector<T>(this->x_pos/v.x_pos,this->y_pos/v.y_pos,this->z_pos/v.z_pos);}
	Vector<T> operator * (const T c) const { return Vector<T>(this->x_pos*c,this->y_pos*c,this->z_pos*c); }
};
}

typedef test::Vector<float> Vec3f;
