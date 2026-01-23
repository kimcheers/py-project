money = 50000
a = 0
# a = input("출금할 금액을 입력하시오>")
if money >=a:
    print(f'남은 잔액은{money}')
    a = input("출금할 금액을 입력하시오>")
    b = int(a)
    if b <= 0:
        print('잘못된 금액입니다.')
    elif b % 10000 != 0:
        print("출금단위 오류입니다.")
    elif b > money:
        print("잔액이 부족.")
    else:
        money = money - b
        print(f"잔액은: {money}")
else:
    print("잔액이 없다.")