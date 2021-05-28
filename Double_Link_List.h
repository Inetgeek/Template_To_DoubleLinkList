/*双向链表：A类题*/
/*主函数部分*/
/* Author : InetGeek，2021-04-20. @Copyright By InetGeek*/
#ifndef DoubleLinkList_H
#define DoubleLinkList_H

template< class NodeType > class Node;           /* 结点类模板声明 */
template< class NodeType > class DoubleLinkList; 	/* 双向链表类模板声明 */

/***************************************************************/

template< class NodeType >	/* 结点类实现模板定义 */
class Node
{
	friend class DoubleLinkList< NodeType >;     //声明双向链表为结点Node友元类，以访问其数据


	private :
		NodeType Data;	 //定义通用类型NodeType对象
		Node<NodeType> *PreviousNode; //结点前驱指针
		Node< NodeType > *NextNode;  //结点后继指针
	public :
		Node();						//构造函数，结点初始化
		Node( NodeType &Value );	//复制构造函数，节点赋值
		~Node();       //析构函数，释放结点内存
};
/********************************************************/
template< class NodeType >	/* 双向链表类实现模板定义 */
class DoubleLinkList
{
	private :
	  Node< NodeType > *FirstNode;	 //双向链表头结点指针
	  Node< NodeType > *RearNode;  //双向链表头结点尾指针
	public :
		DoubleLinkList();	 //构造函数，链表初始化	
		//~DoubleLinkList();  //析构函数，释放链表内存
		bool IsEmpty();    //判断联系人链表是否为空，为空则返回true
		void InsertAtRear( NodeType &Value );	//链表上向后插入联系人结点 
		void TraverseForward();	//从前往后遍历联系人电话簿
		int FileWrite();	//将联系人信息保存到本地文件
		int FileRead();	//从本地文件中读取联系人电话簿信息
		bool CompStr(char *, char *);	//联系人姓名通配符匹配
		void SearchByName(char *);	//通过姓名查找联系人
		void SearchByIndex(int);	//通过序号查找联系人
		void DeleteByName(char *);	//通过姓名删除联系人
		void DeleteByIndex(int);	//通过序号删除联系人
		void UpdateByName(char *);	//通过姓名查找联系人并更改其信息
		void UpdateByIndex(int);	//通过序号查找联系人并更改其信息
		int LenghtOfDoubleLinkList();	//判断链表长度，即电话簿联系人总数 
		Node< NodeType > *CreateNode( NodeType &Value );	//生成结点模板
};
/*******************************************************/
#endif
