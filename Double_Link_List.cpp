/*˫������A����*/
/*����������*/
/* Author : InetGeek(Ƚ�·�)��2021-04-20. @Copyright By InetGeek*/
/* </> Blog: https://www.digran.cn */
/**********************************************************************/
#include <iostream>
#include <conio.h> //����̨�������, ��getch()����
#include <vector>	//vector�������������ȸ�����Ҫ���Զ��ı������
#include <iomanip>	//�����ʽ��
#include <assert.h>	//�꣬������֤���������ļ��裬���ڼ���Ϊ��ʱ��������Ϣ
#include <fstream>	//�ļ���
#include <cstdlib>	//�ַ���ת��	
#include <algorithm>  //�ַ�����
#include <string>	//�ַ���
#include "Double_Link_List.h"	//�Զ���ͷ�ļ������ڶ�������ͽṹ����
using namespace std;

/*������ϵ�˽ṹ�壬���ڴ洢�����������䡢�绰����Ϣ*/
struct friends
{
	int num;	//�绰����ϵ�����
	char name[20];
	char tel[20];
	int age;
};

int main()
{
	DoubleLinkList< friends > List;
	friends Value;
	char SearchName[20];	//�洢�ֶ�������Ҫ���ҵ���ϵ����������
	int SearchNum;	//�洢�ֶ�������Ҫ���ҵ���ϵ����ŵ����ͱ���
	int Option = 0, Option_2;	//��������Option�������˵���Option_2�����Ӳ˵�
	do
	{
		system("cls");	//����
		cout<<"*******************************************************\n"
			<<"\ttemplate˫������ʵ�ֵ绰������ϵͳ\n"
			<<"-------------------------------------------------------\n"
			<<"\t���ߣ�Ƚ�·�   ѧ�ţ�9201040G0332   �Ѷȣ�A\n"
			<<"*******************************************************\n"
			<<"\t\t\t���˵�MENU \n"
			<<"-------------------------------------------------------"
			<<"\n 1.) �½���ϵ��"
			<<"\n 2.) �鿴������ϵ�� "
			<<"\n 3.) �鿴�ѱ�����ϵ�� "
			<<"\n 4.) ����ָ����ϵ��"
			<<"\n 5.) ɾ��ָ����ϵ�� "
			<<"\n 6.) �޸�ָ����ϵ����Ϣ "
			<<"\n 7.) �鿴��ϵ������ "
			<<"\n 8.) �˳����� "
			<<"\n-------------------------------------------------------"
			<<"\n����ѡ��: ";
		cin>>Option;
		switch(Option)
			{
			case 1 :
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate˫������ʵ�ֵ绰������ϵͳ\n"
						<<"-------------------------------------------------------\n"
						<<"\t���ߣ�Ƚ�·�   ѧ�ţ�9201040G0332   �Ѷȣ�A\n"
						<<"*******************************************************\n"
						<<"\t\t\t�½���ϵ��\n"
						<<"-------------------------------------------------------"
						<<"\n ������ϵ����Ϣ: \n";
					Value.num = List.LenghtOfDoubleLinkList()+1;
					cout << "����: ";
					cin>>Value.name;
					cout << "����: ";
					cin>>Value.age;
					cout << "�绰: ";
					cin>>Value.tel;
					List.InsertAtRear(Value);
					List.FileWrite();
					break;
				}
			case 2 :
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate˫������ʵ�ֵ绰������ϵͳ\n"
						<<"-------------------------------------------------------\n"
						<<"\t���ߣ�Ƚ�·�   ѧ�ţ�9201040G0332   �Ѷȣ�A\n"
						<<"*******************************************************\n"
						<<"\t\t\t�鿴������ϵ��\n"
						<<"-------------------------------------------------------"
						<<"\n ������ϵ����Ϣ����: \n\n";
					List.TraverseForward();
					break;
				}
			case 3:
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate˫������ʵ�ֵ绰������ϵͳ\n"
						<<"-------------------------------------------------------\n"
						<<"\t���ߣ�Ƚ�·�   ѧ�ţ�9201040G0332   �Ѷȣ�A\n"
						<<"*******************************************************\n"
						<<"\t\t\t�鿴�ѱ�����ϵ��\n"
						<<"-------------------------------------------------------"
						<<"\n ������ϵ����Ϣ����: \n\n";
					List.FileRead();
					break;
				}
			case 4 :
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate˫������ʵ�ֵ绰������ϵͳ\n"
						<<"-------------------------------------------------------\n"
						<<"\t���ߣ�Ƚ�·�   ѧ�ţ�9201040G0332   �Ѷȣ�A\n"
						<<"*******************************************************\n"
						<<"\t\t\t����ָ����ϵ��\n"
						<<"-------------------------------------------------------"
						<<"\n1).����������  2).����Ų���\n"
						<<"����ѡ��(1/2): ";
					cin>>Option_2;
					if(Option_2==1){
						cout << "����Ҫ���ҵ���ϵ������: ";
						cin >> SearchName;
						List.SearchByName(SearchName);	
					}
					if(Option_2==2){
						cout << "����Ҫ���ҵ���ϵ�����: ";
						cin >> SearchNum;
						List.SearchByIndex(SearchNum);
					}
					break;
				}
			case 5 :
				{
					system("cls");
					cout<<"*******************************************************\n"
						<<"\ttemplate˫������ʵ�ֵ绰������ϵͳ\n"
						<<"-------------------------------------------------------\n"
						<<"\t���ߣ�Ƚ�·�   ѧ�ţ�9201040G0332   �Ѷȣ�A\n"
						<<"*******************************************************\n"
						<<"\t\t\tɾ��ָ����ϵ��\n"
						<<"-------------------------------------------------------"
						<<"\n1).������ɾ��  2).�����ɾ��\n"
						<<"����ѡ��(1/2): ";
					cin>>Option_2;
					if(Option_2==1){
						cout << "����Ҫɾ������ϵ������: ";
						cin >> SearchName;
						List.DeleteByName(SearchName);
						List.FileWrite();
						//system("pause");
					}
					if(Option_2==2){
						cout << "����Ҫɾ������ϵ�����: ";
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
						<<"\ttemplate˫������ʵ�ֵ绰������ϵͳ\n"
						<<"-------------------------------------------------------\n"
						<<"\t���ߣ�Ƚ�·�   ѧ�ţ�9201040G0332   �Ѷȣ�A\n"
						<<"*******************************************************\n"
						<<"\t\t\t�޸�ָ����ϵ����Ϣ\n"
						<<"-------------------------------------------------------"
						<<"\n1).�������޸�  2).������޸�\n"
						<<"����ѡ��(1/2): ";
					cin>>Option_2;
					if(Option_2==1){
						cout << "����Ҫ�޸ĵ���ϵ������: ";
						cin >> SearchName;
						List.UpdateByName(SearchName);
						List.FileWrite();
						system("pause");
					}
					if(Option_2==2){
						cout << "����Ҫ�޸ĵ���ϵ�����: ";
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
						 << "\ttemplate˫������ʵ�ֵ绰������ϵͳ\n"
						 << "-------------------------------------------------------\n"
						 << "\t���ߣ�Ƚ�·�   ѧ�ţ�9201040G0332   �Ѷȣ�A\n"
						 << "*******************************************************\n"
						 << "\t\t\t�鿴��ϵ������\n"
						 << "-------------------------------------------------------";
					if(List.LenghtOfDoubleLinkList()>0){
						cout<< "\n��ϵ�˹���"
							<< List.LenghtOfDoubleLinkList() << "�ˣ�"
							<< "�ֱ���:\n";
							List.FileRead();
					}
					else{
						cout << "û����ϵ�ˣ�" << endl;
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

template< class NodeType >		//���캯�����������
Node< NodeType >::Node()
:Data( NULL ),NextNode( NULL ),PreviousNode( NULL ) {}


/**********************************************************************/
template< class NodeType >		//���ƹ��캯����������ϵ�˽�����
Node< NodeType >::Node( NodeType &Value )
:Data( Value ),NextNode( NULL ),PreviousNode( NULL ) 
{
	//cout<<"\n A Node Created Successfully . ";	//debugר��
}


/**********************************************************************/
template< class NodeType >
Node< NodeType >::~Node()
{
	//cout<<"\n A Node Destroyed Successfully .";	//debugר��
}


/**********************************************************************/
template< class NodeType >		//���캯��������˫���������ڴ洢�绰��
DoubleLinkList< NodeType >::DoubleLinkList()
:FirstNode( NULL ),RearNode( NULL )
{
	//cout<<"\n A Double Linked List Created Successfully .";	//debugר��
}


/**********************************************************************/
template< class NodeType >		//�ж�˫�������Ƿ�Ϊ�գ�Ϊ���򷵻�true
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
template< class NodeType >		//���ɽ��
Node< NodeType > *DoubleLinkList< NodeType >::CreateNode( NodeType &Value )
{
	Node< NodeType > *NewNode = new Node< NodeType >( Value );
	assert( NewNode != NULL ); //���ԣ��ж��½�����Ƿ�Ϊ�գ�Ϊ���򷵻ؽ�㡣
	return NewNode ;
}


/**********************************************************************/
template< class NodeType >		//������ϵ�˽�㣬��˫������ڵ���������
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
	cout<<"\n\n����ɹ����������ϵ����Ϣ����:\n-------------------------------\n";
	cout<<RearNode->Data.name<<"  ";
	cout<<RearNode->Data.age<<"  ";
	cout<<RearNode->Data.tel<<"\n-------------------------------\n";
	system("pause");
}


/**********************************************************************/
template< class NodeType >		//���������㣬�ҳ�ȫ����ϵ����Ϣ
void DoubleLinkList< NodeType >::TraverseForward()
{
	cout<<setiosflags(ios::left);
	cout<<setw(6)<<"���"
		<<setw(14)<<"����"
		<<setw(6)<<"����"
		<<setw(18)<<"�绰"<<endl;
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
template< class NodeType >		//��˫�������ȣ�������绰����ϵ������
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
	return NosOfNodes;	//����������
}


/**********************************************************************/
template< class NodeType >		//��������ϵ����Ϣ���뱾���ļ�
int DoubleLinkList< NodeType >::FileWrite()
{
	ofstream freindsfile("friends.txt");
    Node< NodeType > *CurrentNode = FirstNode ;
	if (freindsfile.is_open()){
		freindsfile <<setiosflags(ios::left);
		freindsfile	<<setw(6)<<"���"
					<<setw(14)<<"����"
					<<setw(6)<<"����"
					<<setw(18)<<"�绰"<<endl;
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
template< class NodeType >		//�ӱ����ļ��ж�ȡ������ϵ����Ϣ
int DoubleLinkList< NodeType >::FileRead()
{
	 char buffer[256];
    ifstream freindsfile("friends.txt");
    if (! freindsfile.is_open())
    {
        cout << "���ļ�����"; exit (1);
    }
    while (!freindsfile.eof())	//�ж��Ƿ��ѵ���ĩ
    {
        freindsfile.getline(buffer,100);	//�ӻ�������ȡ���Ȳ�����100���ַ�����������buffer����
        cout<<buffer<< endl;
    }
	cout << endl;
	system("pause");
    return 0;
}


/**********************************************************************/
template< class NodeType >		//�绰����ϵ���������ϵ�����ֵ�Сдת����ͨ���ƥ��
bool DoubleLinkList< NodeType >::CompStr(char *friend_name, char *search_name)	//���ηֱ��ǵ绰����ϵ���������ֶ����������
{
	int i = 0;
	string str_1 = friend_name, str_2 = search_name;		//�绰����ϵ���������ϵ�����ֵ�Сдת��
	transform(str_1.begin(),str_1.end(),str_1.begin(),::tolower);	//ͨ���������б�����ͨ�����ú���transform���ַ�ת����Сд
	transform(str_2.begin(),str_2.end(),str_2.begin(),::tolower);	//ͨ���������б�����ͨ�����ú���transform���ַ�ת����Сд
	//�绰����ϵ���������ϵ������ͨ���ƥ��
	while(str_1[i]&&str_2[i]){
		if(str_2[i]=='*') //ƥ��*���ţ���Ϊ*�򷵻���
			return true;
		if(str_1[i]!=str_2[i]&&str_2[i]!='?')	//ƥ���ַ�?��������?����ΪΪ��
			return false;
		i++;
	}
	if(str_1[i]==str_2[i])
		return true;
	else
		return false;
}


/*********************************************************************/
template< class NodeType >		//������������ϵ��
void DoubleLinkList< NodeType >::SearchByName(char *search_name)	//����Ϊ�ֶ��������ϵ������
{
	Node< NodeType > *CurrentNode = FirstNode ;
	while ( CurrentNode != NULL)
		{
			if(CompStr(CurrentNode->Data.name,search_name)){
				cout<<setiosflags(ios::left);
				cout << "���ҵ�����ϵ����Ϣ����: \n";
				cout<<setw(6)<<"���"
					<<setw(14)<<"����"
					<<setw(6)<<"����"
					<<setw(18)<<"�绰"<<endl;
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
template< class NodeType >		//����Ų�����ϵ��
void DoubleLinkList< NodeType >::SearchByIndex(int SearchNum)	//����Ϊ�ֶ��������ϵ�˵����
{
	Node< NodeType > *CurrentNode = FirstNode ;
	while ( CurrentNode != NULL)
		{
			if(CurrentNode->Data.num==SearchNum){
				cout<<setiosflags(ios::left);
				cout << "���ҵ�����ϵ����Ϣ����: \n";
				cout<<setw(6)<<"���"
					<<setw(14)<<"����"
					<<setw(6)<<"����"
					<<setw(18)<<"�绰"<<endl;
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
template< class NodeType >		//������ɾ����ϵ��
void DoubleLinkList< NodeType >::DeleteByName(char *search_name)	//����Ϊ�ֶ��������ϵ�˵�����
{
	Node< NodeType > *CurrentNode = FirstNode,*TempNode,*TEmpNode, *DeleteFirst, *DeleteRear;
	int flag = 0;
	while ( CurrentNode != NULL)
		{
			if(CompStr(CurrentNode->Data.name,search_name)){
				cout << "ԭ����ϵ����Ϣ:\n";
				cout<<setiosflags(ios::left);
				cout<<setw(6)<<"���"
					<<setw(14)<<"����"
					<<setw(6)<<"����"
					<<setw(18)<<"�绰"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				cout << "ȷ��ɾ����(Y/N): ";
				char input;
				cin>>input;
				if(input=='Y'||input=='y'){
					if(CurrentNode == FirstNode){
						DeleteFirst = FirstNode;
						flag = 1;
						//cout << "Ϊ�׽�㣡";		//DEBUG
					}
					if(CurrentNode == RearNode){
						DeleteRear = RearNode;
						//cout << "Ϊβ��㣡";
						flag = 2;
						//cout << "��rearnode,������:" << RearNode->Data.name;		//DEBUG
					}
					if(CurrentNode != FirstNode&&CurrentNode != RearNode){
						TempNode = CurrentNode ;
						CurrentNode = CurrentNode->NextNode ;
						CurrentNode->PreviousNode = TempNode->PreviousNode ;
						TEmpNode = TempNode->PreviousNode ;
						TEmpNode->NextNode = CurrentNode ;
						delete TempNode;
						cout << "ɾ���ɹ���";
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
		cout << "ɾ���ɹ���";
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
void DoubleLinkList< NodeType >::DeleteByIndex(int SearchNum)	//����Ϊ�ֶ��������ϵ�˵����
{
	Node< NodeType > *CurrentNode = FirstNode,*TempNode,*TEmpNode, *DeleteFirst, *DeleteRear;
	int flag = 0;
	while ( CurrentNode != NULL)
		{
			if(CurrentNode->Data.num==SearchNum){
				cout << "ԭ����ϵ����Ϣ:\n";
				cout<<setiosflags(ios::left);
				cout<<setw(6)<<"���"
					<<setw(14)<<"����"
					<<setw(6)<<"����"
					<<setw(18)<<"�绰"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				cout << "ȷ��ɾ����(Y/N): ";
				char input;
				cin>>input;
				if(input=='Y'||input=='y'){
					if(CurrentNode == FirstNode){
						DeleteFirst = FirstNode;
						flag = 1;
						//cout << "Ϊ�׽�㣡";
					}
					if(CurrentNode == RearNode){
						DeleteRear = RearNode;
						//cout << "Ϊβ��㣡";
						flag = 2;
						//cout << "��rearnode,������:" << RearNode->Data.name;
					}
					if(CurrentNode != FirstNode&&CurrentNode != RearNode){
						TempNode = CurrentNode ;
						CurrentNode = CurrentNode->NextNode ;
						CurrentNode->PreviousNode = TempNode->PreviousNode ;
						TEmpNode = TempNode->PreviousNode ;
						TEmpNode->NextNode = CurrentNode ;
						delete TempNode;
						cout << "ɾ���ɹ���";
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
		cout << "ɾ���ɹ���";
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
void DoubleLinkList< NodeType >::UpdateByName(char *search_name)	//����Ϊ�ֶ��������ϵ�˵�����
{
	Node< NodeType > *CurrentNode = FirstNode;
	while ( CurrentNode != NULL)
		{
			if(CompStr(CurrentNode->Data.name,search_name)){
				cout << "ԭ����ϵ����Ϣ:\n";
				cout<<setiosflags(ios::left);
				cout<<setw(6)<<"���"
					<<setw(14)<<"����"
					<<setw(6)<<"����"
					<<setw(18)<<"�绰"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				cout << "ȷ�ϸ�����(Y/N): ";
				char input;
				cin>>input;
				if(input=='Y'||input=='y'){
					cout<<"����: ";
					cin>>CurrentNode->Data.name;
					cout<<"\n����: ";
					cin>>CurrentNode->Data.age;
					cout<<"\n�绰: ";
					cin >> CurrentNode->Data.tel;
					cout << "\n�޸ĳɹ������ĺ���Ϣ: \n";
					cout<<setiosflags(ios::left);
					cout<<setw(6)<<"���"
						<<setw(14)<<"����"
						<<setw(6)<<"����"
						<<setw(18)<<"�绰"<<endl;
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
void DoubleLinkList< NodeType >::UpdateByIndex(int SearchNum)	//����Ϊ�ֶ��������ϵ�˵����
{
	Node< NodeType > *CurrentNode = FirstNode;
	while ( CurrentNode != NULL)
		{
			if(CurrentNode->Data.num==SearchNum){
				cout << "ԭ����ϵ����Ϣ:\n";
				cout<<setiosflags(ios::left);
				cout<<setw(6)<<"���"
					<<setw(14)<<"����"
					<<setw(6)<<"����"
					<<setw(18)<<"�绰"<<endl;
				cout<<setw(6)<<CurrentNode->Data.num
					<<setw(14)<<CurrentNode->Data.name
					<<setw(6)<<CurrentNode->Data.age
					<<setw(18)<<CurrentNode->Data.tel<<endl;
				cout << "ȷ�ϸ�����(Y/N): ";
				char input;
				cin>>input;
				if(input=='Y'||input=='y'){
					cout<<"����: ";
					cin>>CurrentNode->Data.name;
					cout<<"\n����: ";
					cin>>CurrentNode->Data.age;
					cout<<"\n�绰: ";
					cin >> CurrentNode->Data.tel;
					cout << "\n�޸ĳɹ������ĺ���Ϣ: \n";
					cout<<setiosflags(ios::left);
					cout<<setw(6)<<"���"
						<<setw(14)<<"����"
						<<setw(6)<<"����"
						<<setw(18)<<"�绰"<<endl;
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