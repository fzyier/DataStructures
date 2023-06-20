#pragma once
#include <string>
template <typename T> class single_linked_list {
private:
  // Fields
  single_linked_list<T> *next_;
  single_linked_list<T> *head_;
  T data;
  // Methods
  void set_head(const single_linked_list<T> &single_linked_list);

public:
  // Constructors
  single_linked_list();
  single_linked_list(const T &data);

  single_linked_list(const single_linked_list<T> &single_linked_list);
  single_linked_list(single_linked_list<T> &&single_linked_list);

  ~single_linked_list();

  // Methods
  //          Setters
  void set_next(const single_linked_list<T> &single_linked_list);
  void set_data(const T &data);

  //          Getters
  const single_linked_list<T> &get_next() const;
  const single_linked_list<T> &get_head() const;
  const T &get_data() const;

  //          Other
  void insert(const size_t &index);

  void display(const single_linked_list<T> &single_linked_list_head);

  void search(const single_linked_list<T> &single_linked_list);
  void search(const T &data);

  void reverse(const single_linked_list<T> &single_linked_list_head);

  void clear(const single_linked_list<T> &single_linked_list_head);
  // Operators
  single_linked_list<T> &
  operator=(const single_linked_list<T> &single_linked_list);
  single_linked_list<T> &
  operator=(const single_linked_list<T> &&single_linked_list);
};