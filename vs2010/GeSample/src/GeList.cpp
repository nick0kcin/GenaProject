#include "GeList.h"

GeList::~GeList(void){
	clear();
}
void GeList::clear(){
	if (_first){
		node *ptr = _first;
		while(ptr){
			node *next = ptr->next;
			delete ptr;
			ptr = next;
		}
	}
}
void GeList::add(T){

}
