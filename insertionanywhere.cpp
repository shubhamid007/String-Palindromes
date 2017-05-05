#include<bits/stdc++.h>
using namespace std;

int no_of_insertion(char str[],int l,int u){
	
	if(l>u)
	return -1;
	if(l==u)
	return 0;
	if(l==u-1)
	return ((str[l]==str[u])?0:1);
	else
	return (str[l]==str[u])?no_of_insertion(str,l+1,u-1):min(no_of_insertion(str,l,u-1),no_of_insertion(str,l+1,u))+1;
	
}

int main(){
	
	int t;
     scanf("%d",&t);
	char s[100000];
	while(t--){
	scanf("%s",s);
	int count=no_of_insertion(s,0,strlen(s)-1);
	printf("%d\n",count);
}
	return 0;
}
