/*ˮ�ɻ���
ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153��
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int digit;
	printf("������λ����\n");
	scanf("%d",&digit);
	
	int i=1;
	int first=1;
	while(i<digit){
		first*=10;
		i++;
	}
	printf("%d",first);
	
	// ��������nλ�� 
	i=first;     // nλ������Сֵ 
	while(i<first*10) {
		int t=i;     // ����ʱ����t��¼i 
		int sum=0;
		do{
			int digit=t%10;
			t/=10;
			
			int j=0;     // ���� 
			int p=1;
			while(j<digit){
				p*=digit;    // ����n�η� 
				j++;
				printf("p=%d/n",p);
			} 
			sum+=p; 
		}while(t>0);
		if(sum==i){
			printf("%d\n",i);
		} 
		i++;	
	}

	system("pause");
	return 0;	
}










