// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     if(n%2==0)
//     printf("number is Even");
//     else
//     printf("number is odd");
// }

// #include <stdio.h>
// int main(){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);
//     if(age>=18){
//     printf("Eligible to vote");}
//     else{
//     printf(" Not Eligible to vote");
// }
// }

// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two number: ");
//     scanf("%d %d",&a,&b);
//     if(a>b)
//     printf("%d is larger no.",a);
//     else
//     printf("%d is greater ",b);
// }

#include <stdio.h>
int main()
{
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
if(ch=='A'|| ch=='E'|| ch=='I' || ch=='O' || ch=='U'||
ch=='a'|| ch=='e'|| ch=='i' || ch=='o' || ch=='u')
printf("%c is Vowel",ch);
else
printf("%c is consonant",ch);

}