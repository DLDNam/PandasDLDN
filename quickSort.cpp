#include <bits/stdc++.h>
using namespace std;
void quicksort(int a[], int l, int r)
{
    int k=(a[l]+a[r])/2;
    int i=l;
    int j=r;
    while (i<=j)
    {
        while (a[i]>k) i++;
        while (a[j]<k) j--;
        if (i<=j) 
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if (l<j) quicksort(a,l,j);
    if (r>i) quicksort(a,i,r);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=1;i<=n;i++)
        cin>>a[i];
    quicksort(a,1,n);
    for (int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}