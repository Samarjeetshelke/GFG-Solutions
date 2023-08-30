/*

https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?leftPanelTab=0

*/


int getPivot(vector<int> &arr,int n){
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;

    }

    return s;
}
int binarysearch(vector<int> &arr,int s,int e,int sv){
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==sv){
            return mid;
        }
        if(arr[mid]>sv){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

    int pivote=getPivot(arr,n);

    if(k>=arr[pivote] && k<=arr[n-1]){
        return binarysearch(arr,pivote,n-1,k);
    }
    else{
        return binarysearch(arr,0,pivote-1,k);
    }

    

    
}
