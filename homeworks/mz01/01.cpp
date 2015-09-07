int findmax(const int* Numbers, const int count) {
    int maxInd = 0, max = Numbers[0];
    for (int i = 0; i < count; ++i) {   
        if (max < Numbers[i]) {
            max = Numbers[i];
            maxInd = i;
        }
    } 
    return maxInd;
}
