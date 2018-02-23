#include <list>
#include "TestVectorMyJosephus.h"

TestVectorMyJosephus::TestVectorMyJosephus(){

}
TestVectorMyJosephus::~TestVectorMyJosephus(){

}

// test fucntion for ListMJ
// will eliminate N - 1 people
void TestVectorMyJosephus::testVectorMJ(int N ,int M)
{
	std::list<Person> elimSeq;
	VectorMyJosephus a(N,M);
	for(int i =0; i< N; i++){
		//a.printAll();	
		elimSeq.push_back(a.eliminateNext());// DEBUG
	}
	// cout << " winner is Player# ";
	elimSeq.back().print();
	cout << " \n";
}
