class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0; // If the vector is empty, there are no duplicates to remove.
        }
        
        int idx = 0; // Pointer for the current position in the modified vector.
        
        // Iterate through the vector starting from the second element.
        for (int i = 1; i < nums.size(); i++)
        {
            // If the current element is different from the previous element, 
            // add it to the modified vector at the correct position.
            if (nums[i] != nums[idx]) {
                idx++;
                nums[idx] = nums[i];
            }
        }
        
        // Return the new size of the vector after removing duplicates.
        return idx + 1;
    }
};
