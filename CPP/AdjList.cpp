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
 
 vector<int> AdjList[vertex];
 int u,v;
 for(int i=0;i<edge;i++)
 {
  cin>>u>>v;
  AdjList[u].push_back(v);
  AdjList[v].push_back(u);
 }
 
 for(int i=0;i<vertex;i++)
 {
  cout<<i<<"->";
  for(int j=0;j<AdjList[i].size();j++)
  {
   cout<<AdjList[i][j]<<" ";
  }
  cout<<endl;
 }
}

/*Enter no of vector: 5
Enter no of edge: 6

0 1
1 2
0 2
1 3
3 4
2 4

0->1 2 
1->0 2 3 
2->1 0 4 
3->1 4 
4->3 2 
*/
