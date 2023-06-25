#include<stdio.h> 
#include<conio.h>
#include<ctype.h> 
#include<string.h> 
#include<graphics.h> 
#include<math.h> 
#include<process.h> 
int minx=1000,miny=0;
void star(int *x1,int *y1,int *x2,int *y2)
{
char pr[10];
ellipse(*x1+(*x2-*x1)/2,*y2-10,0,180,(*x2-*x1)/2,70); outtextxy(*x1-2,*y2-17,"v"); line(*x2+10,*y2,*x2+30,*y2);
outtextxy(*x1-15,*y1-3,">"); circle(*x1-40,*y1,10); circle(*x1-80,*y1,10); line(*x1-30,*y2,*x1-10,*y2); outtextxy(*x2+25,*y2-3,">"); sprintf(pr,"%c",238); outtextxy(*x2+15,*y2-9,pr); outtextxy(*x1-25,*y1-9,pr);
outtextxy((*x2-*x1)/2+*x1,*y1-30,pr); 
outtextxy((*x2-*x1)/2+*x1,*y1+30,pr);
ellipse(*x1+(*x2-*x1)/2,*y2+10,180,360,(*x2-*x1)/2+40,70); outtextxy(*x2+37,*y2+14,"^");
if(*x1-40<minx)minx=*x1-40; miny=*y1;
}
void star1(int *x1,int *y1,int *x2,int *y2)
{
char pr[10];
ellipse(*x1+(*x2-*x1)/2+15,*y2-10,0,180,(*x2-*x1)/2+15,70); outtextxy(*x1-2,*y2-17,"v");
line(*x2+40,*y2,*x2+60,*y2); outtextxy(*x1-15,*y1-3,">"); circle(*x1-40,*y1,10); line(*x1-30,*y2,*x1-10,*y2); outtextxy(*x2+25,*y2-3,">"); sprintf(pr,"%c",238); outtextxy(*x2+15,*y2-9,pr); outtextxy(*x1-25,*y1-9,pr);
outtextxy((*x2-*x1)/2+*x1,*y1-30,pr); outtextxy((*x2-*x1)/2+*x1,*y1+30,pr);
ellipse(*x1+(*x2-*x1)/2+15,*y2+10,180,360,(*x2-*x1)/2+50,70); outtextxy(*x2+62,*y2+13,"^");
if(*x1-40<minx)minx=*x1-40; miny=*y1;
}
void basis(int *x1,int *y1,char x)
{
char pr[5]; circle(*x1,*y1,10);
line(*x1+30,*y1,*x1+10,*y1); sprintf(pr,"%c",x); outtextxy(*x1+20,*y1-10,pr); outtextxy(*x1+23,*y1-3,">"); circle(*x1+40,*y1,10); if(*x1<minx)minx=*x1; miny=*y1;
}
void slash(int *x1,int *y1,int *x2,int *y2,int *x3,int *y3,int *x4,int *y4)
{
char pr[10]; int c1,c2; c1=*x1;
if(*x3>c1)c1=*x3; c2=*x2; if(*x4>c2)c2=*x4;
line(*x1-10,*y1,c1-40,(*y3-*y1)/2+*y1-10); 
outtextxy(*x1-15,*y1-3,">");
outtextxy(*x3-15,*y4-3,">"); circle(c1-40,(*y4-*y2)/2+*y2,10); sprintf(pr,"%c",238);
outtextxy(c1-40,(*y4-*y2)/2+*y2+25,pr); outtextxy(c1-40,(*y4-*y2)/2+*y2-25,pr); line(*x2+10,*y2,c2+40,(*y4-*y2)/2+*y2-10); line(*x3-10,*y3,c1-40,(*y3-*y1)/2+*y2+10); circle(c2+40,(*y4-*y2)/2+*y2,10); outtextxy(c2+40,(*y4-*y2)/2+*y2-25,pr); outtextxy(c2-40,(*y4-*y2)/2+*y2+25,pr); outtextxy(c2+35,(*y4-*y2)/2+*y2-15,"^"); outtextxy(c1+35,(*y4-*y2)/2+*y2+10,"^"); line(*x4+10,*y2,c2+40,(*y4-*y2)/2+*y2+10); minx=c1-40;
miny=(*y4-*y2)/2+*y2;
}
void main()
{
int d=0,l,x1=200,y1=200,len,par=0,op[10];
int cx1=200,cy1=200,cx2,cy2,cx3,cy3,cx4,cy4; char str[20];
int gd=DETECT,gm;
int stx[20],endx[20],sty[20],endy[20]; int pos=0,i=0;
clrscr(); initgraph(&gd,&gm,"c:\\dosapp\\tcplus\\bgi"); printf("\n enter the regular expression:"); scanf("%s",str);
len=(strlen(str)); while(i<len)
{
if(isalpha(str[i]))
{
if(str[i+1]=='*')x1=x1+40; basis(&x1,&y1,str[i]); stx[pos]=x1; endx[pos]=x1+40; sty[pos]=y1; endy[pos]=y1;
x1=x1+40;
pos++;
}
if(str[i]=='*')
{
star(&stx[pos-1],&sty[pos-1],&endx[pos-1],&endy[pos-1]); stx[pos-1]=stx[pos-1]-40; 
endx[pos-1]=endx[pos-1]+40; x1=x1+40;
}
if(str[i]=='(')
{
int s; s=i;
while(str[s]!=')')s++;
if((str[s+1]=='*')&&(pos!=0))x1=x1+40; op[par]=pos;
par++;
}
if(str[i]==')')
{
cx2=endx[pos-1]; cy2=endy[pos-1]; l=op[par-1]; cx1=stx[1]; cx2=sty[1];
par--; if(str[i+1]=='*')
{ i++;
star1(&cx1,&cy1,&cx2,&cy2); cx1=cx1-40;
cx2=cx2+40; stx[1]=stx[1]-40;
endx[pos-1]=endx[pos-1]+40; x1=x1+40;
}
if(d==1)
{
slash(&cx3,&cy3,&cx4,&cy4,&cx1,&cy1,&cx2,&cy2); if(cx4>cx2)x1=cx4+40;
else x1=cx2+40; y1=(y1-cy4)/2.0+cy4; d=0;
}
}
if(str[i]=='/')
{
cx2=endx[pos-1]; cy2=endy[pos-1]; x1=200; y1=y1+100; 
if(str[i+1]=='(')
{ d=1;
cx3=cx1; cy3=cy1; cx4=cx2; cy4=cy2;
}
if(isalpha(str[i+1]))
{ i++;
basis(&x1,&y1,str[i]); stx[pos]=x1; endx[pos]=x1+40; sty[pos]=y1; endy[pos]=y1; if(str[i+1]=='*')
{ i++;
star(&stx[pos],&sty[pos],&endx[pos],&endy[pos]); stx[pos]=stx[pos]-40;
endx[pos]=endx[pos]+40;
}
slash(&cx1,&cy1,&cx2,&cy2,&stx[pos],&sty[pos],&endx[pos],&endy[pos]); if(cx2>endx[pos])x1=cx2+40;
else x1=endx[pos]+40; y1=(y1-cy2)/2.0+cy2; cx1=cx1-40;
cy1=(sty[pos]-cy1)/2.0+cy1; cx2=cx2+40;
cy2=(endy[pos]-cy2)/2.0+cy2; l=op[par-1];
stx[1]=cx1; sty[1]=cy1; endx[pos]=cx2; endy[pos]=cy2; pos++;
}
} i++;
}
circle(x1,y1,13);
line(minx-30,miny,minx-10,miny); outtextxy(minx-100,miny-10,"start"); outtextxy(minx-15,miny-3,">");
getch(); 
closegraph();
}
