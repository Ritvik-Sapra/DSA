/*
Chaining is a collision handling technique, often used in Hashing.
Here is a code explaining how Chaining might be implemented using Cpp.

Note: This implementation is also available in Java.
*/

#include<bits/stdc++.h>
using namespace std;

struct MyHash {
    int BUCKET;
    list<int> *table;
    MyHash(int b) {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }
    void Insert (int key) {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    void Remove (int key) {
        int i = key % BUCKET;
        table[i].remove(key);
    }
    bool Search (int key) {
        int i = key % BUCKET;
        for(auto x:table[i]) {
            if(x == key)
                return true;
        }
        return false;
    }
};

int main() {
	MyHash mh(7);
	mh.Insert(10);
	mh.Insert(20);
	mh.Insert(15);
	mh.Insert(7);
    cout << mh.Search(10) << endl;
	mh.Remove(15);
	cout << mh.Search(15);
	return 0;
}
