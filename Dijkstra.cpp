#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>
#include <deque>
#include <iterator>
#include <string>


using namespace std;

string Dijkstra(vector<vector<int> > arr, int start, int end){
 string path;
 int pathlen = 0;
 map <int,int> vis;
 for (int k = 0; k < end+1; k++)
 {
     vis.insert(pair<int,int>(k,0));
 }

 int len  = arr[0].size();
 cout << len << " arr[0].size() ";
 deque<pair<int,int> >mydeque;
 mydeque.push_back(make_pair(pathlen,start));
 int min_compare = 9999999;
 while(!mydeque.empty())
 {

    int path = mydeque.front().first;
    int curr  = mydeque.front().second;
    cout << " node b4 popping " << mydeque.front().second << endl;
    mydeque.pop_front();
    cout << "path covered till " << mydeque.front().first << " current node  " << curr << endl;
    if (vis[curr] == 0)
    {
      cout << " node which popped eligible -------------------------------------------------  -----------"    << curr << endl;
      vis[curr] = 1;
      cout << "MAP" << endl;
      for(auto elem : vis)
      {
         std::cout << elem.first << " " << elem.second << " " << "\n";
      }
      if (curr == end){
        string ans  = to_string(path);
        return ans;
      }
      for (int k = 0; k < len; k++)
      {
        if (arr[curr][k] != -99 && vis[k] == 0)

        {
            cout << "visk" << vis[k] << endl;
            int edgelen = arr[curr][k];

              cout << "adding node " << k << endl;
              mydeque.push_back(make_pair(edgelen+path ,k));

        }
      }
      sort(mydeque.begin(),mydeque.end());
      cout << "mydeque" << endl;
      for(auto elem : mydeque)
      {
         std::cout << elem.first << " " << elem.second << " " << "\n";
      }
    }
 }
return "voil";
}

int main(){
  int nodes;
  int edges;
  cin >> nodes;
  cin >> edges;
  cout << "edges" << edges << endl;
  cout << "nodes" << nodes << endl;
  //vector < vector<pair<int,int> > > myvecofvec(n);
  vector < vector <int> > arr;
  arr.resize(nodes,vector<int>(nodes, -99));

  cout << "b4" << endl;

  for (int i =0; i < nodes ; i++)
  {
     for (int j =0; j < nodes; j++)
     {
        cout << arr[i][j] << " ";
     }
     cout << endl;
  }
  cout << endl;


  for (int j = 0 ; j < edges; j++)
  {
    int f,s,dist;
    cin >> f >> s >> dist;
    arr[f-1][s-1] = dist;
    arr[s-1][f-1] = dist;
  }

  for (int i =0; i < nodes ; i++)
  {
     for (int j =0; j < nodes; j++)
     {
        cout << arr[i][j] << " ";
     }
     cout << endl;
  }
  cout << endl;
  string s = Dijkstra (arr,0,nodes-1);
  cout << "ANS " << s ;

  return 0;
}

