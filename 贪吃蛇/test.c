#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define lc 25
#define size 625
//定义棋盘规格，此处令长宽均为lc=25，棋盘大小size就是长×宽，可以自己算下，也可以设为lc*lc
typedef struct snake {//格子结构体，格子不算多，可以直接用数组比较方便，每个格子包含状态，前一个结点和后一个结点的下标
	char state;
	int pre;
	int next;
}Snake;
Snake S[size];//总共size个格子，这些宏定义好像一般是大写字母，小文件问题不大
/*
dir是蛇前进方向，1左2上3下4右，相反方向相加为5，方便后面偷懒
head就是蛇头所在格子的下标，rear是蛇尾下标，score是分数，wait是界面刷新间隔，蛇在刷新时动，间隔越小蛇移动越快
*/
int dir, head, rear, score, wait;
void init();//初始化分数，蛇，界面啥的
void back();//背景，就四周实心正方形围起来一圈
char sth(char);//格子状态转字符，蛇和食物，墙啥的都是特殊字符表示的
void food();//生成食物
void run();//刷新界面
void Dir();//方向键改变移动方向
int move();//蛇动起来
void draw(int);//填充单个格子，刷新整个界面会一闪一闪的辣眼睛

int main() {
	init();
	run();
}
void init() {
	system("chcp 437 & cls");//切换活动代码页为437以显示那些特殊字符不过就不能输出中文了，并清屏
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//隐藏光标
	srand((unsigned)time(NULL));//初始化随机数种子，基操
	int i = 0;
	for (i = 0; i < size; i++)S[i].state = 'b';//把每个格子状态置为空
	S[1].state = S[2].state = 's';//最开始2节蛇的位置，格子状态s表示是蛇的一部分
	S[1].pre = 2; S[2].next = 1;//把这两节蛇连成一条蛇
	dir = 4; head = 2; rear = 1; score = 0; wait = 150;//开始往右动，蛇头在下标2的位置，设为是1，分数归零，刷新间隔150ms
	food();
}
void back() {
	system("cls");
	int i, j;
	for (i = 0; i < lc + 2; i++)printf("%2c", 176);//第一行墙，数字对应的字符见IBM437码表
	printf("\n");
	for (i = 0; i < lc; i++) {//中间的格子，两侧是墙，中间按各格子状态输出
		printf("%2c", 176);
		for (j = 0; j < lc; j++)
			printf("%2c", sth(S[lc * i + j].state));
		printf("%2c\n", 176);
	}
	for (i = 0; i < lc + 2; i++)printf("%2c", 176);//最后一行墙
}
char sth(char state) {
	return state == 'f' ? 3 : state == 's' ? 219 : 32;
}
void food() {
	if (score == size - 2)return; //满屏都是蛇就不生成食物了
	int i;
	i = rand() % size;//随机找个点
	while (S[i].state != 'b')i = rand() % size;//不是空的就继续随机找
	S[i].state = 'f';//找到的格子状态设为食物
	draw(i);//输出食物
}
void run() {
	int res = 1;
	back();
	while (res) {//res变0就游戏结束
		Dir();
		res = move();
		Sleep(wait);
		wait = 150;//一直按着方向键蛇会加速移动，需要恢复速度
	}
	if (score < size - 2)printf("\nGame Over. Score:%d\n", score); else printf("666\n");//简单输出一下分数
}
void Dir() {
	int newdir = 0;
	if (GetAsyncKeyState(VK_UP))newdir = 2;//GetAsyncKeyState看看有没有按下什么键，朴实无华的工具人
	else {
		if (GetAsyncKeyState(VK_DOWN))newdir = 3;
		else {
			if (GetAsyncKeyState(VK_LEFT))newdir = 1;
			else {
				if (GetAsyncKeyState(VK_RIGHT))newdir = 4;
			}
		}
	}
	if (newdir == 0)return;//什么都没发生或按了别的键就啥都不发生
	if (newdir == dir)wait = 75;//按的方向跟当前方向一下就加速移动
	if (newdir + dir != 5)dir = newdir;//按的跟移动不是相反的方向就调整方向
}
int move() {
	int pre = head;//备份一下当前蛇头下标 ，就是下面的第二节蛇身
	switch (dir) {
	case 1:head = head - 1; break;//往左一格
	case 2:head -= lc; break;//往上一格
	case 3:head += lc; break;//往下一格
	case 4:head += 1; break;//往右一格
	default:break;
	}
	//上下移动的话蛇头不越界就行，左右移动的话如果蛇头跟第二节蛇身不在同一行就说明撞墙了
	if (head<0 || head>size || ((dir == 1 || dir == 4) && pre / lc != head / lc))return 0;
	if (S[head].state == 's')return 0;//撞到自己了就游戏结束
	S[head].next = pre; S[pre].pre = head;//把新蛇头连起来
	if (S[head].state != 'f') {//新蛇头位置原来没有食物就把蛇尾丢了，更新蛇尾为最后第二节
		S[rear].state = 'b';
		rear = S[rear].pre;
	}
	else { score++; food(); }//新蛇头原来是食物就喜+1，并重新生成食物
	S[head].state = 's';//把新蛇头真正变成蛇的一部分
	draw(head);//画蛇头
	draw(S[rear].next);//把旧的蛇尾涂掉
}
void draw(int pos) {
	COORD coor = { (pos % lc + 1) * 2,pos / lc + 1 };//pos下标所在位置
	static COORD endline = { 0,size / lc + 1 };//这个是最后一行用来之后输出结果的位置
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, coor); //把光标跳到pos所指位置
	printf("%2c ", sth(S[pos].state));//覆盖输出
	SetConsoleCursorPosition(hOut, endline);//光标跳回最后
}