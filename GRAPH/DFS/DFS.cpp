#include<iostream>
#include<stdio.h>
#include<string>

#define white 1
#define gray 2
#define black 3

using namespace std ;
int adj[100][100] ;
int color [100] ;
int node,edge ;

void dfsVisit(int x){
    color[x]=gray ;
    //some work
    for(int i=0;i<node;i++){
        if(adj[x][i]==1){
            if(color[i]==white){
                dfsVisit(i) ;
            }
        }
    }

    color[x]=black ;
    cout<<"color["<<x<<"] = black"<<endl ;

}
void dfs(){
    //all nodes to 1
    for (int i=0;i<node ;i++){
        color[i]= white ;
    }
    //if node = white go for visit
    for(int i= 0;i<node ; i++){
        if(color[i]==white){
            dfsVisit(i) ;
        }
    }
}
int main()
{
    freopen("input.txt","r",stdin) ;

    cin>>node ;
    cin>>edge ;

    int n1,n2 ;

    for(int i = 0 ;i<edge;i++){
            cin>>n1>>n2 ;
            adj[n1][n2]=1 ;
            adj[n2][n1]=1 ;
    }

    dfs() ;

    for(int i=0;i<node;i++){
        cout<<color[i]<<endl ;
    }

    return 0 ;

}

