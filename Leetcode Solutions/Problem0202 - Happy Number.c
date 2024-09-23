bool isHappy(int n) {
    if(n == 1 || n == 7) return true;
    else if(n < 10) return false;

    int sq = 0, sum = 0;
    while(n != 0)
    {
        sq = n % 10;
        sum = sum + (sq * sq);
        n = n / 10;
    }

    return isHappy(sum);
}
