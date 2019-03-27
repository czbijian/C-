#include <deque>
#include <iostream>
using namespace std;
#include <string>
int main(){
	deque<string> task;
	task.push_back("起床");
	task.push_back("洗刷");
	task.push_back("吃饭");
	task.push_back("上班");
	//显示任务列表
	int size = task.size();
	for(int i = 0; i < size; i++){
		cout << task[i] << "==>";
	}
	cout << "OK" << endl;
	while(!task.empty()){
		cout << task.front();
		task.pop_front();
		cout << "完成" << endl;
	}			
}
