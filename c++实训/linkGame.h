#pragma once
#include<graphics.h>
#include<vector>

struct Point {
	int x, y;
	bool operator!=(const Point& other) {
		if (this->x == other.x && this->y == other.y)
			return false;
		return true;
	}
};

class linkGame
{
public:
	linkGame(int rows, int cols, int width, int height, int blockSize, int leftBound, int topBound);
	void init();						//��ʼ��
	void play();						//��ʼ��Ϸ
	void biuldMap();					//������ͼ
	void clear(Point a, Point b);		//��������
	void updateNums();					//��������
	int findGcd(int a, int b);						//Ѱ�����Լ��
	void updateWindow();				//���´���
	void checkOver();					//�����Ϸ�Ƿ����
	void click();						//�����û�����
	void displayOver();					//չʾ���㻭��
	void saveScore();					//������߷�
	void saveDate();					//ʵʱ��������
	int getDelay();						//��ȡ�ӳ�

private:
	int rows, cols, width, height, blockSize, leftBound, topBound;
	int minTime;
	int curTime;
	int delay;
	int whetherOver;
	bool whetherUpdate;
	int level;
	IMAGE background;
	IMAGE block;
	IMAGE block_choose;
	std::vector<std::vector<int>>mp;
	std::vector<std::vector<int>>nums;
	std::vector<std::vector<int>>choose;
};

