/*
 * Triangle.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: ddada
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include<iostream>
using namespace std;


class Triangle {
	friend istream& operator>>(istream&,Triangle&);
	friend ostream& operator<<(ostream&,const Triangle&);
public:
	Triangle(int,int,int,int);
	bool operator==(Triangle&);
	bool operator!=(Triangle&);
	virtual ~Triangle();
	int getH() const;
	void setH(int h);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
	int getZ() const;
	void setZ(int z);

private:
	int x;
	int y;
	int z;
	int h;
};

#endif /* TRIANGLE_H_ */
