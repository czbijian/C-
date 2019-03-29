//功能：数据，创建，插入，删除，查找，修改，清空，遍历，大小......
//内存最好动态分配，所以要考虑到拷贝构造/析构/operator=

#include <iostream>
using namespace std;

typedef int T;
class List{
	struct Node{
		T data;
		Node* next;
		Node(const T& d, Node* next=NULL):data(d),next(next){}
	};//内部类型
	Node* head;//头指针，不是节点，但指向第一个节点
	int len;//数据个数，以空间换时间
public:
	List():head(),len(){}//零初始化
	~List(){
		clear();	
	}
	int size()const{
		return len;	
	}
	void travel()const{
		Node *p = head;
		while(p){
			cout << p->data << ' ';
			p = p->next;
		}
		cout << endl;
	}
	void clear(){
		Node *p = head, *q;
		while(p){
			q = p->next; //记录下一个节点的地址
			delete p;	 //释放当前这个节点
			p = q;       //p指向下一个节点
		}
	}
	Node*& getptr(int n){//找到指向n号节点的指针本身
		if(n <0 || n> len){//无效位置当成位置0
			n = len;
		}
		if(n==0){
			return head;//0号是由head指向的
		}
		Node *p = head;
		for(int i = 0 ; i < n-1; i++){//循环n-1次。
			p = p->next;
		}
		return p->next;//返回节点中的next成员
	}
	void insert(const T& d, int n){//在n号节点前插入
		Node*& p = getptr(n);//取得指向n号节点的指针本身
		Node* q = new Node(d, p);//新节点的next指向n号节点
		p = q;	//让找到的指针指向新节点
		++len;
	}
	void erase(int n){//删除n号节点
		Node*& p = getptr(n);
		if(p){
			Node* q = p;
			p = p->next;
			delete q;
			--len;
		}
	}
	void remove(const T& d){
		Node*& p = find(d);
		if(p){
			Node* q = p;
			p = p->next;
			delete q;
			--len;
		}
	}
	Node*& find(const T& d){
		if(len == 0 || head->data == d){
			return head;	
		}
		Node* p = head;
		while(p->next && p->next->data != d){
			p = p->next;
		}
		return p->next;
	}
	void update(const T& oldv, const T& newv){
		Node* p = find(oldv);
		if(p){
			p->data = newv;
		}
	}
	T& front(){
		return head->data;	
	}
	T& back(){
		return getptr(len-1)->data;	
	}
	void push_front(const T& d){//头部插入
		insert(d,0);	
	}
	void push_back(const T& d){//尾部插入
		insert(d,len);
	}
	void pop_front(){		 	//删除头部
		erase(0);
	}
	void pop_back(){			//删除尾部
		erase(len-1);
	}
	T& operator[](int index)throw(const char*){
		if(index < 0|| index >= len)throw"越界";
		return getptr(index)->data;
	}
};

int main(){
	List l;
	l.insert(1,0);
	l.insert(2,0);
	l.insert(3,0);
	l.insert(4,4);
	l.insert(5,4);
	l.insert(6,6);
	cout << "l.size()=" << l.size() << endl;
	l.travel();
	l.erase(3);
	l.remove(2);
	l.travel();
	l.update(5,6);
	l.travel();
	cout << l.back() << endl;
	for(int i = 0 ; i< l.size(); i++){
		cout << l[i] << ',';	
	}
	cout << endl;
}
