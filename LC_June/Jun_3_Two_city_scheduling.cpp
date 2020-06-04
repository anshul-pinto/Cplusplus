class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        /*
        * First we calculate how much it would cost to send all to A
        * We also calculate the extra money spent on sending them to A instead of B
        * We sort the above and send the half we spent more on to B.
        */
        vector <int> extra_spent;
        int Asum = 0;
        
        for(vector<int> cost : costs)
        {
            Asum += cost[0];
            extra_spent.push_back(cost[1] - cost[0]);
        }
        sort(extra_spent.begin(), extra_spent.end());
        for(int i = 0; i<costs.size()/2; i++)
        {
            Asum+=extra_spent[i];
        }
        return Asum;
    }
};