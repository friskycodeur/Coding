// https://leetcode.com/problems/design-an-ordered-stream/

class OrderedStream {
private:
    std::vector<string> stream;
    int readIdx;
    
public:
    OrderedStream(int n) {
        stream.resize(n);
        readIdx=0;
    }
    
    vector<string> insert(int idKey, string value) {
        stream[idKey-1]=value;
        int start=readIdx;
        while(readIdx<stream.size() && !stream[readIdx].empty()){
            readIdx++;
        }
        return vector<string>(stream.begin()+start,stream.begin()+readIdx);
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */