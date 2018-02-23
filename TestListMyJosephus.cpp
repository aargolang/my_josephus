#include "TestListMyJosephus.h"

// test fucntion for ListMJ
// will eliminate N - 1 people

TestListMyJosephus::TestListMyJosephus()
{

}
TestListMyJosephus::~TestListMyJosephus()
{

}
void TestListMyJosephus::testListMJ(int N, int M)
{
	list<Person> elimSeq;
	
	// a(size of circle, period to eliminate)
	ListMyJosephus a(N,M);
	for(int i = 0; i < N; i++)
	{
		// a.printAll();
		elimSeq.push_back(a.eliminateNext());// DEBUG
	}
	// output in elimination sequence
	cout << " winner is Player#";
	elimSeq.back().print();
	cout << " \n";
}
