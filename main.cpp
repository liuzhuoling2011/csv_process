#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int fun_weight(string name){
	if (name == "�������ʵѵ���ۺ���Ŀ��")
		return 4;
	else if (name == "����ͼ����" || name == "������Ӿ���ģʽʶ��" || name == "����ý�弼������" || name == "�����ͼ��ѧ" || name == "�˹�����" || name == "������Լ���" || name == "�����ھ�" || name == "�㷨���������" || name == "ϵͳ���������" || name == "����ԭ��" || name == "�������м��" || name == "���������" || name == "Web_��ȫ" || name == "�˹�����" || name == "Web_2.0�������" || name == "����������" || name == "������Ӿ���ģʽʶ��")
		return 3;
	else if (name == "�Ƽ�����д��" || name == "�������ʵѵ���м���" || name == "�ֻ�ƽ̨Ӧ�ÿ�������Google������" || name == "�ִ�����ϵͳӦ�ÿ���" || name == "��ȫ�ؼ�ϵͳ����" || name == "����������Ϣ��������������ʵ��" || name == "����������Ƶ���" || name == "���Դ���Ӧ�ý�չ" || name == "ҵ������Զ��������뼼��" || name == "�������ϵ�ṹ" || name == "IT��Ŀ����" || name == "���ܻ����˼���" || name == "ERP������ʵ��" || name == "IT�����봴ҵ" || name == "����ITϵͳ������" || name == "��������������" || name == "����IT������Ӧ��" || name == "���繥�������" || name == "��˳������" || name == "��ѧ��Ƹ���" || name == "�����ھ��չ��Ӧ��" || name == "�����źŴ���" || name == "���繥�����������" || name == "�����ƶ������˵���" || name == "��Ϣ��ȫ����" || name == "�Ƽ���Ӧ�ÿ���")
		return 2;
	else if (name == "�ֻ�ƽ̨Ӧ�ÿ�������Google�������γ�ʵ��" || name == "�ִ�����ϵͳӦ�ÿ����γ�ʵ��" || name == "���������γ�ʵϰ" || name == "�Ƽ���Ӧ�ÿ���ʵ��")
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