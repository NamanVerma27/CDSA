#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals) {
    // Sort intervals based on the start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    ans.push_back(intervals[0]); // Initialize the merged intervals with the first interval

    int j=0; // Index for the last merged interval
    for(int i=1; i<intervals.size(); i++) {
        if (ans[j][1]>=intervals[i][0]) {   // If the current interval overlaps with the last merged interval
            ans[j][1]=max(ans[j][1], intervals[i][1]);  // Merge the current interval into the last merged interval
        }
        else{
            // If there is no overlap, add the current interval as a new interval
            ans.push_back(intervals[i]);
            j++;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> intervals={{1, 4}, {2, 3}, {5, 8}, {6, 9}};  // Vector intervals initialized as given in the question

    vector<vector<int>> ans=merge(intervals); // Vector ans will get the resultant matrix

    // Print the resultant matrix
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i][0] <<" "<<ans[i][1]<<endl;
    }

    return 0;
}