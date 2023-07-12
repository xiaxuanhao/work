#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <iostream>

class user {
	std::string name;
	std::string password;
	int id;//用户标识

public:
	void reg();//注册，记录用户名，密码，生成id
	void login();
	//登录，匹配用户名和密码，若都匹配输出登录成功，
	//用户名无匹配提示无该用户请注册，用户名匹配密码不匹配提示密码错误
	void creat();//创建file记录内容
};

class file {
	int owner_id;
	int folder_id;//文件夹标识
	int id;//文件标识
	int remind;//是否提醒 是1 否0
	time_t remind_time;//提醒时间
	int state;//事件状态 无状态(非待办)0 已完成1 进行中2 未开始3
	
	//todo 文件，内容
	file(int now_id);//仅需创建文件
public:
	void Read();//查看
	void Creat();//创建
	void Edit();//编辑
	void Remind();//提醒
	void Import();//导入
	void Export();//导出
	void delect();//删除



};

void search();//查找

class folder {
	int id;
	std::string name;

	folder();
public:
	void Creat();//创建
	void delect();//删除
	void Rename();//重命名
	
};