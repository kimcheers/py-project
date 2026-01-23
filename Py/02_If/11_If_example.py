price = int(input("상품가격을 입력하세요>"))
a = int(input("일반인 VIP 관리자"))
print(f"상품가격은 {price}")
if a >= 2:
    discount = price * 0.9
elif a == 2:
    discount = price * 0.8
else:
    discount = price

if a >= 100000:
    final_discount = price * 0.95
else:
    final_discount = discount

if final_discount < 5000:
    print("최소금액은 5000원임니다.")
    final_discount = 5000
print(f"{int(final_discount):,}")