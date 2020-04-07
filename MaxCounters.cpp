vector<int> solution(int N, vector<int> &A) {
    vector<int> cnters(N);
    int curCntMax = 0, setCntMax = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == N + 1){
            setCntMax = curCntMax;
        }else{
            cnters[A[i]-1] = max(cnters[A[i]-1], setCntMax);
            cnters[A[i]-1]++;
            curCntMax = max(cnters[A[i]-1], curCntMax);
        }
    }
    for(int i = 0; i < N; i++){
        cnters[i] = max(cnters[i], setCntMax);
    }
    //cout << setCntMax << endl;
    return cnters;
}
