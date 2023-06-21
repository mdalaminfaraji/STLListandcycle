#include<bits\stdc++.h>
using namespace std;
int main()
{
    //  list<int>myList(5, 100);
    // list<int>list2={1, 2, 3, 4, 5};
    // list<int>myList(list2);
    int a[5]={10, 20, 30,40, 50};
    list<int>myList(a, a+5);
    //  for(auto it=myList.begin(); it!=myList.end(); it++){
    //    cout<<*it<<endl;
    //  }
    for(int val: myList){
        cout<<val<<endl;
    }
    return 0;
}
