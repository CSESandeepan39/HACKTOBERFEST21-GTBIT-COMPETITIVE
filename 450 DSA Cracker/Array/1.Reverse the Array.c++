void rvereseArray(int arr[], int start, int end)
{

    if(start>=end)
        return ;
    
    int temp= arr[start];
    arr[start]= arr[end];
    arr[end]= temp;
    //applied recursion
   rvereseArray(arr, start+1, end-1);
}   
