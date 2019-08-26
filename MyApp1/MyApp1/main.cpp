
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\highgui.hpp>
#include<opencv2\imgproc.hpp>
#include <opencv2\imgcodecs.hpp>

using namespace cv;
using namespace std;
//显示图像
int main(int argc, char** argv)
{
	//窗口名称
	string windowName = "HelloWorld";
	//图像名称
	string imgFile = "D:\\code_workspace\\visual_workspace\\MyApp1\\pic.png";

	//读入图像
	Mat image = cv::imread(imgFile, IMREAD_COLOR);
	if (!image.data)
	{
		cout << "无法打开图像文件" << std::endl;
		return -1;
	}
	//创建一个新窗口
	namedWindow(windowName, WINDOW_AUTOSIZE);
	//将图像显示都新创建的窗口中
	imshow(windowName, image);
	//等待，直到用户按任意键时退出
	waitKey(0);
	return 0;
}
