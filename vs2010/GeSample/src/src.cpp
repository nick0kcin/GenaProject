#include "GeList.h"
#include <iostream>
int main(){
	GeList li;
	li.add(2);
	li.add(3);
	li.add(5);

	li.rewind();
	while (li.canMove()){
		if (li.getData() == 34) {}
		else{
		}
		std::cout << li.getData() <<std::endl;
		li.next();
	}

	return 0;
}