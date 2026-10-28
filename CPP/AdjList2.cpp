//Adjency List for directed weighted graph
#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int vertex,edge;
 cout<<"Enter no of vector: ";
 cin>>vertex;
 cout<<endl<<"Enter no of edge: ";
 cin>> edge;
 
 vector<pair<int,int>> AdjList[vertex];
 int u,v,weight;
 for(int i=0;i<edge;i++)
 {
  cin>>u>>v>>weight;
  AdjList[u].push_back(make_pair(v,weight))             ;
 }
 
 for(int i=0;i<vertex;i++)
 {
  cout<<i<<"->";
  for(int j=0;j<AdjList[i].size();j++)
  {
   cout << "(" << AdjList[i][j].first 
     << "," << AdjList[i][j].second << ") ";
  }
  cout<<endl;
 }
}


/*
Enter no of vector: 4
Enter no of edge: 4

0 1 10
0 2 20
1 3 30
2 3 40


0->(1,10) (2,20) 
1->(3,30) 
2->(3,40) 
3->
