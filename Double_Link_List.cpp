/*双向链表：A类题*/
/*主函数部分*/
/* Author : InetGeek(冉德发)，2021-04-20. @Copyright By InetGeek*/
/* </> Blog: https://www.digran.cn */
/**********************************************************************/
#include <iostream>
#include <conio.h> //控制台输入输出, 如getch()函数
#include <vector>	//vector即向量，即长度根据需要而自动改变的数组
#include <iomanip>	//输出格式化
#include <assert.h>	//宏，用于验证程序做出的假设，并在假设为假时输出诊断消息
#include <fstream>	//文件流
#include <cstdlib>	//字符串转换	
#include <algorithm>  //字符处理
#include <string>	//字符串
#include "Double_Link_List.h"	//自定义头文件，用于定义链表和结构体类
using namespace std;

/*定义联系人结构体，用于存储其姓名、年龄、电话等信息*/
struct friends
{
	int num;	//电话簿联系人序号
	char name[20];
	char tel[20];
	int age;
};

int main()
{
	DoubleLinkList< friends > List;
	friends Value;
	char SearchName[20];	//存储手动输入需要查找的联系人姓名数组
	int SearchNum;	//存储手动输入需要查找的联系人序号的整型变量
	int Option = 0, Option_2;	//操作数，Option控制主菜单，Option_2控制子菜单
	do
	{
		system("cls");	//清屏
		cout<<"*******************************************************\n"
			<<"\ttemplate双向链表实现电话簿管理系统\n"
			<<"-------------------------------------------------------\n"
			<<"\t作者：冉德发   学号：9201040G0332   难度：A\n"
			<<"*******************************************************\n"
			<<"\t\t\t主菜单MENU \n"
			<<"-------------------------------------------------------"
			<<"\n 1.) 新建联系人"
			<<"\n 2.) 查看所有联系人 "
			<<"\n 3.) 查看已保存联系人 "
			<<"\n 4.) 查找指定联系人"
			<<"\n 5.) 删除指定联系人 "
			<<"\n 6.) 修改指定联系人信息 "
			<<"\n 7.) 查看联系人数量 "
			<<"\n 8.) 退出程序 "
			<<"\n-------------------------------------------------------"
			<<"\n功能选择: ";
		cin>>Option;
		switch(Option)
			{
			case 1 :
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate双向链表实现电话簿管理系统\n"
						<<"-------------------------------------------------------\n"
						<<"\t作者：冉德发   学号：9201040G0332   难度：A\n"
						<<"*******************************************************\n"
						<<"\t\t\t新建联系人\n"
						<<"-------------------------------------------------------"
						<<"\n 输入联系人信息: \n";
					Value.num = List.LenghtOfDoubleLinkList()+1;
					cout << "姓名: ";
					cin>>Value.name;
					cout << "年龄: ";
					cin>>Value.age;
					cout << "电话: ";
					cin>>Value.tel;
					List.InsertAtRear(Value);
					List.FileWrite();
					break;
				}
			case 2 :
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate双向链表实现电话簿管理系统\n"
						<<"-------------------------------------------------------\n"
						<<"\t作者：冉德发   学号：9201040G0332   难度：A\n"
						<<"*******************************************************\n"
						<<"\t\t\t查看所有联系人\n"
						<<"-------------------------------------------------------"
						<<"\n 所有联系人信息如下: \n\n";
					List.TraverseForward();
					break;
				}
			case 3:
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate双向链表实现电话簿管理系统\n"
						<<"-------------------------------------------------------\n"
						<<"\t作者：冉德发   学号：9201040G0332   难度：A\n"
						<<"*******************************************************\n"
						<<"\t\t\t查看已保存联系人\n"
						<<"-------------------------------------------------------"
						<<"\n 所有联系人信息如下: \n\n";
					List.FileRead();
					break;
				}
			case 4 :
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate双向链表实现电话簿管理系统\n"
						<<"-------------------------------------------------------\n"
						<<"\t作者：冉德发   学号：9201040G0332   难度：A\n"
						<<"*******************************************************\n"
						<<"\t\t\t查找指定联系人\n"
						<<"-------------------------------------------------------"
						<<"\n1).按姓名查找  2).按序号查找\n"
						<<"输入选择(1/2): ";
					cin>>Option_2;
					if(Option_2==1){
						cout << "输入要查找的联系人姓名: ";
						cin >> SearchName;
						List.SearchByName(SearchName);	
					}
					if(Option_2==2){
						cout << "输入要查找的联系人序号: ";
						cin >> SearchNum;
						List.SearchByIndex(SearchNum);
					}
					break;
				}
			case 5 :
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate双向链表实现电话簿管理系统\n"
						<<"-------------------------------------------------------\n"
						<<"\t作者：冉德发   学号：9201040G0332   难度：A\n"
						<<"*******************************************************\n"
						<<"\t\t\t删除指定联系人\n"
						<<"-------------------------------------------------------"
						<<"\n1).按姓名删除  2).按序号删除\n"
						<<"输入选择(1/2): ";
					cin>>Option_2;
					if(Option_2==1){
						cout << "输入要删除的联系人姓名: ";
						cin >> SearchName;
						List.DeleteByName(SearchName);
						List.FileWrite();
						//system("pause");
					}
					if(Option_2==2){
						cout << "输入要删除的联系人序号: ";
						cin >> SearchNum;
						List.DeleteByIndex(SearchNum);
						List.FileWrite();
						//system("pause");
					}
					break;
				}
			case 6:
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate双向链表实现电话簿管理系统\n"
						<<"-------------------------------------------------------\n"
						<<"\t作者：冉德发   学号：9201040G0332   难度：A\n"
						<<"*******************************************************\n"
						<<"\t\t\t修改指定联系人信息\n"
						<<"-------------------------------------------------------"
						<<"\n1).按姓名修改  2).按序号修改\n"
						<<"输入选择(1/2): ";
					cin>>Option_2;
					if(Option_2==1){
						cout << "输入要修改的联系人姓名: ";
						cin >> SearchName;
						List.UpdateByName(SearchName);
						List.FileWrite();
						system("pause");
					}
					if(Option_2==2){
						cout << "输入要修改的联系人序号: ";
						cin >> SearchNum;
						List.UpdateByIndex(SearchNum);
						List.FileWrite();
						system("pause");
					}
					break;
				}

			case 7 :
				{
					system("cls");
					cout << "*******************************************************\n"
						 << "\ttemplate双向链表实现电话簿管理系统\n"
						 << "-------------------------------------------------------\n"
						 << "\t作者：冉德发   学号：9201040G0332   难度：A\n"
						 << "*******************************************************\n"
						 << "\t\t\t查看联系人数量\n"
						 << "-------------------------------------------------------";
					if(List.LenghtOfDoubleLinkList()>0){
						cout<< "\n联系人共有"
							<< List.LenghtOfDoubleLinkList() << "人！"
							<< "分别是:\n";
							List.FileRead();
					}
					else{
						cout << "没有联系人！" << endl;
						List.FileRead();
					}
					break;
				}
			case 8 :
				{
					system("exit"); 
				}
			default :
				{
					Option = 9;
					break;
				}
			}
		}
	while( Option != 9 );
	return 0;
}

template< class NodeType >		//构造函数，创建结点
Node< NodeType >::Node()
:Data( NULL ),NextNode( NULL ),PreviousNode( NULL ) {}


/**********************************************************************/
template< class NodeType >		//复制构造函数，创建联系人结点对象
Node< NodeType >::Node( NodeType &Value )
:Data( Value ),NextNode( NULL ),PreviousNode( NULL ) 
{
	//cout<<"\n A Node Created Successfully . ";	//debug专用
}


/**********************************************************************/
template< class NodeType >
Node< NodeType >::~Node()
{
	//cout<<"\n A Node Destroyed Successfully .";	//debug专用
}


/**********************************************************************/
template< class NodeType >		//构造函数，创建双向链表，用于存储电话簿
DoubleLinkList< NodeType >::DoubleLinkList()
:FirstNode( NULL ),RearNode( NULL )
{
	//cout<<"\n A Double Linked List Created Successfully .";	//debug专用
}


/**********************************************************************/
template< class NodeType >		//判断双向链表是否为空，为空则返回true
bool DoubleLinkList< NodeType >::IsEmpty()
{
	if( FirstNode == NULL )
		{
		return true;
		}
	else
		return false;
}


/**********************************************************************/
template< class NodeType >		//生成结点
Node< NodeType > *DoubleLinkList< NodeType >::CreateNode( NodeType &Value )
{
	Node< NodeType > *NewNode = new Node< NodeType >( Value );
	assert( NewNode != NULL ); //断言，判断新建结点是否为空，为空则返回结点。
	return NewNode ;
}


/**********************************************************************/
template< class NodeType >		//插入联系人结点，在双向链表节点上向后插入
void DoubleLinkList< NodeType >::InsertAtRear( NodeType &Value )
{
	Node< NodeType > *NewNode = CreateNode(Value);
	if ( IsEmpty() )
		{
		FirstNode = RearNode = NewNode ;
		}
	else
		{
		NewNode->PreviousNode = RearNode;
		RearNode->NextNode = NewNode;
		RearNode = NewNode;
		RearNode->NextNode = NULL;
		}
	cout<<"\n\n保存成功！保存的联系人信息如下:\n-------------------------------\n";
	cout<<RearNode->Data.name<<"  ";
	cout<<RearNode->Data.age<<"  ";
	cout<<RearNode->Data.tel<<"\n-------------------------------\n";
	system("pause");
}


/**********************************************************************/
template< class NodeType >		//正向遍历结点，找出全部联系人信息
void DoubleLinkList< NodeType >::TraverseForward()
{
	cout<<setiosflags(ios::left);
	cout<<setw(6)<<"序号"
		<<setw(14)<<"姓名"
		<<setw(6)<<"年龄"
		<<setw(18)<<"电话"<<endl;
	Node< NodeType > *CurrentNode = FirstNode ;
	while ( CurrentNode != NULL)
		{
			cout<<setiosflags(ios::left);
			cout<<setw(6)<<CurrentNode->Data.num
				<<setw(14)<<CurrentNode->Data.name
				<<setw(6)<<CurrentNode->Data.age
				<<setw(18)<<CurrentNode->Data.tel<<endl;
			CurrentNode = CurrentNode->NextNode;
		}
		cout << endl;
		system("pause");
}


/**********************************************************************/
template< class NodeType >		//求双向链表长度，即算出电话簿联系人总数
int DoubleLinkList< NodeType >::LenghtOfDoubleLinkList()
{
	int NosOfNodes = 0 ;
	Node< NodeType > *CurrentNode = FirstNode ;
	//cout<<"\n Mission : Traverse & Calculate The Number Of Nodes In A Double Linked List ."<<"\n The Double Linked List Follows : \n";
	while ( CurrentNode != NULL)
		{
		NosOfNodes++;
		CurrentNode = CurrentNode->NextNode;
		}
	return NosOfNodes;	//返回链表长度
}


/**********************************************************************/
template< class NodeType >		//将所有联系人信息存入本地文件
int DoubleLinkList< NodeType >::FileWrite()
{
	ofstream freindsfile("friends.txt");
    Node< NodeType > *CurrentNode = FirstNode ;
	if (freindsfile.is_open()){
		freindsfile <<setiosflags(ios::left);
		freindsfile	<<setw(6)<<"序号"
					<<setw(14)<<"姓名"
					<<setw(6)<<"年龄"
					<<setw(18)<<"电话"<<endl;
	}
	while ( CurrentNode != NULL)
	{
		if (freindsfile.is_open())
    	{
			freindsfile <<setiosflags(ios::left);
			freindsfile <<setw(6)<<CurrentNode->Data.num
						<<setw(14)<<CurrentNode->Data.name
						<<setw(6)<<CurrentNode->Data.age
						<<setw(18)<<CurrentNode->Data.tel<<endl;
		}
		CurrentNode = CurrentNode->NextNode;
    }
	freindsfile.close();
    return 0;
}


/**********************************************************************/
template< class NodeType >		//从本地文件中读取所有联系人信息
int DoubleLinkList< NodeType >::FileRead()
{
	 char buffer[256];
    ifstream freindsfile("friends.txt");
    if (! freindsfile.is_open())
    {
        cout << "打开文件错误！"; exit (1);
    }
    while (!freindsfile.eof())	//判断是否已到文末
    {
        freindsfile.getline(buffer,100);	//从缓冲区读取长度不超过100的字符串并拷贝到buffer数组
        cout<<buffer<< endl;
    }
	cout << endl;
	system("pause");
    return 0;
}


/**********************************************************************/
template< class NodeType >		//电话簿联系人与查找联系人名字的小写转换与通配符匹配
bool DoubleLinkList< NodeType >::CompStr(char *friend_name, char *search_name)	//传参分别是电话簿联系人姓名和手动输入的姓名
{
	int i = 0;
	string str_1 = friend_name, str_2 = search_name;		//电话簿联系人与查找联系人名字的小写转换
	transform(str_1.begin(),str_1.end(),str_1.begin(),::tolower);	//通过容器进行遍历，通过内置函数transform将字符转换成小写
	transform(str_2.begin(),str_2.end(),str_2.begin(),::tolower);	//通过容器进行遍历，通过内置函数transform将字符转换成小写
	//电话簿联系人与查找联系人名字通配符匹配
	while(str_1[i]&&str_2[i]){
		if(str_2[i]=='*') //匹配*符号，若为*则返回真
			return true;
		if(str_1[i]!=str_2[i]&&str_2[i]!='?')	//匹配字符?，若遇到?则认为为真
			return false;
		i++;
	}
	if(str_1[i]==str_2[i])
		return true;
	else
		return false;
}


/*********************************************************************/
template< class NodeType >		//按姓名查找联系人
void DoubleLinkList< NodeType >::SearchByName(char *search_name)	//传参为手动输入的联系人姓名
{
	Node< NodeType > *CurrentNode = FirstNode ;
	while ( CurrentNode != NULL)
		{
			if(CompStr(CurrentNode->Data.name,search_name)){
				cout<<setiosflags(ios::left);
				cout << "已找到！联系人信息如下: \n";
				cout<<setw(6)<<"序号"
					<<setw(14)<<"姓名"
					<<setw(6)<<"年龄"
					<<setw(18)<<"电话"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				break;
			}
		CurrentNode = CurrentNode->NextNode;
		}
	system("pause");
}


/*********************************************************************/
template< class NodeType >		//按序号查找联系人
void DoubleLinkList< NodeType >::SearchByIndex(int SearchNum)	//传参为手动输入的联系人的序号
{
	Node< NodeType > *CurrentNode = FirstNode ;
	while ( CurrentNode != NULL)
		{
			if(CurrentNode->Data.num==SearchNum){
				cout<<setiosflags(ios::left);
				cout << "已找到！联系人信息如下: \n";
				cout<<setw(6)<<"序号"
					<<setw(14)<<"姓名"
					<<setw(6)<<"年龄"
					<<setw(18)<<"电话"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				break;
			}
		CurrentNode = CurrentNode->NextNode;
		}
	system("pause");
}


/*********************************************************************/
template< class NodeType >		//按姓名删除联系人
void DoubleLinkList< NodeType >::DeleteByName(char *search_name)	//传参为手动输入的联系人的姓名
{
	Node< NodeType > *CurrentNode = FirstNode,*TempNode,*TEmpNode, *DeleteFirst, *DeleteRear;
	int flag = 0;
	while ( CurrentNode != NULL)
		{
			if(CompStr(CurrentNode->Data.name,search_name)){
				cout << "原有联系人信息:\n";
				cout<<setiosflags(ios::left);
				cout<<setw(6)<<"序号"
					<<setw(14)<<"姓名"
					<<setw(6)<<"年龄"
					<<setw(18)<<"电话"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				cout << "确认删除吗？(Y/N): ";
				char input;
				cin>>input;
				if(input=='Y'||input=='y'){
					if(CurrentNode == FirstNode){
						DeleteFirst = FirstNode;
						flag = 1;
						//cout << "为首结点！";		//DEBUG
					}
					if(CurrentNode == RearNode){
						DeleteRear = RearNode;
						//cout << "为尾结点！";
						flag = 2;
						//cout << "是rearnode,数据是:" << RearNode->Data.name;		//DEBUG
					}
					if(CurrentNode != FirstNode&&CurrentNode != RearNode){
						TempNode = CurrentNode ;
						CurrentNode = CurrentNode->NextNode ;
						CurrentNode->PreviousNode = TempNode->PreviousNode ;
						TEmpNode = TempNode->PreviousNode ;
						TEmpNode->NextNode = CurrentNode ;
						delete TempNode;
						cout << "删除成功！";
					}
				}
			if(input!='Y'||input!='y')	break;
			}
			CurrentNode = CurrentNode->NextNode;
		}
	if(flag == 1){
		FirstNode = FirstNode->NextNode;
		FirstNode->PreviousNode = NULL;
		delete DeleteFirst;
		cout << "删除成功！";
		//return;
	}
	if(flag == 2){
		RearNode = RearNode->PreviousNode;
		RearNode->NextNode = NULL;
		delete DeleteRear;
		//return;
	}
	system("pause");
}


/*********************************************************************/
template< class NodeType >
void DoubleLinkList< NodeType >::DeleteByIndex(int SearchNum)	//传参为手动输入的联系人的序号
{
	Node< NodeType > *CurrentNode = FirstNode,*TempNode,*TEmpNode, *DeleteFirst, *DeleteRear;
	int flag = 0;
	while ( CurrentNode != NULL)
		{
			if(CurrentNode->Data.num==SearchNum){
				cout << "原有联系人信息:\n";
				cout<<setiosflags(ios::left);
				cout<<setw(6)<<"序号"
					<<setw(14)<<"姓名"
					<<setw(6)<<"年龄"
					<<setw(18)<<"电话"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				cout << "确认删除吗？(Y/N): ";
				char input;
				cin>>input;
				if(input=='Y'||input=='y'){
					if(CurrentNode == FirstNode){
						DeleteFirst = FirstNode;
						flag = 1;
						//cout << "为首结点！";
					}
					if(CurrentNode == RearNode){
						DeleteRear = RearNode;
						//cout << "为尾结点！";
						flag = 2;
						//cout << "是rearnode,数据是:" << RearNode->Data.name;
					}
					if(CurrentNode != FirstNode&&CurrentNode != RearNode){
						TempNode = CurrentNode ;
						CurrentNode = CurrentNode->NextNode ;
						CurrentNode->PreviousNode = TempNode->PreviousNode ;
						TEmpNode = TempNode->PreviousNode ;
						TEmpNode->NextNode = CurrentNode ;
						delete TempNode;
						cout << "删除成功！";
					}
				}
			if(input!='Y'||input!='y')	break;
			}
			CurrentNode = CurrentNode->NextNode;
		}
	if(flag == 1){
		FirstNode = FirstNode->NextNode;
		FirstNode->PreviousNode = NULL;
		delete DeleteFirst;
		cout << "删除成功！";
		//return;
	}
	if(flag == 2){
		RearNode = RearNode->PreviousNode;
		RearNode->NextNode = NULL;
		delete DeleteRear;
		//return;
	}
	system("pause");
}


/*********************************************************************/
template< class NodeType >
void DoubleLinkList< NodeType >::UpdateByName(char *search_name)	//传参为手动输入的联系人的姓名
{
	Node< NodeType > *CurrentNode = FirstNode;
	while ( CurrentNode != NULL)
		{
			if(CompStr(CurrentNode->Data.name,search_name)){
				cout << "原有联系人信息:\n";
				cout<<setiosflags(ios::left);
				cout<<setw(6)<<"序号"
					<<setw(14)<<"姓名"
					<<setw(6)<<"年龄"
					<<setw(18)<<"电话"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				cout << "确认更改吗？(Y/N): ";
				char input;
				cin>>input;
				if(input=='Y'||input=='y'){
					cout<<"姓名: ";
					cin>>CurrentNode->Data.name;
					cout<<"\n年龄: ";
					cin>>CurrentNode->Data.age;
					cout<<"\n电话: ";
					cin >> CurrentNode->Data.tel;
					cout << "\n修改成功！更改后信息: \n";
					cout<<setiosflags(ios::left);
					cout<<setw(6)<<"序号"
						<<setw(14)<<"姓名"
						<<setw(6)<<"年龄"
						<<setw(18)<<"电话"<<endl;
					cout<<setw(6)<<CurrentNode->Data.num
						<<setw(14)<<CurrentNode->Data.name
						<<setw(6)<<CurrentNode->Data.age
						<<setw(18)<<CurrentNode->Data.tel<<endl;
				}
			if(input!='Y'||input!='y')	break;
			}
			CurrentNode = CurrentNode->NextNode;
		}
}


/*********************************************************************/
template< class NodeType >
void DoubleLinkList< NodeType >::UpdateByIndex(int SearchNum)	//传参为手动输入的联系人的序号
{
	Node< NodeType > *CurrentNode = FirstNode;
	while ( CurrentNode != NULL)
		{
			if(CurrentNode->Data.num==SearchNum){
				cout << "原有联系人信息:\n";
				cout<<setiosflags(ios::left);
				cout<<setw(6)<<"序号"
					<<setw(14)<<"姓名"
					<<setw(6)<<"年龄"
					<<setw(18)<<"电话"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				cout << "确认更改吗？(Y/N): ";
				char input;
				cin>>input;
				if(input=='Y'||input=='y'){
					cout<<"姓名: ";
					cin>>CurrentNode->Data.name;
					cout<<"\n年龄: ";
					cin>>CurrentNode->Data.age;
					cout<<"\n电话: ";
					cin >> CurrentNode->Data.tel;
					cout << "\n修改成功！更改后信息: \n";
					cout<<setiosflags(ios::left);
					cout<<setw(6)<<"序号"
						<<setw(14)<<"姓名"
						<<setw(6)<<"年龄"
						<<setw(18)<<"电话"<<endl;
					cout<<setw(6)<<CurrentNode->Data.num
						<<setw(14)<<CurrentNode->Data.name
						<<setw(6)<<CurrentNode->Data.age
						<<setw(18)<<CurrentNode->Data.tel<<endl;
				}
			if(input!='Y'||input!='y')	break;
			}
			CurrentNode = CurrentNode->NextNode;
		}
}
/**************************Coding End****************************/