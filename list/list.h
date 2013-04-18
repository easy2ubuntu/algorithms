/*
 * list.h
 *
 *  Created on: 2013-4-18
 *      Author: here
 */

#ifndef LIST_H_
#define LIST_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int number;
	struct node *next;
}node_s;

typedef struct list{
	node_s *head;
	int counts;
}list_s;


//初始化链表
void init_list(list_s *handle);

//新建一个节点
int	new_node(int data, node_s **packet);

//释放一个节点
int free_node(node_s *packet);

//插入一个节点
void insert_node(list_s *handle, node_s *packet);

//删除一个节点
int delete_node(list_s *handle, node_s **packet);

#endif /* LIST_H_ */
