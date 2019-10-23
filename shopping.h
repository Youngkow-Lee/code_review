#ifndef CODEREVIEW_SHOPPING_H_
#define CODEREVIEW_SHOPPING_H_

#include <vector>
#include "./goods.h"

/* Shopping class presents List of shopping.
   Example:
       Shopping tobuylist;
       Goods obj1;
       Goods obj2;
       ...
       tobuylist.PushList(obj1);
       tobuylist.PushList(obj2);
       tobuylist.PrintList();
*/

class Shopping{
 public:
  Shopping(std::vector<Goods> goods_list) {
			 shopping_list_ = goods_list;
  }
  ~
  void PushList(Goods object);
  Goods GetLastElement();
  void PrintList();
  void SortByPrice();
  void SortByIndex();

 private:
  std::vector<Goods> shopping_list_;
};
 
#endif  // CODEREVIEW_SHOPPING_H_
