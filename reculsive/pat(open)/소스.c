/*
��Ʈ����
���α׷� ��: pat(open)
���ѽð�: 1 ��
�� ���� n , k �� �Է����� �޾� k ���� 1 �� ���� n �ڸ� ���� ������ ����ϴ� ���α׷��� �ۼ� �ϼ���.
�Է�
�� ���� n , k �� �Է����� �־�����. (0 < n <= 30 , 0 <= k < 8 , n >= k)
���
����� ������������ ����Ѵ�.
����� ��
�Է�
2 1
���
10
01

�Է�
2 0
���
00

�Է�
4 2
���
1100
1010
1001
0110
0101
0011
*/
//arr[0]���� �����Ͽ� 1�� ��� 0�ϰ��� ���� ��� && ���ߴ� ������ �Ҹ��� k�� ��ǥ k�� ������ ���� ���
#include <stdio.h>

int arr[31];
int length;
int n, k;
int i;

void bitpattern(int now_n, int now_k) {
	if (now_k==k) {
		for (i = 0; i < length; i++) {
			printf("%d", arr[i]);
		}
		printf("\n");
		return;
	}
	if (now_n == n) {
		return;
	}
	arr[now_n] = 1; 
	bitpattern(now_n + 1, now_k + 1);
	arr[now_n] = 0;
	bitpattern(now_n + 1, now_k);
}

void main() {
	
	scanf_s("%d %d", &n, &k);
	length = n;
	bitpattern(0, 0);
}