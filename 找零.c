#include <stdio.h>
#include <stdlib.h>

int main()
{
int price=0;   //���峣�� const int AMOUNT=100��һ��const����ȫ��д 
int bill=0;

printf("����������ļ۸�Ԫ����");
scanf("%d/n",&bill);            //��scanf�ڣ������&�ڱ�������ǰ 

printf("��������Ʒ�۸�Ԫ����"); 
scanf("%d/n",&price);             //��scanf�ڣ������&�ڱ�������ǰ 
  
if(bill>=price){
	printf("����%dԪ",bill-price);
}
else{
	printf("�������������%dԪ",price-bill);
}

system("pause");
return 0;

}


