#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct Node{
	int id;
	int group;
	Node(int _id,int _group);
};

class UnionFind{
	protected:
	int elements;
	vector<Node*> Nodes;
	public:
	UnionFind(int N);
	void Union(int a, int b);
	int Find(int a);
	void print();
};


