class Solution {
    isPalindrome(s) {
        let left = 0;
        let right = s.length - 1;

        while (left < right) {
            if (s[left] !== s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

    helper(s, ans, subset, index) {
        if (index === s.length) {
            ans.push([...subset]);
            return;
        }

        for (let end = index; end < s.length; end++) {
            let substring = s.slice(index, end + 1);
            if (this.isPalindrome(substring)) {
                subset.push(substring);
                this.helper(s, ans, subset, end + 1);
                subset.pop();
            }
        }
    }

    partition(s) {
        let ans = [];
        let subset = [];
        this.helper(s, ans, subset, 0);
        return ans;
    }
}
