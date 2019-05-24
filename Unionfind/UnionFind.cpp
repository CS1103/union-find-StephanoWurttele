#include <UnionFind.h>

using namespace std;

Node::Node(int _id, int_group):id(_id),group(_group){}

UnionFind::UnionFind(int N):elements(N){
	for(int i=0;i<N;i++){
		Nodes.pushback(new Node(i,i));
	}
}
bool UnionFind::Find(int a){
	int temproot=Nodes[a].group;
	if (a<elements){
		if(a!=Nodes[a].group){
			temproot=Find(Nodes[a].group());
		}
		return temproot;
		}
	}
	else{
		cout<<"Not in
		return false;
	}
}

void UnionFind::Union(int a, int b){
	if (a<N & b<N){
		Nodes[a].group=Nodes[b];
	}
}

void UnionFind::print(){
	for(int i=0;i<elements;i++){
		cout<<Nodes[i].id<<" ";
	}
	cout<<endl;
	for (int i=0;i<elements;i++){
		cout<<Nodes[i].group<<" ";
	}
}

