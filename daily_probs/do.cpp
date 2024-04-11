// // #include <bits/stdc++.h>

// // using namespace std;
 

// // int lengthOfLIS(vector<int>& nums)
// // {
 

// //     // Binary search approach

// //     int n = nums.size();

// //     vector<int> ans;
 

// //     // Initialize the answer vector with the

// //     // first element of nums

// //     ans.push_back(nums[0]);
 

// //     for (int i = 1; i < n; i++) {

// //         if (nums[i] > ans.back()) {
 

// //             // If the current number is greater

// //             // than the last element of the answer

// //             // vector, it means we have found a

// //             // longer increasing subsequence.

// //             // Hence, we append the current number

// //             // to the answer vector.

// //             ans.push_back(nums[i]);

// //         }

// //         else {
 

// //             // If the current number is not

// //             // greater than the last element of

// //             // the answer vector, we perform

// //             // a binary search to find the smallest

// //             // element in the answer vector that

// //             // is greater than or equal to the

// //             // current number.
 

// //             // The lower_bound function returns

// //             // an iterator pointing to the first

// //             // element that is not less than

// //             // the current number.

// //             int low = lower_bound(ans.begin(), ans.end(),

// //                                   nums[i])

// //                       - ans.begin();
 

// //             // We update the element at the

// //             // found position with the current number.

// //             // By doing this, we are maintaining

// //             // a sorted order in the answer vector.

// //             ans[low] = nums[i];

// //         }

// //     }
 

// //     // The length of the answer vector

// //     // represents the length of the

// //     // longest increasing subsequence.

// //     return ans.size();
// // }
 
// // // Driver program to test above function

// // int main()
// // {

// //     vector<int> nums = { 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5 , 13, 3, 11, 7, 15 };

// //     // Function call

// //     printf("Length of LIS is %d\n", lengthOfLIS(nums));

// //     return 0;
// // }


// def lengthOfLIS(nums):
//     # Binary search approach

//     n = len(nums)
//     ans = []

//     # Initialize the answer list with the first element of nums
//     ans.append(nums[0])

//     for i in range(1, n):
//         if nums[i] > ans[-1]:
//             # If the current number is greater than the last element of the answer list,
//             # it means we have found a longer increasing subsequence.
//             # Hence, we append the current number to the answer list.
//             ans.append(nums[i])
//         else:
//             # If the current number is not greater than the last element of the answer list,
//             # we perform a binary search to find the smallest element in the answer list
//             # that is greater than or equal to the current number.
//             # The bisect.bisect_left function returns an index pointing to the first element
//             # that is not less than the current number.
//             low = bisect.bisect_left(ans, nums[i])

//             # We update the element at the found position with the current number.
//             # By doing this, we are maintaining a sorted order in the answer list.
//             ans[low] = nums[i]

//     # The length of the answer list represents the length of the longest increasing subsequence.
//     return len(ans)

// # Driver program to test above function
// if __name__ == "__main__":
//     nums = [10, 22, 9, 33, 21, 50, 41, 60]
//     # Function call
//     print("Length of LIS is", lengthOfLIS(nums))




#include <bits/stdc++.h>

using namespace std;
 

int lengthOfLIS(vector<int>& nums)
{
 

    // Binary search approach

    int n = nums.size();

    vector<int> ans;
 

    // Initialize the answer vector with the

    // first element of nums

    ans.push_back(nums[0]);
 

    for (int i = 1; i < n; i++) {

        if (nums[i] > ans.back()) {
 

            // If the current number is greater

            // than the last element of the answer

            // vector, it means we have found a

            // longer increasing subsequence.

            // Hence, we append the current number

            // to the answer vector.

            ans.push_back(nums[i]);

        }

        else {
 

            // If the current number is not

            // greater than the last element of

            // the answer vector, we perform

            // a binary search to find the smallest

            // element in the answer vector that

            // is greater than or equal to the

            // current number.
 

            // The lower_bound function returns

            // an iterator pointing to the first

            // element that is not less than

            // the current number.

            int low = lower_bound(ans.begin(), ans.end(),

                                  nums[i])

                      - ans.begin();
 

            // We update the element at the

            // found position with the current number.

            // By doing this, we are maintaining

            // a sorted order in the answer vector.

            ans[low] = nums[i];

        }

    }
 

    // The length of the answer vector

    // represents the length of the

    // longest increasing subsequence.

    return ans.size();
}
 
// Driver program to test above function

int main()
{

    vector<int> nums = { 10, 22, 9, 33, 21, 50, 41, 60 };

    // Function call

    printf("Length of LIS is %d\n", lengthOfLIS(nums));

    return 0;
}