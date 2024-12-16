#include <stdio.h>

int main() {
  int user_type = 2;
  double price = 180;
  double pay;

  if (user_type == 1) {
    if (price >= 100) {
      pay = price * 0.95;
    } else {
      pay = price;
    }
  } else if (user_type == 2) {
    if (price >= 200) {
      pay = price * 0.9;
    } else {
      pay = price * 0.97;
    }
  } else {
    printf("用户类型错误\n");
  }

  printf("实际支付金额为: %.2lf\n", pay);
}