#include "ListMyJosephus.h"

ListMyJosephus::ListMyJosephus()
{
	// make an empty playing circle
	this->N = 0;
	this->M = 0;
	this->size = 0;
}
ListMyJosephus::ListMyJosephus(int N, int M)
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
	this->position = circ.begin();
	// std::cout << "circ size is " << circ.size() << std::endl; // DEBUG
}
ListMyJosephus::~ListMyJosephus()
{
	// nope
	// clear circ list
}

// member functions
void ListMyJosephus::init(int N, int M)
{
	this->N = N;
	this->M = M;
	this->size = N;
	// make a list of size N 
	for(int i = 0; i < N; i++){
		Person temp(i);
		circ.push_back(temp);
	}
	this->position = circ.begin();
}
void ListMyJosephus::clear()
{
	// TODO implement
	//	makes the circle empty 
}
int ListMyJosephus::currentSize()
{
	return this->size;
	//	prints the number of people still playing the game (i.e., not yet eliminated) 
}
bool ListMyJosephus::isEmpty()
{
	// TODO implemet
	return circ.empty();
}
Person ListMyJosephus::eliminateNext()
{
	// eliminates next person as per the game's rule
	std::list<Person>::iterator temp;
	std::list<Person>::iterator back = circ.end();
	back--;

	for(int i = 0; i < M; i++)		// find person to eliminate 
	{ 
		// position->print();		// DEBUG
		
		if (position == back) 	// circular list
		{ 	
			this->position = circ.begin();
			// std::cout << "circle around\n"; // DEBUG
		}
		else {
			this->position++;
		}
	}

	temp = this->position;			// point temp to person to be eliminated
	if (position == back)
	{ 	
		this->position = circ.begin();
		// std::cout << "circle around\n"; // DEBUG
	}
	else {
		this->position++;
	}
	circ.erase(temp);			// remove person to be eliminated

	return *temp;
}
void ListMyJosephus::printAll()
{
	// TODO implement
	// prints the current content of circle in sequence starting from the person with the least position number
	
	for(std::list<Person>::iterator i = circ.begin(); i != circ.end();++i){
		i->print();
		cout << "-";
	}
	cout << " ";
}
