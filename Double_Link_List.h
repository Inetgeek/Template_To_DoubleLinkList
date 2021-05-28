/*˫������A����*/
/*����������*/
/* Author : InetGeek(Ƚ�·�)��2021-04-20. @Copyright By InetGeek*/
#ifndef DoubleLinkList_H
#define DoubleLinkList_H

template< class NodeType > class Node;           /* �����ģ������ */
template< class NodeType > class DoubleLinkList; 	/* ˫��������ģ������ */

/***************************************************************/

template< class NodeType >	/* �����ʵ��ģ�嶨�� */
class Node
{
	friend class DoubleLinkList< NodeType >;     //����˫������Ϊ���Node��Ԫ�࣬�Է���������


	private :
		NodeType Data;	 //����ͨ������NodeType����
		Node<NodeType> *PreviousNode; //���ǰ��ָ��
		Node< NodeType > *NextNode;  //�����ָ��
	public :
		Node();						//���캯��������ʼ��
		Node( NodeType &Value );	//���ƹ��캯�����ڵ㸳ֵ
		~Node();       //�����������ͷŽ���ڴ�
};
/********************************************************/
template< class NodeType >	/* ˫��������ʵ��ģ�嶨�� */
class DoubleLinkList
{
	private :
	  Node< NodeType > *FirstNode;	 //˫������ͷ���ָ��
	  Node< NodeType > *RearNode;  //˫������ͷ���βָ��
	public :
		DoubleLinkList();	 //���캯���������ʼ��	
		//~DoubleLinkList();  //�����������ͷ������ڴ�
		bool IsEmpty();    //�ж���ϵ�������Ƿ�Ϊ�գ�Ϊ���򷵻�true
		void InsertAtRear( NodeType &Value );	//��������������ϵ�˽�� 
		void TraverseForward();	//��ǰ���������ϵ�˵绰��
		int FileWrite();	//����ϵ����Ϣ���浽�����ļ�
		int FileRead();	//�ӱ����ļ��ж�ȡ��ϵ�˵绰����Ϣ
		bool CompStr(char *, char *);	//��ϵ������ͨ���ƥ��
		void SearchByName(char *);	//ͨ������������ϵ��
		void SearchByIndex(int);	//ͨ����Ų�����ϵ��
		void DeleteByName(char *);	//ͨ������ɾ����ϵ��
		void DeleteByIndex(int);	//ͨ�����ɾ����ϵ��
		void UpdateByName(char *);	//ͨ������������ϵ�˲���������Ϣ
		void UpdateByIndex(int);	//ͨ����Ų�����ϵ�˲���������Ϣ
		int LenghtOfDoubleLinkList();	//�ж������ȣ����绰����ϵ������ 
		Node< NodeType > *CreateNode( NodeType &Value );	//���ɽ��ģ��
};
/*******************************************************/
#endif