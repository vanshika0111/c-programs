#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,len,vowel,cons;

	printf("Input string:\n");
	gets(str);
	vowel=0;
	cons=0;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
	 if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
	 {
	  vowel++;
	 }
	 else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
	 {
	  cons++;
	 }
	}
	printf("\n the total number of vowels in the string is : %d\n",vowel);
	printf("\n the total number of consonant in the string is : %d \n\n",cons);
	return 0;
}