#include<bits/stdc++.h>
using namespace std;




bool helper(int x , int y , int n , vector<vector<int>>&maze, vector<vector<int>>&soln){
	     
	      // boundary case 
	      if(x == n - 1  && y == n - 1 && maze[x][y] == 1){
	      	  sol[x][y] = 1;
	      	  return true;
	      }

          // now lets check if we can go to (x , y) for all cases 
          
          if(
              (x >= 0 && x<n) && (y >= 0 && y < n) && (maze[x][y] == 1) && (soln[x][y] == 0)
          
          )
          {
          	      
          	      sol[x][y] = 1;
          	      
          	      // we will traverse in the given directions 
          	      
          	      if(helper(x + 1 , y , n , maze , soln) == true){
          	      	 return true;
          	      }
          	      
          	      if(helper(x , y + 1 , n , maze , soln) == true){
          	      	 return true;
          	      }
          	      // backtrack 
          	      sol[x][y] = 0;
          	      
          	      return false;
          	     
          	      
          	      
          }
          
          
          return false;
        


}


 




int main(){
	
	  int n;
	  cin>>n;
	  
	  vector<vector<int>>maze(n,vector<int>(n));
	  
	  for(int i = 0 ; i  < n;  ++i){
	  	 for(int j =  0 ; j < n ; ++j){
	  	 	 cin>>maze[i][j];
	  	 }
	  }
	  
	   vector<vector<int>>maze(n,vector<int>(n , 0));
	  
	  if(helper(0 , 0 , n  ,maze, soln) == false){
	  	 cout<<"No soln exists"<<endl;
	  	 
	  }
	  else
	  {
	  	 // if we get the soln then we need to print the path of the soln 
	  	 
	  	 print(soln);
	  	    
	  }
	  
	  
	  
}