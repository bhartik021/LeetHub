/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
 let ans = new Array();
    const n = arr.length;

    for(let i=0; i<n; i+=size){
        let tmp = new Array();
        for(let j=i; j<i+size; ++j){
            if(j>=n) break;
            tmp.push(arr[j]);
        }
        ans.push(tmp);
    }
    return ans;   
};
