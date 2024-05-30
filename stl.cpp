 #include<bits/stdc++.h>
using namespace std;




bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second < p2.second)
        return true;
    if(p1.second > p2.second) return false; // here they will internally swap each other
    // if they are same
    if(p1.first > p2.first)
    return true;

    if(p1.first < p2.first)
    return false;

}
void explainExtra()
{
    sort(a,a+n);
    sort(v.begin(),v.end());  // for vector

    sort(a+2,a+4);  // {1,67,34,545,534} // eg if need to sort 34 to 534

    sort(a,a+n,greater<int>); // inbuilt comparator that can be applied fro sorting
                            // greater<int> is used for sorting in descending order

    // now
    // if we want to
    pair<int,int> a[]={{2,3},{4,5},{9,8}};
     // sort it according to second element but if second element is same
     // then sort it according to first element but in descending

     sort(a,a+n,comp);    // this comp is self written comparator we need to write it as bool

}

// to get permutation directly

string s="123";
sort(s.begin(),s.end()); // to get all permutations we need sorted string
do{
    cout<< s << endl;
}
while(next_permutation(s.begin(),s.end()));

//max element shortcut
int maxi= *max_element(a,a+n);








//pairs
void explainPair()
{
   pair<char,string> p={'S',"kavita"};         // pair can be of  any data type
   cout<< p.first<< " " << p.second << endl;

   pair<int,pair<int ,int>> pair2={23,{98,8}};
   cout<< pair2.first << " " << pair2.second.second <<endl;

   pair<int ,int > arr[] = {{1,2},{3,5},{0,6}};
   cout<< arr[0].second << "  " << arr[2].first;

}


//
// vectors
//


void explainVectors()
{
    //intilization of vector(dynamic size array)
    vector<int> v;     // its an empty container {}

    v.push_back(10);     // {1}       // this we are extending size of vector
    v.emplace_back(20);  // {1,2} // this is faster way to
    v.emplace_back(25);
    v.emplace_back(30);

    // vector in pairs
    vector< pair<int,int> > vec;
    vec.push_back({1,2});
    vec.emplace_back(4,54);
    vec.emplace_back(8,4);       // it assumes as pair itself without need of curly braces

  //  cout<< vec[0].first<< " " <<vec[0].second  << endl ;
   // cout<< vec[1].first << " " <<vec[1].second;

    //
    vector<int> va(5,100);          // {100,100,100,100,100}
    vector<int> vb(3);               // {0,0,0}

    //
    vector<int > v1(4,34);             // {34,34,34,34}
    vector<int> v2(v1);             // we copy content of v1 in v2
    //now if
    v2.push_back(2);                // it will increase the size of vector

// to print using iterator

// v[] ={10,20,25,30}
vector<int>::iterator kavita=v.begin();             // here iterator is accessing the address of vector
                                                    // v.begin used to access vector address of first vector element
 kavita++;
 cout<< *(kavita) << " ";                            // accessing 2nd data at second address

 kavita+=2;
 cout<<*(kavita) << endl;

//vector<int> ::iterator kavita=v.end();      //v.end used to access after last element  {10,20,25,30} <- end  v[0]=10, v[n-1]=30, v[n]=end
//vector<int> ::iterator kavita=v.rbegin();      //reverse the vector and then access begining element
//vector<int> ::iterator kavita=v.rend();           // access last element after reverse


cout<< v.back() << endl;  // print element at last

// to print whole vector
for(vector<int>::iterator kavita=v.begin(); kavita != v.end(); kavita++)
{
    cout<< *(kavita) <<" " ;
}

// auto is used when datatype is not known,it auto assign type by data itself
for(auto kavita=v.begin(); kavita != v.end();kavita++)
{
    cout<<*(kavita) << " ";
}


// to delete something
v.erase(v.begin() + 1);

for(auto kavita : v)
    cout<< kavita<< " "<<'\n';


// to delete a range   {10,20,25,30}
v.erase(v.begin() + 1,v.begin()+3);   // {10,30} [start,end); as start element is erased while last one is not

// to insert

vector<int> vv(5,100);
vv.insert(vv.begin(),300);
vv.insert(vv.begin()+1,2,500);

vector<int>::iterator it=vv.begin();

for(auto it=vv.begin();it !=vv.end();it++)
{
    cout<< *(it) << " "<<endl;
}

vector<int> copy(2,34);

vv.insert(vv.begin()+2,copy.begin(),copy.end());


for(auto it=vv.begin();it !=vv.end();it++)
{
    cout<< *(it) << " ";
}

// to reverse from any part of array
reverse(v.begin(), v.begin()+ x);
reverse(v.begin(),v.end());



cout<<endl;
cout<< vv.size()<<endl;
//{10,20}
v.pop_back();  //{10} pop out the element from back

//v1={10,20}
//v2={30,40}

v1.swap(v2); // v1={30,40} & v2={10,20}

vv.clear() ;// ereases the entire vector

cout<< vv.empty();          // checks whether vector is empty or not// empty=1 ,non-empty=0//


}


// lists
void explainList()
{
    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(3);
    // there is function to insert in front

    ls.push_front(0);            //{0,3,1}
    ls.emplace_front(-1);        //{-1,0,1,3}

    list<int>::iterator it=ls.begin();

     for(auto it=ls.begin();it !=ls.end();it++)
        cout<< *(it) << " ";

// rest functions are same as vectors
}

void explaindeque()
{
    deque<int> dq;
     dq.push_back(1);
     dq.emplace_back(3);
     ls.push_front(0);
     ls.emplace_front(-1);  {-1,0,1,3}

     // there is function  to pop also
     dq.pop_back();       // {-1,0,1}
     dq.pop_front();        // {0,1}

     dq.front();
     dq.back();
     // rest functions are same as vectors
}

void Stack()
{           //LIFO
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);  // {1,2,3,4,5}

    cout<< st.top()<<endl;   // prints the last inputted element
    st.pop();           // deletes top element

    cout<< st.top()<<endl;

    cout<< st.size();

}

void Priorityqueue()
{ //FIFO
    //max heap
    priority_queue<int> pq;

    pq.push(7);
    pq.push(6);
    pq.push(3);
    pq.push(8);
    pq.emplace(10);                 // {10,8,7,6,3};

    cout<<pq.top() << endl;

    pq.pop();

    // min heap
    priority_queue<int,vector<int>,greater<int> > pp;
    pp.push(5);
    pp.push(2);
    pp.push(8);
    pp.emplace(10);

    cout<<pp.top() << endl;

}


void explainset()
{
    // set is always sorted and unique

    set<int> st;
    st.insert(1);
    st.emplace(2);          // happens in log(N)
    st.insert(2);       // it will not store 2 again
    st.insert(4);
    st.insert(3);   // {1,2,3,4}

    //functionality of insert in  vector
    // can be used also,that only increases efficiently

    // begin(),end(),rbegin(),rend,size(),
    // empty() and swap() are same as those of above

    // {1,2,3,4,5}
    auto it = st.find(3);           // points to three address

//    auto it = st.find(6);           //as 6 is not in set it points to st.end()

    st.erase(5);        // erase 5 in // lograthimic time
//or
    st.erase(it);       // use order O(1) as direct access to address
                      // you can give element or address to erase

    int cnt = st.count(1);          // it count 1 if present else 0 as set is unique


    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);      // we can erase large number of elements together [first,last)

//    auto it = st.lower_bound(2);
//    auto it= st.upper_bound(3);
}

void Multiset()
{   //sorted but not unique
    // everything is same as set
    // only  stores duplicate element also

    multiset<int> ma;

    ma.insert(1);   //{1}
    ma.insert(1);   // {1,1}
    ma.insert(1);   //{1,1,1}

    ma.erase(1);  // erases all the 1 in set

    int count = ma.count(1); // count number of occurence

    ma.erase(ma.find(1));       // ma.find(1) points first 1  it find addres and erase only one
    ma.erase(ma.find(1),ma.find(1)+1);
// rest all functions are same
}


void unorderd_set()
{
    unordered_set<int> st;
    // lower and upper bound does not work
    // all operations are same as set
    // and not in sorted order
    // worst case is O(n)   // very rare case
    // else best and average case is of O(1);
}



void mapp()
{
    // map<key,value>  // key can be of any data type
    // eg. key = name , value = roll no.   /if name is same but roll is different/

    map<int ,int > m;
    map<int , pair<int,int>> mpp;
    map<pair< int ,int>,int > mp;


    m[1]=2 ;// it stores as {1,2}
    m.emplace(3,4);
    m.insert({6,4});
    // map stores unique keys in sorted order;

  //  |   {1,2}       |
  //  |   {3,7}       |
   // |   {6,4}       |
  //  |_______________|
    mp[{2,3}]=5;
    // to print
    for(auto it: m)
    {
        cout<< it.first<< " " << it.second << endl;
    }

    cout<< m[1]<<endl;
    cout<< m[2]<<endl;
    cout<< m[3]<<endl;

    auto it= m.find(1); // we wanted here tofind address of key value
    cout<< *(it).second<< endl;  {1,2 } // at find(1) it gives value 2

    auto it= m.find(40); // if not present then it points to m.end()

    auto it=m.lower_bound(2);
    auto it=m.upper_bound(2);

    // other function sof erase,swap,empty are same
}


void mutimap()
{

    // also store duplicate keys also
}


int main()
{
    explainPair();
    explainVectors();
    explainList();
    explaindeque();
    Stack();
    Priorityqueue();

   //set
   explainset();
   multiset()
   unorderd_set

  mapp();
return 0;
}
