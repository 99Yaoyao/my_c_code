#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define lc 25
#define size 625
//�������̹�񣬴˴�����Ϊlc=25�����̴�Сsize���ǳ����������Լ����£�Ҳ������Ϊlc*lc
typedef struct snake {//���ӽṹ�壬���Ӳ���࣬����ֱ��������ȽϷ��㣬ÿ�����Ӱ���״̬��ǰһ�����ͺ�һ�������±�
	char state;
	int pre;
	int next;
}Snake;
Snake S[size];//�ܹ�size�����ӣ���Щ�궨�����һ���Ǵ�д��ĸ��С�ļ����ⲻ��
/*
dir����ǰ������1��2��3��4�ң��෴�������Ϊ5���������͵��
head������ͷ���ڸ��ӵ��±꣬rear����β�±꣬score�Ƿ�����wait�ǽ���ˢ�¼��������ˢ��ʱ�������ԽС���ƶ�Խ��
*/
int dir, head, rear, score, wait;
void init();//��ʼ���������ߣ�����ɶ��
void back();//������������ʵ��������Χ����һȦ
char sth(char);//����״̬ת�ַ����ߺ�ʳ�ǽɶ�Ķ��������ַ���ʾ��
void food();//����ʳ��
void run();//ˢ�½���
void Dir();//������ı��ƶ�����
int move();//�߶�����
void draw(int);//��䵥�����ӣ�ˢ�����������һ��һ�������۾�

int main() {
	init();
	run();
}
void init() {
	system("chcp 437 & cls");//�л������ҳΪ437����ʾ��Щ�����ַ������Ͳ�����������ˣ�������
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//���ع��
	srand((unsigned)time(NULL));//��ʼ����������ӣ�����
	int i = 0;
	for (i = 0; i < size; i++)S[i].state = 'b';//��ÿ������״̬��Ϊ��
	S[1].state = S[2].state = 's';//�ʼ2���ߵ�λ�ã�����״̬s��ʾ���ߵ�һ����
	S[1].pre = 2; S[2].next = 1;//��������������һ����
	dir = 4; head = 2; rear = 1; score = 0; wait = 150;//��ʼ���Ҷ�����ͷ���±�2��λ�ã���Ϊ��1���������㣬ˢ�¼��150ms
	food();
}
void back() {
	system("cls");
	int i, j;
	for (i = 0; i < lc + 2; i++)printf("%2c", 176);//��һ��ǽ�����ֶ�Ӧ���ַ���IBM437���
	printf("\n");
	for (i = 0; i < lc; i++) {//�м�ĸ��ӣ�������ǽ���м䰴������״̬���
		printf("%2c", 176);
		for (j = 0; j < lc; j++)
			printf("%2c", sth(S[lc * i + j].state));
		printf("%2c\n", 176);
	}
	for (i = 0; i < lc + 2; i++)printf("%2c", 176);//���һ��ǽ
}
char sth(char state) {
	return state == 'f' ? 3 : state == 's' ? 219 : 32;
}
void food() {
	if (score == size - 2)return; //���������߾Ͳ�����ʳ����
	int i;
	i = rand() % size;//����Ҹ���
	while (S[i].state != 'b')i = rand() % size;//���ǿյľͼ��������
	S[i].state = 'f';//�ҵ��ĸ���״̬��Ϊʳ��
	draw(i);//���ʳ��
}
void run() {
	int res = 1;
	back();
	while (res) {//res��0����Ϸ����
		Dir();
		res = move();
		Sleep(wait);
		wait = 150;//һֱ���ŷ�����߻�����ƶ�����Ҫ�ָ��ٶ�
	}
	if (score < size - 2)printf("\nGame Over. Score:%d\n", score); else printf("666\n");//�����һ�·���
}
void Dir() {
	int newdir = 0;
	if (GetAsyncKeyState(VK_UP))newdir = 2;//GetAsyncKeyState������û�а���ʲô������ʵ�޻��Ĺ�����
	else {
		if (GetAsyncKeyState(VK_DOWN))newdir = 3;
		else {
			if (GetAsyncKeyState(VK_LEFT))newdir = 1;
			else {
				if (GetAsyncKeyState(VK_RIGHT))newdir = 4;
			}
		}
	}
	if (newdir == 0)return;//ʲô��û�������˱�ļ���ɶ��������
	if (newdir == dir)wait = 75;//���ķ������ǰ����һ�¾ͼ����ƶ�
	if (newdir + dir != 5)dir = newdir;//���ĸ��ƶ������෴�ķ���͵�������
}
int move() {
	int pre = head;//����һ�µ�ǰ��ͷ�±� ����������ĵڶ�������
	switch (dir) {
	case 1:head = head - 1; break;//����һ��
	case 2:head -= lc; break;//����һ��
	case 3:head += lc; break;//����һ��
	case 4:head += 1; break;//����һ��
	default:break;
	}
	//�����ƶ��Ļ���ͷ��Խ����У������ƶ��Ļ������ͷ���ڶ���������ͬһ�о�˵��ײǽ��
	if (head<0 || head>size || ((dir == 1 || dir == 4) && pre / lc != head / lc))return 0;
	if (S[head].state == 's')return 0;//ײ���Լ��˾���Ϸ����
	S[head].next = pre; S[pre].pre = head;//������ͷ������
	if (S[head].state != 'f') {//����ͷλ��ԭ��û��ʳ��Ͱ���β���ˣ�������βΪ���ڶ���
		S[rear].state = 'b';
		rear = S[rear].pre;
	}
	else { score++; food(); }//����ͷԭ����ʳ���ϲ+1������������ʳ��
	S[head].state = 's';//������ͷ��������ߵ�һ����
	draw(head);//����ͷ
	draw(S[rear].next);//�Ѿɵ���βͿ��
}
void draw(int pos) {
	COORD coor = { (pos % lc + 1) * 2,pos / lc + 1 };//pos�±�����λ��
	static COORD endline = { 0,size / lc + 1 };//��������һ������֮����������λ��
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, coor); //�ѹ������pos��ָλ��
	printf("%2c ", sth(S[pos].state));//�������
	SetConsoleCursorPosition(hOut, endline);//����������
}