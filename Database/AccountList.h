#pragma once
#include "Account.h"


class AccountList
{
public:
    Account *merge(Account *first, Account *second);
    Account *MergeSort(Account *head);
	AccountList();
	AccountList(Account* _head);
	Account* getHead()const;
	void addAccount(Account* _accountToAdd);

	/* find element number i */
	Account& at(int i);

	/* sort by account uniqe id */
	void sort();

	/* search by the account uniqe id*/
	Account search(int _uniqeId);

	/*search by accout username*/
	void search(std::string _username);
	
	void swap(Account& acc1, Account& acc2);
	void print();
private:
	Account* head;
	int size;
};



