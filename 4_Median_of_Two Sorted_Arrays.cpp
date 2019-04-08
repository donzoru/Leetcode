class Solution {
public:
    double fkth(int A[],int la,int B[],int lb,int k){
        if(la > lb)
            return fkth(B,lb,A,la,k);
        if(la==0)
            return B[k-1];
        if(k==1)
            return A[0] < B[0] ? A[0] : B[0];
        int left = min(k/2,la) , right = k - left;
        if(A[left-1] < B[right-1])
            return fkth(A+left,la-left,B,lb,k-left);
        else if(A[left-1] > B[right-1])
            return fkth(A,la,B+right,lb-right,k-right);
        else 
            return A[left-1];
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size();
        int *A = new int[l1];
        for(int i=0;i<l1;++i) 
            A[i] = nums1[i];
        int l2 = nums2.size();
        int *B = new int[l2];
        for(int i=0;i<l2;++i) 
            B[i] = nums2[i];
        int len = l1 + l2;
        if(len & 1){
            return fkth(A,l1,B,l2,len/2+1);
        }else{
            return (fkth(A,l1,B,l2,len/2)+
                    fkth(A,l1,B,l2,len/2+1))/2.0;
            
        }
    }
};
