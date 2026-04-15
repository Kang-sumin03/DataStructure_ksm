#include <stdio.h>
#include "cQueueS.h"

int main(void) {
	QueueType* cQ = createCQueue();		//큐 생성
	element data;
	printf("\n ***** 원형 큐 연산 ***** \n");
	printf("\n 삽입 A>>"); enCQueue(cQ, 'A'); printCQ(cQ);
	printf("\n 삽입 B>>"); enCQueue(cQ, 'B'); printCQ(cQ);
	printf("\n 삽입 C>>"); enCQueue(cQ, 'C'); printCQ(cQ);
	data = peekCQ(cQ);
	printf("  peek item : %C \n", data);
	printf("\n 삭제 >>"); data = deCQueue(cQ); printCQ(cQ);
	printf("\t 삭제 데이터 : %C", data);
	printf("\n 삭제 >>"); data = deCQueue(cQ); printCQ(cQ);
	printf("\t 삭제 데이터 : %C", data);
	printf("\n 삭제 >>"); data = deCQueue(cQ); printCQ(cQ);
	printf("\t\t 삭제 데이터 : %C", data);
	printf("\n 삽입 D>>"); enCQueue(cQ, 'D'); printCQ(cQ);
	printf("\n 삽입 E>>"); enCQueue(cQ, 'E'); printCQ(cQ);
}