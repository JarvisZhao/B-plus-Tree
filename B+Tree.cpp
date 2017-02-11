#include <iostream>
#include <cstdlib>

using namespace std;

#include "BTree.h"

int main(){
	
	int n,num;
	//n is the size of the tree
	cin>>n;
	
	BTree <int> tree(n);
	while(cin>>num){
		tree.Insert(num);
		tree.Print();
		
		
	}
}
