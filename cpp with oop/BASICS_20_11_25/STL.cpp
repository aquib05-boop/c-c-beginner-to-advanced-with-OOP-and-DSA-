#include<bits/stdc++.h>
using namespace std;
void print(){
    cout<<"Aquib";
}

void explainPairs(){
    pair<int, int> p1={1,2};
    cout<<p1.first;

    pair<int, pair<int, int>> p2={1,{9,3}};
    cout<<p2.second.first;    
}

void explainVector(){
    // similar to arrays, but
    //container dynamic in nature
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;
    vec.push_back({1,2});
    // emplace back directly assumes that they are pair
    // in push back we manually do it
    vec.emplace_back(1,2);

    vector<int> v{5, 100}; //{100,100,100,100,100}

    vector<int> v(5); //we can however increase the size as well(push_back etc)

    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it=v.begin();
    // iterator points to the memory address......it->first ele of v
    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end(); //points to memory location right after end 
    // rarely  used
    vector<int>::reverse_iterator it= v.rend(); //points memory just before first ele
    vector<int>::reverse_iterator it= v.rbegin(); //points memory to the last ele
    
    cout<<v.back()<<" "; //points the rear most ele

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    
    for(auto it: v){
        cout<< it<< " ";
    } //automatically gets the dtype

    // DELETION
    v.erase(v.begin()+1);
    // erase in range
    v.erase(v.begin()+2, v.begin()+4); //end isnt included but start is.
    
    // INSERT
    vector<int>v(2,100);
    v.insert(v.begin(), 100);
    v.insert(v.begin()+1, 2, 10); //inserts after 1st elem, 10,  2 times

    vector<int>copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end()); //copies entire vector(copy) in v
    
    cout<<v.size();

    // 10,20
    v.pop_back(); //{10}; //pops the rear_most ele

    v1.swap(v2); //swaps v1 & v2

    v.clear(); //erases the entire vector

    cout<<v.empty(); //checks if vector is empty or not, returns t/f
}

void explainList(){
    //dynamic container //front operations included
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(3); //{2,3}

    // in vector insert func is used //which is costly

    ls.push_front(6); //{6,2,3}
    ls.emplace_front(5); //{5, 6, 2, 3}

    // rest funcn are the same as vector
}

void explainDeque(){
    // dynamic container
    deque<int> dq;
    // exactly similar to list and vector
}

void explainStack(){
    // LIFO
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(4); // 4 , 3 , 1
    st.emplace(0); // 4 , 3 , 1 , 0
    st.pop(); //3, 1, 0

    st.top(); //3
    st.size(); // 3 ele
    st.empty(); //FALSE

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue(){
    // FIFO 
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4); //{2 3 4}
    q.emplace(5); //{2 3 4 5}
    q.back()+=5; //{2 3 4 10}
}

void explainPriorityQueue(){
    // MAX HEAP
    priority_queue<int>pq;
    pq.push(5); //5
    pq.push(2); //5 2
    pq.push(8); //8 5 2
    pq.push(10); //10 8 5 2

    cout<<pq.top(); //10

    //Pop = Push->log (n)
    // top-> O(1)


    pq.pop(); //8 5 2
    
    //MINIMUM HEAP
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //5
    pq.push(2); //2 5 
    pq.push(8); //2 5 8
    pq.emplace(10); //2 5 8 10
    
    cout<< pq.top(); //prints 2
}

void explainSet(){
    // Sorted && Unique
    set<int>st;
    st.insert(2);
    st.insert(6);
    st.insert(1); //{1 2 6}

    // functionality of insert in vector can 
    // be used as well, that only increases efficiency

    // begin(), end(), rbegin...etc other funcn are the same

    auto it = st.find(2); 
    auto it = st.find(3); //as 3 isnt there , it points to the address right after end

    st.erase(2); //erases 2 in logarithmic time

    int cnt = st.count(1); // as set onbly stores unique ele, it returns either 1 or 2

    //{1, 2 ,3, 4 , 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); //after erase{1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
    // everything happend in log(N) timing
}

void explainMultiset(){
    // everything is same a set
    // only stores duplicate elements as well
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);//{1, 1, 1}

    ms.erase(1); //all 1's erased

    int cnt = ms.count(1);

    // only a single 1 is erased
    ms.erase(ms.find(1)); //find points to the iterator

    ms.erase(ms.find(1), ms.find(1)++); //ms.find(1)+2 ->remains {1}

    // rest all functions are smae
}

void explainSeet(){
    unordered_set<int> st;
    // it'll just have unique ele, but unsorted
    // all operations are same, except lower_bound & upper_bound

    // T.C->O(1) mostly
    // once in a blue moon->O(N);
}

void explainMap(){
    // container which stores anything thing wrt {key, value} 
        // key->any dtype // value->anything

    // map stores unique keys in sorted order
    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2; //{1, 2}
    mpp.emplace(3,1); //{3, 1}
    mpp.insert({2,4}); //{2, 4}
    // [{1,2}, {2,4}, {3,1}]

    mpp2[{2,3}] =10; //{{2,3}, 10}

    for(auto it: mpp){
        cout<< it.first <<" "<< it.second <<endl;
    } //->1 2 then 2 4 then 3 1..

    cout<<mpp[1]; //->2
    cout<<mpp[5]; //->0 / NULL

    auto it = mpp.find(3);
    cout<< (*it).second; //it points to {3, 1},, then we dereference it to access value

    auto it = mpp.find(5); //5 not there, points to mpp.end()

    auto it = mpp.lower_bound(2);
    auto it = mpp.lower_bound(3);

    //erase, swap, size, empty are same as above
}

void multiMap(){
    // everything same as amap. only it can store multiple keys
    // only mpp[key] cannot be used
}

void explainUnorderedMap(){
    // unique keys but wont be sorted
    // maps works in log(N) time
    // it works in O(1) time in most case
}


// ALGORITHM

bool comp(pair<int, int>p1 ,pair<int, int>p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false; //if false, it internally swaps
        if(p1.second = p2.second){
            if(p1.first>p2.first) return true;
            else return false;
        }
    }

void explainExtra(){

    // sort(a, a+n);
    // sort(v.begin(), v.end());
    // sort(a, a+n, greater<int>); //it sorts in descending order
// greater<int> -> inbuilt comparitor ..// instead we can use our own method of sorting

    pair<int, int> a[]={{1,2}, {2,5}, {3,4}};
    // sort as per second no. 
    // or as per the first order

    // sort(a, a+n, comp); comp->boolean 
   
    int num = 7; //1 1 1 
    int cnt = __builtin_popcount(num); //how many 1s are there (returns no. of setbits)

    long long num = 9364921908;
    int cnt = __builtin_popcountll(num);


    string s = "123";
    sort(s.begin(), s.end());
    // if we wish to print all the permutations, its important to start from sorted one
    do{
        cout<< s <<endl; //123, 231, 132......
    }while(next_permutation(s.begin(), s.end()));
    // when no more permutations are there, it returns false

    int max1 = *max_element(s.begin(), s.end()); //max ele gives the address,,,,,*gives the value
    int max1 = *min_element(s.begin(), s.end()); 
}
int main(){
    print();
    
    return 0;
}