int reverse(int x){
    long sum = 0;
    while(x != 0)
    {
        int reverse = x % 10;
        sum = sum * 10 + reverse;
        x = x / 10;
    }
    if(sum > INT_MAX ||sum < INT_MIN) return 0;
    else return (int)sum; 
}
