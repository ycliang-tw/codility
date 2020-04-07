vector<int> solution(vector<int> &A, int K) {
    vector<int> ans(A);
    int size = A.size();
    if(size != 0)   K %= size;
    
    for(int i = 0; i < size; i++){
        ans[i] = A[(size - K + i)%size];
    }
    return ans;
}
