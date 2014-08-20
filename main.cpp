#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int fun_weight(string name){
	if (name == "软件工程实训（综合项目）")
		return 4;
	else if (name == "数字图像处理" || name == "计算机视觉与模式识别" || name == "数字媒体技术基础" || name == "计算机图形学" || name == "人工智能" || name == "软件测试技术" || name == "数据挖掘" || name == "算法分析与设计" || name == "系统分析与设计" || name == "编译原理" || name == "机器人中间件" || name == "计算机网络" || name == "Web_安全" || name == "人工智能" || name == "Web_2.0程序设计" || name == "工作流技术" || name == "计算机视觉与模式识别")
		return 3;
	else if (name == "科技论文写作" || name == "软件工程实训（中级）" || name == "手机平台应用开发（与Google共建）" || name == "现代操作系统应用开发" || name == "安全关键系统开发" || name == "传感器和信息物理网络的设计与实现" || name == "函数程序设计导论" || name == "线性代数应用进展" || name == "业务过程自动化理论与技术" || name == "计算机体系结构" || name == "IT项目管理" || name == "智能机器人技术" || name == "ERP理论与实践" || name == "IT创新与创业" || name == "戴尔IT系统管理导论" || name == "电子政务案例分析" || name == "金融IT工程与应用" || name == "网络攻击与防护" || name == "多核程序设计" || name == "美学设计概论" || name == "数据挖掘进展与应用" || name == "数字信号处理" || name == "网络攻击与防御技术" || name == "自主移动机器人导论" || name == "信息安全技术" || name == "云计算应用开发")
		return 2;
	else if (name == "手机平台应用开发（与Google共建）课程实验" || name == "现代操作系统应用开发课程实验" || name == "计算机网络课程实习" || name == "云计算应用开发实验")
		return 1;
	else
		return 0;
}

struct subject
{
	string name;
	int grades;
	int weight;
	float final;
};

class student
{
public:
	string ID;
	string name;
	vector<subject> s;
	float origin_grades;
	float extra_points;
	student(string ID, string name, string subj, int grades){
		this->ID = ID;
		this->name = name;
		this->extra_points = 0;
		subject temp;
		temp.name = subj;
		temp.grades = grades;
		temp.weight = fun_weight(subj);
		if (grades < 60)
			temp.final = 0;
		else
			temp.final = ((float)(grades) / 10 - 5)*temp.weight;
		s.push_back(temp);
	}
	void add_subj(string subj, int grades){
		subject temp;
		temp.name = subj;
		temp.grades = grades;
		temp.weight = fun_weight(subj);
		if (grades < 60)
			temp.final = 0;
		else
			temp.final = ((float)(grades) / 10 - 5)*temp.weight;
		s.push_back(temp);
	}
};

bool cmp(student &s1, student &s2){
	return s1.origin_grades + s1.extra_points> s2.origin_grades + s2.extra_points;
}


int main(){
	ifstream fin("hello.csv");
	string temp;
	string temp_stream;

	while (getline(fin, temp_stream)){
		istringstream sin(temp_stream);

		while (getline(sin, temp, ',')){

		}
	}
}