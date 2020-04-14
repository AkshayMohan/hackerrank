void miniMaxSum(int arr_count, int* arr) {

    long int
        maxValue,
        minValue,
        sum = 0
    ;
    sum = maxValue = minValue = arr[--arr_count];
    while(--arr_count >= 0) {

        sum += arr[arr_count];
        if(arr[arr_count] > maxValue)
            maxValue = arr[arr_count];
        else if(arr[arr_count] < minValue)
            minValue = arr[arr_count];
    }
    printf("%ld %ld", sum - maxValue, sum - minValue); 
}
