
/**
 * Most used DS in CP
 * 1. Array/Vectors
 * 2. Set/MultiSet
 * 3. Maps / unordered Maps 
 * 4. Queue/Stack/Deque
 * 5. Priority Queue(Heap)
 * 6. Pair
 **********************
 * 7. Segment Trees
 * 8. Fenwick Trees
 * 9. DSU (Union-Find)
 ***********************
 * 10. Trie
 * 11. Ordered Set
 * 12. Sparse Table 
 * 13. Treap/Spaly/Link cut tree 
 * 
 * 
 * 
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vs;
    //C++ 11 -> Array Class in STL
    array<int,25>arr;
    //this STL array will suppoprt methods like 
    arr.empty();
    arr.size();
    vector<int> v;
    for (int i = 0; i < 10; i++){ v.push_back(i);}

    vector<int> v{1,7,4,5,2};
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<endl;
    }

    /**
     * Some times there is no buffer overflow error with vectors.
     */

     vector<int> invalid_vec{1};
     //using .at(index) is better than using operator[] like this - 
     cout<<invalid_vec.at(0)<<endl;
    
    return 0;
    /**
     * Iterator- allows traversal by pointing to an object within the container.
     * They are not same as pointers.
     */
    for (vector<int>::iterator it = v.begin(); it!= v.end(); ++it) {
        cout<< *it <<" ";
    }

    //Another way to write this is - 
    for (auto it = begin(v); it != end(v); it++)
    {
        cout<< *it << "";
    }
    //For Each loop

    for(int element: v){
        cout<< element << " ";
    }

    /**
     * Inserting / Erasing 
     * Middle of the vector - O(N)
     */
    
     vector<int> v1;
     v1.push_back(2);
     v1.push_back(3);
     v1.push_back(4);
     v.at(1) = 5; // Sets the element at idx (1) to value (4).

     //vectors start at idx - 0
    v.erase(v.begin()+1); // removes element at idx 1 
    v.erase(v.end()-1); //removes the element from the end of the list.
    v.push_back(4);                     // [2, 7, 5, 4]
    v.push_back(4);                     // [2, 7, 5, 4, 4]
    v.push_back(9);                     // [2, 7, 5, 4, 4, 9]
    v.erase(v.begin(), v.begin()+3); //erase first 3 elements. O(N).

/***
 * Strings - 
 * 
 */

 string name{}; //empty string 
 getline(cin>>ws,name); //ws - white spaces (Ignore White Spaces before exttration.
 //STATIC CAST TO AVOIF D WARNING ABOUT SIGNED /UNSIGNED CONVERSIONS
 int length {static_cast<int>(name.length())};

/**
 * C++ Pairs
 */

 // Store a collection of points on the 2D planes -  we use the dynamic array of pairs,

 vector<vector<int>> points;
 vector<array<int,2>> point2;

 //PAIRS

pair<string, int>p1 = make_pair("Testing",123);
p1.first = "pairs are mutable and can be changesd after declaring them";
pair<string,string> pair2{"Testing", "Curly braces"};
cout<< pair2.first << " "<< pair2.second<< endl;

/**
 * Sets / Maps 
 Contains no duplicates. 2 types of sets:
 unordered_set / ordered_set

 Unordered_set -  Works by hashing, assigning a unique code to every variable/object allows - insertion, deletions, searches in O(1).

 Ordered Set - Always Sorted. Insertion,deletion and searches are
 O(Log(N))
 */

 unordered_set<int>s;
 s.insert(1);
 s.insert(4);
 s.insert(2);
 s.insert(3); // [1,4,2,3]
 cout<<s.count(1)<<endl;
 s.erase(1); 
 cout<< *s.begin(); //1

for(int element :s){
    cout<<element<<" ";
}

set<int>s;
s.insert(1);
s.insert(14);
s.insert(9);
s.insert(2);



















}