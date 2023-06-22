#include<bits\stdc++.h>
using namespace std;
int main()
{
    list<int> myList={10, 20, 30, 40, 50};
    // myList.push_back(60);
    // myList.push_front(60);
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 3), 100);
    // myList.erase(next(myList.begin(), 2));
    replace(myList.begin(), myList.end(), 30, 100);
    for(int val:myList){
        cout<<val<<endl;
    }
   
    return 0;
}
