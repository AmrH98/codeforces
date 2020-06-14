#!/bin/python3

import math
import os
import random
import re
import sys

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None

def print_singly_linked_list(node, sep, fptr):
    while node:
        fptr.write(str(node.data))

        node = node.next

        if node:
            fptr.write(sep)

# optimize runtime of program to O(1) by keeping an  extra pointer to tail

def insertNodeAtTail(head, data): 
    new_node = SinglyLinkedListNode(data)
    if head == None:               
        head = new_node # if none new node is head
    
    last_node = head #start iteration from first not till last by declaring last as head
    while (last_node.next): #not none
        last_node = last_node.next # 0>1>2>3>..None

    last_node.next = new_node #new_node is last

    return last_node
        

if __name__ == '__main__':
    
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    llist_count = int(input())

    llist = SinglyLinkedList()

    for i in range(llist_count):
        llist_item = int(input())
        llist_head = insertNodeAtTail(llist.head, llist_item)
        llist.head = llist_head

    print_singly_linked_list(llist.head, '\n', fptr)
    fptr.write('\n')

    fptr.close()
