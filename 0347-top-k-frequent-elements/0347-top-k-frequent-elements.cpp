
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> frequency;
        for (int num : nums) {
            frequency[num]++;
        }

        priority_queue<pair<int, int>> maxHeap;
        for (auto it : frequency) {
            maxHeap.push({it.second, it.first});
        }

        vector<int> answer;
        for (int i = 0; i < k; i++) {
            answer.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return answer;
    }
};
