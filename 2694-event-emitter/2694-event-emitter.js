class EventEmitter {
  m=new Map();
  subscribe(event, cb) {
      if(!this.m.has(event))
      {
          this.m.set(event,[]); 
      }
      let callBackList=this.m.get(event);  
      callBackList.push(cb);
      this.m.set(event,callBackList);
    return {
        unsubscribe: () => {
            let arr=this.m.get(event);
            let pos=arr.findIndex(cb);   
            arr.splice(pos,1);
            this.m.set(event,arr);  
        }
    };
  }

  emit(event, args = []) {
       let ar=this.m.get(event);
       if(ar==null)
       {
          ar=[];
       }
       return ar.map((fn)=>{
              return fn(...args);  
       });   
  }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */