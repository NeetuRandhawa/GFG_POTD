class Solution {
	public:
		string FirstNonRepeating(string A){
		    unordered_map<char,bool>mpp;
		    list<char>q;
		    string ans = "";
		 
		    for(int i =0; i<A.size(); i++){
		        if(!mpp[A[i]]){
		            q.push_back(A[i]);
		            mpp[A[i]] = true;
		        }
		        else{
		            
		            q.remove(A[i]);
		        }
		        ans += q.empty()==true ? '#' : q.front();
		    }
		    return ans;
		}

};
