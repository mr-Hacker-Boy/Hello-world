








































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-10-15 01:51:02	Correct	cpp	13 / 13	View
2022-10-14 14:15:31	Correct	cpp	13 / 13	View
C++ (g++ 5.4)
Average Time:
5m
Your Time:
128m



        



Custom Input
  public:
  //calling function 
  void depthfirstsearch(int V, int currentvertex,vector<bool>&visited, vector<int>&ans,vector<int>adj[])
  {
      
      if(visited[currentvertex]==true)      //if visitedvertex is true then we will return
      {
        return;
      }
      visited[currentvertex]=true;          //if not true we wll make it true
      ans.emplace_back(currentvertex);      //we will add currentvertex into our ans vector 
      //vector<int>neighbors=adj[currentvertex];
      for(int currentneighbor:adj[currentvertex])
      {
        depthfirstsearch(V,currentneighbor,visited,ans, adj);
      }
     return; 
      
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int>ans;
        vector<bool>visited(V+1, false);
        
        
        depthfirstsearch(V,0,visited,ans,adj );
        
        return ans;
    }
};
