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
printf("<회원정보 관리 시스템>\n\n원하는 작업을 선택하세요. ex)1\n");


while(1){
	a=0;
printf("\n1.회원 추가/제거\n2.회원 조회\n3.종료\n4.갱신\n입력 : ");
scanf("%d",&a);
if(a==3) break;

switch(a){
	case 1:
		printf("\n추가 하시려면 1, 제거 하시려면 2를 입력하세요.\n입력 : ");
		scanf("%d",&b);
		if(b==1){
			for(i=0; i<100; i++){
			if(name[i][0]==0){
			printf("\n회원명 : ");
			scanf("%s",&name[i]);
			printf("\n전화번호 : ");
			scanf("%s",&phone[i]);
			printf("\n이메일 : ");
			scanf("%s",&mail[i]);
			
			
			printf("\n\n해당회원이 회원 번호 <%d번>으로 추가 되었습니다\n",i);
			break; 
			}
		}
		}

		if(b==2){
			printf("\n제거할 회원 번호를 입력하세요.\n입력 : ");
			scanf("%d",&num);
			for(j=0; j<30; j++){
				
				phone[num][j]=0;
				name[num][j]=0;
				mail[num][j]=0; 
			}
			
			printf("\n해당 회원의 정보가 제거 되었습니다.\n");
		}
    break;
}
}
	
	
	return 0;
}
