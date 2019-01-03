#include<iostream>
#include<iomanip>
using namespace std;

struct stu
{
	int data;
	stu* next;
};

void prinf(stu* head);
void delNode(struct stu *head, int data);
int main()
{
	stu *head, *temp;
	temp = new stu;
	head = temp;
	while (1)
	{
		cin >> (*temp).data;
		if (temp->data != 0)
		{
			temp->next = new stu;

			temp = temp->next;
		}
		if (temp->data == 0)
		{
			temp->next = 0;

			break;
		}
	}//创建链表结束



	prinf(head);
	cout << "请输入要删的数字"<<endl;
	int num;
	cin >> num;
	delNode(head, num);
	
	system("pause");
}

void prinf(stu* head)
{
	cout << "打印链表"<<endl;
	stu *temp;
	int n = 1;
	temp = head;
	cout << endl;
	while (1)
	{
		if (temp->next != 0)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
		else break;
	}
}
void delNode(struct stu *head, int data)
{
	
	struct stu *p1, *p2;
	p2 = p1 = head;
	while (p1->next != NULL && p1->data != data)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (p1->data == data)
	{
		if (p1 == head)
			head = p1->next;
		else
			p2->next = p1->next;
	}
	else
		printf("Can not find list num.\n");
	prinf(head);


}
