#ifndef CONTAINER_H
#define CONTAINER_H
	
class Container {
	static const int MAX = 10;
	int size;
	
public:
	Container() { size = MAX; }
	int getSize();
	void fill();
	void consume(int amount);
	void show();
};


#endif // !1
