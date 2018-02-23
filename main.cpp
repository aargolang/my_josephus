// libraries
#include <ctime>
#include <iostream>
#include <string>
#include <cmath>

#include "TestListMyJosephus.h"
#include "TestVectorMyJosephus.h"

using std::cout;

int main()
{
	TestListMyJosephus a;
	TestVectorMyJosephus b;

	// start clock
	clock_t k = clock();
  	clock_t start;
   	do start = clock();
	while (start == k);

	// perform tests

	for(int i = 0; i < 30; i++){


	int n = pow(2,14);
	int m = pow(2,i);

	//*
	k = clock();
	clock_t startVector;
   	do startVector = clock();
	while (startVector == k);

	b.testVectorMJ(n,m);
	
	clock_t endVector=clock();
  	cout << "CPU elapsed time in seconds for VECTOR: " << (double)(endVector - startVector)/CLOCKS_PER_SEC <<endl;

	k = clock();
	clock_t startList;
   	do startList = clock();
	while (startList == k);

	a.testListMJ(n,m);

	clock_t endList=clock();
  	cout << "CPU elapsed time in seconds for LIST: " << (double)(endList - startList)/CLOCKS_PER_SEC <<endl;
	//*/

	cout << "N was 2^14 and M was 2^" << i << endl;
	}	

	// stop clock & report time


	return 0;
}
