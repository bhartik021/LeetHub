/**
 * @param {Function} fn
 */
function memoize(fn) {
    var cache = [];
    return function(...args) {
        var key = args.join("-").toString();
        if(cache[`${key}`] != undefined) {
            return cache[`${key}`];
        }
        return cache[`${key}`] = Number(fn(...args));
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */