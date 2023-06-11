#include<iostream>

int a[] = {10,9,8,7,6,5};
//Merge Fnction
void merge(int l,int m,int r)
{
    int i =l, j = m+1,k = l,temp[5];
    while(i<=m && j<=r)
    {
        if(a[i]<=a[j])
        {
            temp[k] = a[i];
            i++; k++;
        }

        else{
            temp[k] = a[j];
            k++; j++;
        }
    }

    while(i<=m)
    {
        temp[k] = a[i];
        i++; k++;
    }

    while(j<=r)
    {
        temp[k] = a[j];
         k++; j++;
    }
    for(int c = l;c<=r;c++)
    {
        a[c] = temp[c];
    }
        
}
//Merge Sort
void merge_sort(int l,int r)
{
    int m;
    if(l<r)
    {
        m =  (l+r)/2;
        merge_sort(l,m);
        merge_sort(m+1,r);
        merge(l,m,r);
    }
}

int main()
{
    //Merge Functions
    merge_sort(0,5);
    //After Merge
    for(int i = 0; i <5;i++)
    {
        std::cout<<a[i]<<std::endl;
    }
}
