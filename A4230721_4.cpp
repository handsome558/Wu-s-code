#include <iostream>
using namespace std;
bool checkQua(int);
int booleanAND(int,int);
int booleanOR(int,int);
int main(){
int a,b;
cout << "輸入兩個四進位";
do{	
cin >> a>>b;
if (checkQua(a)==0||checkQua(b)==0){
cout << "輸入錯誤 請重新輸入"; 
}
} 
while (checkQua(a)==0||checkQua(b)==0); 
cout << checkQua(a) <<"\n"<< checkQua(b) << "\n";
cout << booleanAND(a,b)<<"\n";
cout << booleanOR(a,b);

} 
bool checkQua(int a){
	int a1,a2,a3,a4;
	a1=a/1000;
	a2=a/100%10;
	a3=a/10%10;
	a4=a%10;
	if (a1>=0&&a1<4&&a2>=0&&a2<4&&a3>=0&&a3<4&&a4>=0&&a4<4)
	return 1;
	else
	return 0;		
}

int booleanAND(int a,int b){
int a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4;
	a1=a/1000;
	a2=a/100%10;
	a3=a/10%10;
	a4=a%10;
		b1=b/1000;
	    b2=b/100%10;
	    b3=b/10%10;
	    b4=b%10;
	   if (a1>=1&&b1>=1&&a1==b1)
	   c1=1;
	   else
	   c1=0;
	   if (a2>=1&&b2>=1&&a2==b2)
	   c2=1;
	   else
	   c2=0;
	   if (a3>=1&&b3>=1&&a3==b3)
	   c3=1;
	   else
	   c3=0;
	   if (a4>=1&&b4>=1&&a4==b4)
	   c4=1;
	   else
	   c4=0;
	   return c1*1000+c2*100+c3*10+c4;
}
int booleanOR(int a,int b){
	int a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4;
	a1=a/1000;
	a2=a/100%10;
	a3=a/10%10;
	a4=a%10;
		b1=b/1000;
	    b2=b/100%10;
	    b3=b/10%10;
	    b4=b%10;
	    if(a1==0&&b1==0)
	    c1=0;
	    else
	    c1=1;
	if(a2==0&&b2==0)
	c2=0;
	else
	c2=1;
	if(a3==0&&b3==0)
	c3=0;
	else
	c3=1;
	if(a4==0&&b4==0)
	c4=0;
	else
	c4=1;
	return c1*1000+c2*100+c3*10+c4;
	
	
}




//int booleanOR(int a,int b){}

