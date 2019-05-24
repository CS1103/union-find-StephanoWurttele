#include "UnionFind.h"

using namespace std;

int main(){
	UnionFind a(5);
	a.Union(1,4);
	a.Union(3,1);
	a.Union(2,0);
	cout<<a.Find(0)<<" "<<a.Find(1)<<" "<<a.Find(2)<<" "<<a.Find(3)<<" "<<a.Find(4)<<endl;
	a.print();
	return 0;
}
