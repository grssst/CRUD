#include <iostream>
#include <string.h>
#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[100][10]={0}, mail[100][30]={0},phone[100][20]={0};
	
    int a,b,i,j,q;
    int num; 
	int num_1;
printf("<ȸ������ ���� �ý���>\n\n���ϴ� �۾��� �����ϼ���. ex)1\n");


while(1){
	a=0;
printf("\n1.ȸ�� �߰�/����\n2.ȸ�� ��ȸ\n3.����\n4.����\n�Է� : ");
scanf("%d",&a);
if(a==3) break;

switch(a){
	case 1:
		printf("\n�߰� �Ͻ÷��� 1, ���� �Ͻ÷��� 2�� �Է��ϼ���.\n�Է� : ");
		scanf("%d",&b);
		if(b==1){
			for(i=0; i<100; i++){
			if(name[i][0]==0){
			printf("\nȸ���� : ");
			scanf("%s",&name[i]);
			printf("\n��ȭ��ȣ : ");
			scanf("%s",&phone[i]);
			printf("\n�̸��� : ");
			scanf("%s",&mail[i]);
			
			
			printf("\n\n�ش�ȸ���� ȸ�� ��ȣ <%d��>���� �߰� �Ǿ����ϴ�\n",i);
			break; 
			}
		}
		}

		if(b==2){
			printf("\n������ ȸ�� ��ȣ�� �Է��ϼ���.\n�Է� : ");
			scanf("%d",&num);
			for(j=0; j<30; j++){
				
				phone[num][j]=0;
				name[num][j]=0;
				mail[num][j]=0; 
			}
			
			printf("\n�ش� ȸ���� ������ ���� �Ǿ����ϴ�.\n");
		}
    break;
}
}
	
	
	return 0;
}
