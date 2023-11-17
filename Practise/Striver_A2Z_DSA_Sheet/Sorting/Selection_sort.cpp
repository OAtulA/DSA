void selectionSort(vector<int>&arr) {
    for(int i=0; i< arr.size() -1; i++ ){
        int less_index=i;
        int j;
        for(j= i+1; j<arr.size(); j++){
            if(arr[less_index]>arr[j])
                less_index= j;
        }
        swap(arr[i],arr[less_index]);
    }
}