#include<iostream>
#include<queue>

using namespace std ;

int main()
{
    priority_queue <int> q ;
    priority_queue <string> q1 ;

    q.push(12);
    q.push(42);
    q.push(62);
    q.push(22);
    q.push(12);
    q.push(52);

    while(!q.empty()){
        int x = q.top() ;
        //cout<<q.top() ;
        cout<<x<<endl ;
        q.pop() ;
    }

    q1.push("sajib") ;
    q1.push("minhaj") ;
    q1.push("rasel") ;
    q1.push("joy") ;
    q1.push("ram") ;
    q1.push("krishna") ;

    while(!q1.empty()){
        cout<<q1.top()<<endl ;
        q1.pop() ;
    }

}

