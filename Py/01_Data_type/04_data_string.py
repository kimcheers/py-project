text = "   Hello Python World   "
s = text.strip()
ss = s.split()

print("원본 길이", len(text))

print("공백 제거", s)

print("대문자", s.lower())
print("소문자", s.upper())

print(s.split())

#ss = s.split()

print("단어는 총", len(ss))