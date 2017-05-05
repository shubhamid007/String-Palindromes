#include<bits/stdc++.h>
using namespace std;

bool palindrome(char *str){
	
	int len=strlen(str);
	char *ptr1=str;
	char *ptr2=str+len-1;
	
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

int no_of_insertion(char s[]){
	
	if(palindrome(s))
	return 0;
	
	else{
		s++;
		return 1+no_of_insertion(s);
	}
}

int main(){
	char s[100000];
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%s",s);
	int count=no_of_insertion(s);
	printf("%d\n",count);
	}
	return 0;
}
