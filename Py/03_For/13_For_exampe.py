question = int(input("문제 개수를 입력하세요."))

for i in question:
    number = int(input(f"{i}번째 점수 입력"))
    if number >= 0 and number <= 100:
        if number >= 60:
            print('통과')
        else:
            print('재시험 대상')
    else:
        print('무효 처리')