var groupAnagrams = function(strs) {
    let ans = [];
    let maps = new Map();
    for(let i = 0; i < strs.length; i++) {
        let ana = strs[i].split('').sort().join('');
        if(!maps.has(ana)) maps.set(ana, []);
        maps.get(ana).push(strs[i]);    
    }
    for (const [key, value] of maps) {
        ans.push(value);
    }
    return ans;
};
