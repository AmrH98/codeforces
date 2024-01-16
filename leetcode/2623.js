function memoize(fn) { // as map
  const cached = new Map();
  
  return function(...args) {
    const key = args.join(',');

    if (cached.has(key)) {
      return cached.get(key);
    }

    const result = fn(...args);
    cached.set(key, result);
    return result;

  }
}
  
/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) { // as object
    let cached = {};
    return function(...args) {
        const argsString = JSON.stringify(args);
        if(!cached.hasOwnProperty(argsString)){
            let res = fn(...args);
            cached[argsString] = res;
            return res;
        } else {
            return cached[argsString];
        }
        
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
