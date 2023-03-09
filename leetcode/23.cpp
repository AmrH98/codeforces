// Runtime 17 ms Beats 95.99%
// Memory 13.9 MB Beats 25.49%

// Supposedly its O(nlogn) but got Runtime of O(n) with O(n) Memory
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        vector<int> nums;
        for(int i=0;i<lists.size(); i++){
            if(!lists[i]) continue;
            ListNode* curr = lists[i];
            while(curr){
                nums.push_back(curr->val);
                curr = curr->next;
            }
        }
        int size = nums.size();
        if(size == 0) return NULL;
        sort(nums.begin(), nums.end());
        ListNode * ans = new ListNode();
        ListNode* get = ans;
        for(int i=0;i<size-1;i++){
            ans->val = nums[i];
            ans->next = new ListNode();
            ans = ans->next;
        }
        ans->val = nums[size-1];
        return get;
    }
};
