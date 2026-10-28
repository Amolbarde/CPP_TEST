//Adjency List for undirected unweighted graph
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
  AdjList[v].push_back(make_pair(u,weight));
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

/*Enter no of vector: 3

Enter no of edge: 3
0 1 4
0 2 1
1 2 3
0->(1,4) (2,1) 
1->(0,4) (2,3) 
2->(0,1) (1,3) 

*/
