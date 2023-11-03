#include <stdio.h>
#include "print_even.h"

// define A B ��� ���´ٸ� A�� B�� ��ü�ϰ����� �ǹ��Ѵ�. 
// ��ü�ϴ� ������? 
//  - �������� ��Ȯ�ϰ� ����� ���ؼ� #define�� ����Ѵ�. 

// Q. const�� #define�� ���̴�? 
//	  const�� ��� ����� �Һ����� �����Ѵ�. 
//    #define�� �ϰ����� �����ϱ� ���� ����Ѵ�. 	 
#define EVEN_DECISION_NUMBER      2

//���: void (����) 
//�Է�: int Ÿ�� 2�� 

void print_even_number_from_start_to_end(int start, int end)
{
	// ���� ���� ���ΰ�? 
	int current_number;

	// ���� ~ ������ �� ���̹Ƿ� current_number = ���� (start)
	// �׸��� �� (end)�� �����ؾ� �ϹǷ� �ε�ȣ�� '<=' �۰ų� ���ٷ� ���� 
	// current_number ++ <<- ���⼭ '++'�̶�� ǥ���� �ܼ��� ����� 1�� �ǹ��Ѵ�. 
	
	// �⺻���� for ���� ���� ���� 
	// 1. for(�ʱ� ����; ���� ; ����) {������ ���� �� �� ������ �ݺ���ų ���ΰ�}
	// - �ʱ� ����: for ���� ������ �� ���� 1���� ����� 
	// - ����: ������ ������ ��� ����ȣ('{ }') ������ �ڵ尡 ����� 
	//    ���� ������ �������� �ʴ´ٸ� �״�� for ���� ����� 
	// - ����: �߰�ȣ ('{ }') ��Ʈ�� ����� ���� ������ ������ 

	// �ʱ� �����̳� ������ ��� ���Ǹ� �����Ѵٸ� for���� �����Ѵ�. 
	for (current_number = start; current_number <= end; current_number++)
	{
		// if ���� ���� ���� 
		// �Ұ�ȣ ���ο� ������ �����ȴٸ� �߰�ȣ �ڵ带 �����ϸ� ������ �������� �ʴ´ٸ� ������. 

		//current_number ������ EVEN_DECISION_NUMBER (2)�� ��� �������� 0�� �³���? ��� ������ ������ �ִ�. 
		if (current_number % EVEN_DECISION_NUMBER == 0)
		{
			//�� ������ �����ϴ� ��쿡�� printf ����� ����ȴ�. 
			printf("�� ��ȣ�� ¦���Դϴ�: %d\n", current_number);
		}
	}
}

// ¦��: 2n, Ȧ��: 2n+1  