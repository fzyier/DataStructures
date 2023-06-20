#include "single_linked_list.hpp"

// Constructors
template <typename T>
single_linked_list<T>::single_linked_list()
    : data(0), next_(nullptr), head_(new single_linked_list{*this}) {}

template <typename T>
single_linked_list<T>::single_linked_list(const T &data)
    : single_linked_list<T>(), data(data) {}

template <typename T>
single_linked_list<T>::single_linked_list(
    const single_linked_list<T> &single_linked_list) {
  set_data(single_linked_list.get_data());
  set_next_(single_linked_list.get_next_());
  set_head(single_linked_list.get_head());
}
template <typename T>
single_linked_list<T>::single_linked_list(
    single_linked_list<T> &&single_linked_list) {}

template <typename T> single_linked_list<T>::~single_linked_list() {
  this->clear(this->head_);
}

// Methods
//          Setters
template <typename T>
void single_linked_list<T>::set_next(
    const single_linked_list<T> &single_linked_list) {
  if (this->next_ != nullptr) {
    delete this->next_;
  }

  this->next_ = new class single_linked_list(*single_linked_list);
}
template <typename T> void single_linked_list<T>::set_data(const T &data) {
  this->data = data;
}
template <typename T>
void single_linked_list<T>::set_head(
    const single_linked_list<T> &single_linked_list) {
  if (this->next_ != nullptr) {
    delete this->next_;
  }
  this->head_ = new class single_linked_list(*single_linked_list);
}

//          Getters
template <typename T>
const single_linked_list<T> &single_linked_list<T>::get_next() const {
  return this->next_;
}
template <typename T>
const single_linked_list<T> &single_linked_list<T>::get_head() const {
  return this->head_;
}
template <typename T> const T &single_linked_list<T>::get_data() const {
  return this->data;
}
//          Other
template <typename T> void single_linked_list<T>::insert(const size_t &index) {}
template <typename T>
void single_linked_list<T>::display(
    const single_linked_list<T> &single_linked_list_head) {}
template <typename T>
void single_linked_list<T>::search(
    const single_linked_list<T> &single_linked_list) {}
template <typename T> void single_linked_list<T>::search(const T &data) {}
template <typename T>
void single_linked_list<T>::reverse(
    const single_linked_list<T> &single_linked_list_head) {}
template <typename T>
void single_linked_list<T>::clear(
    const single_linked_list<T> &single_linked_list_head) {}

// Operators
template <typename T>
single_linked_list<T> &single_linked_list<T>::operator=(
    const single_linked_list<T> &single_linked_list) {}
template <typename T>
single_linked_list<T> &single_linked_list<T>::operator=(
    const single_linked_list<T> &&single_linked_list) {}