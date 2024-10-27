#include "AccountList.h"


AccountList::AccountList(){}

AccountList::Account *merge(Account *first, Account *second) {
    if (first == nullptr) return second;
    if (second == nullptr) return first;

    if (first->value <= second->value) {
        first->next = merge(first->next, second);
        return first;
    } else {
        second->next = merge(first, second->next);
        return second;
    }
}

AccountList::Account *MergeSort(Account *head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    // لیست رو به دو قسمت تقسیم می‌کنیم
    Node *second = split(head);

    // هر قسمت رو به‌صورت بازگشتی مرتب می‌کنیم
    head = MergeSort(head);
    second = MergeSort(second);

    // دو قسمت مرتب شده رو ادغام می‌کنیم
    return merge(head, second);
}
void AccountList::print()
{
    Account* current = head;
    for (size_t i = 0; i < size; i++)
    {
        current->print();
        current = current->next;
    }
}