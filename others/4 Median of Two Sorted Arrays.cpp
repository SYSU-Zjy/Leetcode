class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int size = nums1.size()+nums2.size();
    if(size&0x1)
        return findKthNumber(nums1,nums2,0,0,size/2+1);
    else
        return (findKthNumber(nums1,nums2,0,0,size/2)+findKthNumber(nums1,nums2,0,0,size/2+1))/2.0;
    }
    
    int findKthNumber(vector<int>& a, vector<int>& b, int m, int n, int k){ //保证a的实测长度比b小 a的舍弃长度为m b的舍弃长度为n 
        if(a.size()-m>b.size()-n)
            return findKthNumber(b,a,n,m,k);
        if(a.size()-m == 0)
            return b[k+n-1];//k,m,n都是个数，可以相加，最后-1表示偏移量
        if(k == 1)
            return a[k+m-1]<b[k+n-1]?a[k+m-1]:b[k+n-1];
        //把k分成两part
        int pa = (k/2<a.size()-m)?k/2:(a.size()-m);//不存在pa为0的情况。k=1和a.size()-m=0的情况，上面的if语句已经给出。
        int pb = k-pa;//pa+pb=k
        if(a[pa+m-1]<b[pb+n-1])
            return findKthNumber(a,b,m+pa,n,k-pa);//不存在k-pa=0
        else if(a[pa+m-1]>b[pb+n-1])
            return findKthNumber(a,b,m,n+pb,k-pb);//不存在k-pb=0
        else
            return a[pa+m-1];
    }
};