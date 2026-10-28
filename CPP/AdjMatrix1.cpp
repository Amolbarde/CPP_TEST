
/* Undirected weight graph*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int edge,vertex;
 cout<<"Enter no of vector: ";
 cin>>vertex;
 cout<<endl<<"Enter no of edge: ";
 cin>> edge;
 vector<vector<int>> AdjMat(vertex,vector<int>(vertex,0));
 int u,v,weight;
 for(int i = 0;i<edge;i++)
 {
  cin>>u>>v>>weight;
  AdjMat[u][v] = weight;
  AdjMat[v][u]= weight;
 } 
 
 // print
 for(int i = 0;i<vertex;i++)
 {
  for(int j = 0;j<vertex;j++)
  {
   cout<<AdjMat[i][j]<<" ";
  }
  cout<<endl;
 }
}



/*
Enter no of vector: 5

Enter no of edge: 6
0 1 4
0 2 10
1 2 5
1 3 8
3 4 4
2 4 11

0  4  10  0  0 
4  0  5   8  0 
10 5  0   0  11 
0  8  0   0  4 
0  0  11  4  0 
*/
