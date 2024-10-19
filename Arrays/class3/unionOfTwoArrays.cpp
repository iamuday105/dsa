

// Input: arr1[] = [1, 2, 3, 4, 5], arr2[] = [1, 2, 3]
// Output: 5
// Explanation: 1, 2, 3, 4 and 5 are the elements which comes in the union setof both arrays. So count is 5



    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
     unordered_set<int> set1(arr1.begin(), arr1.end());
        unordered_set<int> set2(arr2.begin(), arr2.end());
        int count = 0;

        for (int num : set1) {
            count++;
        }
        for (int num : set2) {
            if (!set1.count(num)) {
                count++;
            }
        }

        return count;
    }