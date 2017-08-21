
int minJumps(int arr[], int n)
{
    int *jumps = new int[n];  // jumps[n-1] will hold the result
    int i, k;
 
    if (n == 0 || arr[0] == 0)
        return INT_MAX;
 
    jumps[0] = 0;
 
    
    for (i = 1; i < n; i++)
    {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++)
        {
            if (i <= k + arr[k] && jumps[k] != INT_MAX)
            {
                 jumps[i] = min(jumps[i], jumps[k] + 1);
                 break;
            }
        }
    }
    return jumps[n-1];
}
