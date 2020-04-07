int solution(vector<int> &A) {
    vector<int> leftHalfSum(A.size(), 0);
    int sum = A[0];
    int ans = 0x7fffffff;
    for(int P = 1; P < A.size(); P++){
        leftHalfSum[P] = sum;
        sum += A[P];
    }
    for(int i = 1; i < leftHalfSum.size(); i++){
        ans = min(ans, abs((sum - leftHalfSum[i]) - leftHalfSum[i]));
    }
    return ans;
}
