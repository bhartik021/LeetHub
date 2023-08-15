/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function(fn) {
  const grouped = {}, length = this.length;
    for(let i = 0; i < length; i++) {
        const id = fn(this[i]);
        if(grouped[id] === undefined) grouped[id] = [];
        grouped[id].push(this[i]);
    }
    return grouped;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */