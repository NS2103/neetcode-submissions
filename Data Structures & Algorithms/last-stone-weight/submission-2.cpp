class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> maxHeap;
        for(int weight:stones)maxHeap.push(weight);

        while(maxHeap.size()>1){
           int x=maxHeap.top();
           maxHeap.pop();
           int y=maxHeap.top();
           maxHeap.pop();

           if(x>=y){
            x=x-y;
            maxHeap.push(x);
           }
        }
        return maxHeap.top();
        
    }
};
