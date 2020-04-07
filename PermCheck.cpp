int solution(vector<int> &A) {
    vector<bool> exist(A.size()+1, false);
    int ans = 1;
    for(int i = 0; i < A.size(); i++){
        if(A[i] > A.size()){
            return 0;
        }else{
            exist[A[i]] = true;
        }
    }
    for(int i = 1; i < A.size()+1; i++){
        if(!exist[i]){
            ans = 0;
        }
    }
    return ans;
}
