#include<iostream>

struct Info {
    char name[16];
    int value;
};

Info arr[3];
int arr_size = 3;

struct Item {
    Item* next;
    Info info;
    Item() {
        next = NULL;
    }
};

Item* list;

void solve() {
    if (arr_size < 1) {
        return;
    }
    Item* Support = new Item;
    list = Support;
    Support->info = arr[0];
    for (int i = 1; i < arr_size; ++i) {
        Item* Current = new Item;
        Current->info =arr[i];
        Current->next = list;
        list = Current;
    }
}

int main() {
    for (int i = 0; i < arr_size; ++i) {
        std::cout << "Print name \n";
        std::cin >> arr[i].name;
        std::cout << "Print value\n";
        std::cin >> arr[i].value;
    }
    solve();
    Item* current = list;
    while(current) {
        std::cout << current->info.name << " " << current->info.value << std::endl;
        current = current->next;
    }
    return 0;
}
