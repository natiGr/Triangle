/*
 * Triangle.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: ddada
 */

#include "Triangle.h"



Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

int Triangle::getH() const {
	return h;
}

void Triangle::setH(int h) {
	this->h = h;
}

int Triangle::getX() const {
	return x;
}

void Triangle::setX(int x) {
	this->x = x;
}

int Triangle::getY() const {
	return y;
}

void Triangle::setY(int y) {
	this->y = y;
}

int Triangle::getZ() const {
	return z;
}

void Triangle::setZ(int z) {
	this->z = z;
}

Triangle::Triangle(int x, int y, int z, int h) {
	setX(x);
	setY(y);
	setZ(z);
	setH(h);
}

bool Triangle::operator ==(Triangle&r) {
	if(this->x==r.x && this->y==r.y && this->z==r.z && this->h==r.h)
		return true;
	return false;
}

bool Triangle::operator !=(Triangle&right) {
	if(this->x!=right.x && this->y!=right.y && this->z!=right.z && this->h!=right.h)
		return true;
	return false;
}
istream& operator>>(istream& in,Triangle& obj){
	in.ignore(1);// ignorirahme [
	in>>obj.x;// prochetohme x
	in.ignore(1);
	in>>obj.y;
	in.ignore(1);
	in>>obj.z;
	in.ignore(1);
	in>>obj.h;
	in.ignore(1);
	return in;
}
ostream& operator<<(ostream& out,const Triangle& obj){
	out<<"{{"<<obj.getX()<<"-"<<obj.getY()<<"-"<<obj.getZ()<<"-"<<obj.getH()<<"}}"<<endl;

	return out;
}
