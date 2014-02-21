#pragma once

typedef int T;

class GeList
{
	struct node{
		T data;
		node *next;
	};

	node *_first;
	node *_current;
public:
	GeList(void){ _first = 0; _current = 0;};
	~GeList(void);
	void add(T);
	void clear();
	unsigned  size()const;

	void rewind(); // Возвращает _current к первому элементу
	void next(); // Перемещает _current к следующему элементу
	T getData();// Получение данных, соответствующих _current 
	bool canMove();
};

