/**
 * @param {Object} obj
 * @return {Object}
 */
var compactObject = function(obj) {
  if(Array.isArray(obj)){
      for(let i = 0;i< obj.length;i++){
         if(obj[i] ===null|| obj[i] ===0 || obj[i]===false||obj[i]===""){
            obj.splice(i,1);
            i--;
         }
         if(typeof obj[i]==='object'){
            compactObject(obj[i]);
         }
      }
   }
   else{
      for(const key in obj){
         if(obj[key]===null||obj[key]===0||obj[key]===false||obj[key]===""){
            delete obj[key];
         }
         if(typeof obj[key]==='object'){
            compactObject(obj[key]);
         }
      }

   }
   return obj;
  
};