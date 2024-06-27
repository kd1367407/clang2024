#include<stdio.h>
#define queuesize 8//�L���[�T�C�Y
int queue[queuesize];//�L���[�̈�p�z��
int head = 0;//�L���[�擪�f�[�^�̃|�C���^(�z��̓Y�����p)
int tail = 0;//�L���[�I�[�f�[�^�̃|�C���^(�z��̓Y�����p)

//�֐��v���g�^�C�v�錾
void display(void);
int enqueue(int d);
int dequeue(int *pd);
main()
{
	int key, data, result;
	do {
		printf("\n�G���L���[��i�A�f�L���[��o����͂���\n>");
		key = getche();
		printf("\n");

		//�G���L���[����
		if (key == 'i') {
			printf("�f�[�^����>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("�L���[�������ς��ł�");
			}
			else {
				display();
			}
		}

		//�f�L���[����
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("�L���[����ł�\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//�L���[�\���֐�
void display(void)
{
	int i;
	printf("\n���݂̃L���[�̓��e\n");
	for (i = 0; i < queuesize; i++) {
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head) {
			printf("��head�������Ă��鏊(����head��%d)", head);//�m�F�p
		}
		if (i == tail) {
			printf("��tail�������Ă��鏊(����tail��%d)", tail);
		}
		printf("\n");
	}
	return;
}

//�L���[�Ƀf�[�^������(�G���L���[����)
int enqueue(int d)
{
	if (head == (tail+1) % queuesize) { return -1; }//�L���[�������ς��̎�
	queue[tail] = d;
	tail++;
	tail = tail % queuesize;
	return 0;
}

//�L���[����f�[�^�����o��(�f�L���[����)
int dequeue(int* pd)
{
	if (head == tail) { return -1; }//�L���[����̎�
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % queuesize;
	return 0;
}
