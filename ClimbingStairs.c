/*this is a function which takes the number of stairs as the input and return number of ways of climbing tha stairs 
when at most 2 step is taken at a time*/
int climbStairs(n) 
{
int times1=0,times2=0;
    static int arr[50];
    static int i=3;
    arr[1]=1;
    arr[2]=2;
    if(i>n)
    {
        return arr[n];
    }
    else
    {
        times1+=climbStairs(n-1);
        times2+=climbStairs(n-2);
    }
    arr[i++]=times1+times2;
    return (times1+times2);
}
