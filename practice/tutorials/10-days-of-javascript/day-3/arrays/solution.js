function getSecondLargest(nums) {
    // Complete the function
    let largest, s_largest;
    largest = s_largest = nums[0];
    for(let i = 0; i< nums.length; i++) {

        if(nums[i] > largest) {

            s_largest = largest;
            largest = nums[i];
        } else if(nums[i] > s_largest && nums[i] !== largest) {

            s_largest = nums[i];
        }
    }
    return s_largest;
}
