int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int maximum = 0;

    for(int a = 0; a < accountsSize; a++){
        int sum = 0;
        for(int b = 0; b < *accountsColSize; b++){
            sum += accounts[a][b];
        }
        if(sum > maximum) maximum = sum;
    }
    return maximum;
}