#include<bits//stdc++.h>
using namespace std;

int main()
{
    while(1){
    char str[250],str1[250];
    //scanf("%[^\n]",&str);
    cin.getline(str,250);
    if(str[0]=='#' && str[0]=='\0')
    {
        return 0;
    }
    int len;
    for(int i = 0;str[i]!='\0';i++) {
        len = i;
    }
    for(int j = len,i=0; j<=0,i<len; j--,i++) {
        str1[i]=str[j];
    }
    str1[len]=str[0];
    str1[len+1]='\0';
    cout<<str1<<endl;
    }
}
