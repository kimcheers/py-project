# 들여쓰기

total = 0

for i in range(11):
    total += i

print(total)

score = int(input("점수를 입력하시오>"))

if score >= 80:
    print("합격입니당.")
elif score >= 60:
    print("재시험 대상 입니당.")
else:
    print("불합격 ㅠㅠ")
print("EXIT")