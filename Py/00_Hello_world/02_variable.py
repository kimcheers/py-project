x = 10
y = 20.5
name = "김지환"

print(x)
print(type(x)) # 변수 & 데이터 타입 반환
print(id(x)) # 주소값 반환

print("x :", x, sep="") # separator가 기본값이 " "으로 되어 있어서 자동으로 공백이 삽입된다.

s = "   python"

print(len(s)) # 변수 길이 측정
print(s.strip()) # 공백제거
print(s.upper()) # 대문자로
print(s.lower()) # 소문자로

s = "apple!banana!cherry"
ss = s.split('!') # list로 반환 
print(ss)