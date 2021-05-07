/*
Chaining is a collision handling technique, often used in Hashing.
Here is a code explaining how Chaining might be implemented using Cpp.

Note: This implementation is also available in Java.
*/

#include <bits/stdc++.h>

using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int key)
    { // Constructor
        BUCKET = key;
        table = new list<int>[BUCKET]; // Creating hash table
    }
    void insert(int key)
    {
        int i = key % BUCKET;    // Our Hash Function
        table[i].push_back(key); // Adding element
    }
    bool search(int key)
    {
        int i = key % BUCKET;   // Hash Function
        for (auto x : table[i]) // Searching for element in the L.L. at that index
            if (x == key)
                return true;
        return false;
    }
    void remove(int key)
    {
        int i = key % BUCKET; // Hash Function
        table[i].remove(key); // Removng element
    }
    void display()
    {
        for (int i = 0; i < BUCKET; i++)
        { // Displaying all the elements
            cout << "[" << i << "]:\t";
            for (auto x : table[i])
            {
                cout << x << " -> ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int key, ip;
    char ch, choice = 'y';
    cout << "Enter the key for the BUCKET_SIZE: " << endl;
    cin >> key; // Hash table slots
    MyHash mh(key);
    do
    {
        cout << "Enter your choice: " << endl; // Choice menu
        cout << "1. Insert an element" << endl;
        cout << "2. Search for an element" << endl;
        cout << "3. Remove an element" << endl;
        cout << "4. Display the hash table" << endl;
        cin >> ch; // User choice
        switch (ch)
        {
        case '1':
            cout << "Enter the input no.: " << endl;
            cin >> ip;
            mh.insert(ip);
            cout << "Done!" << endl;
            break;
        case '2':
            cout << "Enter the no. to search: " << endl;
            cin >> ip;
            cout << mh.search(ip) << endl;
            break;
        case '3':
            cout << "Enter the no. to remove: " << endl;
            cin >> ip;
            mh.remove(ip);
            cout << "Done!" << endl;
            break;
        case '4':
            cout << "Current state of hash table: " << endl;
            mh.display();
            break;
        default:
            cout << "Please enter a valid choice" << endl;
            break;
        } // Asking if user wants to continue?
        cout << "Do you wish to continue? (y/Y)" << endl;
        cin >> choice;
    } while ((choice == 'y') || (choice == 'Y'));
    return 0;
}
