int solution(vector<int> &A) {
    vector<bool> exist(1000005, false);
    int ans = 1;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] > 0){
            exist[A[i]] = true;
        }
    }
    for(int i = 1; i < A.size()+2; i++){
        if(!exist[i]){
            ans = i;
            break;
        }
    }
    
    return ans;
}
