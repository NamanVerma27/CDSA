#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int merge(vector<vector<int>> &intervals) {
    // Sort intervals based on the start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    ans.push_back(intervals[0]); // Initialize the merged intervals with the first interval

    int count=0; //count the number of overlapping intervals
    int j=0; // Index for the last merged interval
    for(int i=1; i<intervals.size(); i++) {
        if (ans[j][1]>intervals[i][0]) {   // If the current interval overlaps with the last merged interval
            count++;
            ans[j][1]=max(ans[j][1], intervals[i][1]);  // Merge the current interval into the last merged interval
        }
        else{
            // If there is no overlap, add the current interval as a new interval
            ans.push_back(intervals[i]);
            j++;
        }
    }
    return count;
}

int main() {
    vector<vector<int>> intervals={{1, 4}, {2, 3}, {4, 5}, {6, 7}};  // Vector intervals initialized as given in the question

    int ans=merge(intervals); // ans will get the count of overlapping intervals

    // Print the resultant matrix
    cout<<"The number of overlapping intervals need to be removed are: "<<ans;

    return 0;
}