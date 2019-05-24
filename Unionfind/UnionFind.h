#include <iostream>
#include <stack>

struct Node(){
	int id;
	int group;
	Node(int _id,int _group);
}

class UnionFind{
	protected:
	int elements;
	vector<Node> Nodes;
	public:
	UnionFind(int N);
	void Union(int a, int b);
	bool Find(int a, int b);
	void print();
}


