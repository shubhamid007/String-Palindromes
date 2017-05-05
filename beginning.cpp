#include<bits/stdc++.h>
using namespace std;

bool palindrome(char *str,int i){
	
	int len=strlen(str);
	char *ptr1=str;
	char *ptr2=str+len-i;
	
	if(len==1)
	return true;
	
	while(ptr2>ptr1)
	{
		if(*ptr1!=*ptr2)
		return false;
		
		ptr1++;
		ptr2--;
	}
	
	return true;
}

int no_of_insertion(char s[],int i){
	
	if(palindrome(s,i))
	return 0;
	
	else{
		i++;
		return 1+no_of_insertion(s,i);
	}
}

int main(){
	char s[100000];
	int t,i;
	scanf("%d",&t);
	while(t--){
	scanf("%s",s);
	i=1;
	int count=no_of_insertion(s,i);
	printf("%d\n",count);
	}
	return 0;
}
