#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
#include<string.h>
char ip_sym[15],ip_ptr=0;
 void e_prime();
void t();
void e();
void t_prime(); 
void f();
void advance(); 
void e()
{
printf("\n\t\tE'	>TE'");
t();
e_prime();
}
void e_prime()
{
if(ip_sym[ip_ptr]=='+')
{
printf("\n\t\tE'	>+TE'");
advance(); 
t();
e_prime();
}
else
printf("\n\t\tE'	>e'");
}
void t()
{
printf("\n\t\tT'	>FT'"); f();
t_prime();
}
void t_prime()
{
if(ip_sym[ip_ptr]=='*')
{
printf("\n\t\tT	>*FT'"); advance();
f();
t_prime();
}
else
{
printf("\n\t\tT'	>e");
}
}
void f()
{
if((ip_sym[ip_ptr]=='i')||(ip_sym[ip_ptr]=='j'))
{
printf("\n\t\tF	>i"); advance();
}
else
{
if(ip_sym[ip_ptr]=='(')
{
advance(); e();
if(ip_sym[ip_ptr]==')')
{
advance();
printf("\n\t\tF	>(E)");
}
else
{
printf("\n\t\tSyntax Error"); 
getch();
exit(1);
}
}
}
}
void advance()
{
ip_ptr++;
}
void main()
{
int i;// clrscr();
printf("\n\t\tGRAMMER WITHOUT RECURSION");
 printf("\n\t\tE------>TE'\n\t\tE'/e\r\t\tT	>FT");
printf("\n\t\tT------>*FT/e\n\t\tF	>(E)/id");
printf("\n\t\tEnter the Input Symbol: "); 
gets(ip_sym);
printf("\n\t\tSequence of Production Rules");
e();
getch();
}
 
