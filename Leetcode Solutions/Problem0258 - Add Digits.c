// naive approach
int addDigits(int num) {
    while(num >= 10)
    {
        int sum = 0;
        while(num > 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
        num = sum;
    }
    return num;
}

// mathematical method
int addDigits(int num) {
    if(num == 0) return 0;
    else return 1 + (num - 1) % 9;
}
