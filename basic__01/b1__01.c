//�ΰ��� ������ �Է¹޾Ƽ� �� �� ū ���� ����ϴ� ���α׷��� �����϶�.
#include "stdio.h"
void main() {
	int a, b;

	printf("insert 2num: >>");
	scanf_s("%d %d",&a, &b);
	while (a > 0) {
		if (a > b) {
			printf("%d", a);
		}
		else if (a < b) {
			printf("%d", b);
		}
		else {
			printf("�� ������ ���� �����ϴ�. �����մϴ�.\n");
			break;
		}
		
	}
}