class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
    //     prev end = [i-1]+ arr[2 i-1];
    //    wait = prev end time + arr[2] - arr[1] // customers[0][0] +customers[0][1]

    int n= customers.size();
    double time_waiting = 0;
    int prev_end = 0;

    for(auto &customer:customers){
        int arrive = customer[0];
        int start_cooking = max(arrive, prev_end);
        int end_cooking = start_cooking + customer[1];
        prev_end = end_cooking;
        time_waiting+= end_cooking - arrive;
       }

        return time_waiting / n;
    }
};