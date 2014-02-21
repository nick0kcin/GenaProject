#include "GeList.h"

GeList::~GeList(void)
{  
	clear();
}
void GeList::clear()
{
	if (_first) {
	node *ptr = _first;
	while (ptr){
		node *next = ptr->next;
		delete ptr;
		ptr = next; 
	}
	}
}

void GeList::add(T new_one)
{
	if (_first==0)
   {    _first = new node;
		_first->data=new_one;
		_first->next = 0; 
	}
	else 
	{   node *new_str = new node;
		new_str->data = new_one;
	    new_str->next = 0; 
		
		node *p = _first;
		while (p->next)  p=p->next;
		
		p->next = new_str;
    };
}

void GeList::rewind()
{
	_current=_first;
}

void GeList::next()
{
	_current = _current->next;
}
T GeList::getData()
{ T new_ob;
new_ob = _current->data;
return new_ob;
}
bool GeList::canMove()
{
	if (_current->next) return true;
	return false;
}