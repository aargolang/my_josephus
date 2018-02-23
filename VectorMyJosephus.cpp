#include "VectorMyJosephus.h"

VectorMyJosephus::VectorMyJosephus()
{
	// TODO maybe nothing
}
VectorMyJosephus::~VectorMyJosephus()
{
	// TODO maybe nothing
}
VectorMyJosephus::VectorMyJosephus(int N, int M)
{
	// TODO definitely not nothing
	this->N = N;
	this->M = M;	
	this->size = N;
	// make a list of size N 
	for(int i = 0; i < N; i++){
		Person temp(i);
		circ.push_back(temp);
		// cout << "i = " << i << std::endl; // DEBUG
		// std::cout << "circ size is " << circ.size() << std::endl; // DEBUG
	}
	// this->position = circ.begin();
	this->hotPot = 0;
	// std::cout << "circ size is " << circ.size() << std::endl; // DEBUG
}

void VectorMyJosephus::init(int N, int M)
{
	this->N = N;
	this->M = M;	
	this->size = N;
	// make a list of size N 
	for(int i = 0; i < N; i++){
		Person temp(i);
		circ.push_back(temp);
		// cout << "i = " << i << std::endl; // DEBUG
		// std::cout << "circ size is " << circ.size() << std::endl; // DEBUG
	}
	// this->position = circ.begin();
	this->hotPot = 0;
	// std::cout << "circ size is " << circ.size() << std::endl; // DEBUG
}
void VectorMyJosephus::clear()
{
	// TODO clear
}
int VectorMyJosephus::currentSize()
{
	return this->size;
}
bool VectorMyJosephus::isEmpty()
{
	return circ.empty();
}
Person VectorMyJosephus::eliminateNext()
{
	// get the next position
	hotPot = (hotPot + M) % size;

	Person toReturn = circ[hotPot];
	// remove element at index 'hotPot'
	for(int i = hotPot; i < (size-1); i++){ 		// shift elements down
		circ[i] = circ[i+1];
	}
	
	circ.pop_back();								// remove duplicate at end decrement size
	size--;

	return toReturn;
}
void VectorMyJosephus::printAll()
{
		for(std::vector<Person>::iterator i = circ.begin(); i != circ.end(); ++i){
		i->print();
		cout << "-";
	}
	cout << " ";
}	
