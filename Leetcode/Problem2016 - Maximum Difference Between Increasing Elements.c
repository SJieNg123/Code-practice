int maximumDifference(int* nums, int numsSize) 
{
    if(numsSize < 2) return -1;
    int min = nums[0], max_dif = -1, dif = 0;
    for(int i=1; i< numsSize; i++)
    {
        if(nums[i] > min)
        {
            dif = nums[i] - min;
            if(dif > max_dif) max_dif = dif;
        }
        if(nums[i] < min) min = nums[i];
    }
    return max_dif;
}
