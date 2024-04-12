
// Painter partition problem

bool isPossible(int k ,vector<int> &boards,int mid){

    int painters = 1;
    int blocks = 0;

    for(int i =0;i<boards.size();i++){
        if(blocks + boards[i]<=mid){
            blocks+=boards[i];
        }
        else{
            painters++;
            if(painters>k || boards[i]>mid){
                return false;
            }
            blocks = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;

    for(int i =0;i<boards.size();i++){
        sum+=boards[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(isPossible(k,boards,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}