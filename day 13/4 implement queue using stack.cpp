
class MyQueue {
public:
   
    stack<int> input, output;
    MyQueue() {
            
    }
   
    void push(int x) {
        input.push(x);
    }
  
    int pop() {
        int e; 
      
        if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        e = output.top();
        output.pop();
        return e;
    }
    
 
    int peek() {
       
        if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
 
    bool empty() {
        return input.empty() && output.empty();
    }
};
