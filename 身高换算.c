#include <stdio.h>

int main()
{
int foot=0;   // double foot; double inch (double��ʾ˫���ȸ�����)
int inch=0;

printf("������Ӣ����\n");
scanf("%d",&foot) ;   // ��double���壬����ʱscanf("%lf",&foot)��printf("%f",&foot) 

printf("������Ӣ����\n");
scanf("%d",&inch);

printf("���Ϊ%f��",((foot+inch/12.0)*0.3048));

return 0; 
}
