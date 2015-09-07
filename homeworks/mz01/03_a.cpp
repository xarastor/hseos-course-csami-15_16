struct Item {
      Item* next;
      Info info;
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
        Current->info = arr[i];
        Current->next = list;
        list = Current;
    }
}

