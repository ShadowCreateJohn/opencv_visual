
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui.hpp>
#include<opencv2\imgproc.hpp>
#include <opencv2\imgcodecs.hpp>

using namespace cv;
using namespace std;
//��ʾͼ��
int main(int argc, char** argv)
{
	//��������
	string windowName = "HelloWorld";
	//ͼ������
	string imgFile = "D:\\code_workspace\\visual_workspace\\MyApp1\\pic.png";

	//����ͼ��
	Mat image = cv::imread(imgFile, IMREAD_COLOR);
	if (!image.data)
	{
		cout << "�޷���ͼ���ļ�" << std::endl;
		return -1;
	}
	//����һ���´���
	namedWindow(windowName, WINDOW_AUTOSIZE);
	//��ͼ����ʾ���´����Ĵ�����
	imshow(windowName, image);
	//�ȴ���ֱ���û��������ʱ�˳�
	waitKey(0);
	return 0;
}
