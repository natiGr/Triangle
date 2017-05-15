//============================================================================
// Name        : clas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Triangle.h"

int main() {
Triangle tr1;
cin>>tr1;
cout<<tr1;
Triangle tr2;
cin>>tr2;
cout<<tr2;

if(tr1==tr2){
	cout<<"is equal"<<endl;
}
if(tr1!=tr2){
	cout<<"is not equal"<<endl;
}
	return 0;
}
