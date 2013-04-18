/*
 * list.c
 *
 *  Created on: 2013-4-18
 *      Author: here
 */

#include "list.h"


//初始化链表
void init_list(list_s *handle){
	handle->counts = 0;
	handle->head = NULL;
	return;
}

//新建一个节点
int	new_node(int data, node_s **packet){
	packet = NULL;
	packet = malloc(sizeof(node_s));
	if(!packet){
		return -1;
	}

	packet->number = data;
	packet->next = NULL;

	return 0;
}

//释放一个节点
int free_node(node_s *packet){
	free(packet);

	return 0;
}

//插入一个节点
void insert_node(list_s *handle, node_s *packet){
	node_s *tmp;
	tmp = handle->head;
	while(tm)
}


//删除一个节点
int delete_node(list_s *handle, node_s **packet){

}
