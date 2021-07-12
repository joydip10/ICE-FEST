#include<bits//stdc++.h>
using namespace std;
int main()
{
    while(1){
    char str[21];
    char str2[21];
    char str1[3] = "ay";
    int len;
    cin>>str;
    if(str[0] == '#' && str[1]=='\0'){
        return 0;
    }
    for(int i =0;str[i]!='\0';i++)len = i;
    if(str[0]=='a' || str[0]=='e' || str[0]=='i' || str[0]=='o' || str[0]=='u' || str[0]=='A' || str[0]=='E' || str[0]=='I' || str[0]=='O' || str[0]=='U')
    {
        strcat(str,str1);
        printf("%s\n",str);
    }
    else
    {
        for(int i =1,j=0;str[i]!='\0';i++,j++)
        {
            str2[j]=str[i];
        }
        str2[len] = str[0];
        str2[len+1] = '\0';
        strcat(str2,str1);
        printf("%s\n",str2);
    }
    }
   return 0;
}
