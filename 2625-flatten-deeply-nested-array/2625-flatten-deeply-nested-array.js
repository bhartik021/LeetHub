/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
  if (n === 0) {
        return arr;
    }
    
    let answer = [];
    
    arr.forEach(element => {
        if (n > 0 && Array.isArray(element)) {
            answer.push(...flat(element, n - 1));
        } else {
            answer.push(element);
        }
    });
    
    return answer;  
};