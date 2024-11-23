#include<stdio.h>

int main(){ 
    float m,n;
    do{
	printf("Nhap vao so dien dau thang :");
	scanf("%f",&n);
	if(n<0) printf("So dien dau thang khong hop le !\n");
	}while(n<0);
	do{
	printf("Nhap vao so dien cuoi thang :");
	
	scanf("%f",&m);
	if(m<n) printf ("So dien cuoi thang khong hop le!\n");
    } while(m<n);
	const float usage_elec=m-n;
	float bill_elec=0.0;
	if(usage_elec>=200) 
	bill_elec+=(usage_elec-200+1)*30000+25000*50+50*20000+50*15000+49*10000;
	else if(usage_elec<200&&usage_elec>=150)
	 bill_elec+=(usage_elec-150+1)*25000+50*20000+50*15000+49*10000;
	else if(usage_elec<150&&usage_elec>=100)
	 bill_elec+=(usage_elec-100+1)*20000+50*15000+49*10000;
	else if(usage_elec<100&&usage_elec>=50)
	 bill_elec+=(usage_elec-50+1)*15000+49*10000;
	else 
	bill_elec+=usage_elec*10000;
	int bill_electricity=(int)bill_elec;
	printf("Tien dien la :%dvnd",bill_electricity);
    return 0;	
	
}