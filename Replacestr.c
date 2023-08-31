#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
char *change(const char *str,const char *oldstr,const char *newstr)
{
char *result;
int inti,i, count=0;
int newstrlen=strlen(newstr); 
int oldstrlen=strlen(oldstr); 
for(i=0;str[i]!='\0';i++)
{
if(strstr(&str[i],oldstr)==&str[i])
{
count++; 
i+=oldstrlen-1;
}
}
result=(char *)malloc(i+count *(newstrlen-oldstrlen)+1); 
i=0;
while(*str)
{
if(strstr(str,oldstr)==str)
{
strcpy(&result[i],newstr);
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
i+=newstrlen; 
str+=oldstrlen;
}
else 
result[i++]=*str++;
}
result[i]='\0'; 
return result;
}
void main()
{
char string[]="Thejas is a Tiger"; 
char find[]="Tiger";
char tochange[]="Beast"; 
char *ans=NULL;
printf("Old string: %s \n",string); 
ans=change(string,find,tochange); 
printf("New string: %s",ans); 
free(ans);
}
