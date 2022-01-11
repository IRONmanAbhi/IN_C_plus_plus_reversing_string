#include <bits/stdc++.h> 
using namespace std;
int main()
{   
    char a[50],temp;
    int i,j;
    cout<<"Enter the string: ";
    gets(a);
    for(i=0;a[i]!=0;i++);
    for(i=(i-1),j=0;j!=i;j++,i--)
    {	
    	temp=a[i];
    	a[i]=a[j];
    	a[j]=temp;
    }
    for(i=0;a[i]!='\0';i++)
    cout<<a[i];
    return 0;
}