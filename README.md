README file for TEAM[4,2]:
==========================

This text file describes brief but precise and complete specification of project including: - function descriptions: name, input/output parameters - declaration of important data and data types to be included in user header file - your team's brief ideas of implementations

Your description start form next line and do not delete lines upto this point.

---

Second Project
==============

##PROJECT OUTLINE

1.	두 정수를 입력받는다.(각각 n(문자열의 길이) 과 d(로테이션횟수))

	\`\`\` d>0 일 때 시계방향, d<0일 때 반시계방향으로 rotation

	-	각 함수의 시간비교를 위해서는 문자열의 길이가 매우 길어야 함 => 따라서 문자열을 따로 입력받기 보다는 rand함수를 이용해 문자열 길이(n)만큼의 알파벳으로 이루어진 스트링을 생성해서 사용했음.\`\`\`

2.	4개의 rotation 함수를 설정하여 결과값을 리턴한다.

	```
	main 함수에서는 각각의 case에 대한 소요시간(실행시간)값을 받는다.
	```

3.	출력하려는 값

	-	입력된 문자열의 길이와 distance of rotation인 d의 값에 따른 4가지 함수 각각의 소요시간을 출력 -- -- #역할 분담

의섭 - 조장 / library1의 함수 T_juggling() / libray2.c의 함수 gcd() / README.md

민기 - main.c

성규 - library1의 함수 T_triv()

동진 - library1의 함수 T_bw() / README.md

경태 - library1.c의 함수 T_bw(), T_rev() / library2.c의 함수 reverseArray() / README.md

---

#Function Descriptions name input parameter

형식인자(그 인자의 정체)

1.	reverseArray char * 형 문자열(reverse할 문자열) int형 변수 start(reverse할 시작위치), int형 변수 end(문자열에서 reverse할 부분의 끝 위치) 반환형 : void

2.	GCD int형 변수 a, b(gcd를 구할 정수 2개) 반환형 : int형 반환값 : 최대공약수

3.	T_triv char * 형 변수 inputstr (rotation할 문자열) int형 변수 n(문자열의 길이), int형 변수 d (rotation distance) 반환형 : char *형 반환값 : reverse된 문자열의 포인터

4.	T_juggle char * 형 변수 inputstr (rotation할 문자열) int형 변수 n (문자열의 길이), int형 변수 d (rotation distance) 반환형 : char *형 반환값 : reverse된 문자열의 포인터

5.	T_bw char * 형 변수 string (rotation할 문자열) int형 변수 length (문자열의 길이), int형 변수 d (rotation distance) 반환형 : char *형 반환값 : reverse된 문자열의 포인터

6.	T_rev char * 형 변수 inputstr (rotation할 문자열) int형 변수 n (문자열의 길이), int형 변수 d (rotation distance) 반환형 : char *형 반환값 : reverse된 문자열의 포인터

	---

declaration of important data and data types to be included in user header file

#####우리가 쓴 user header file name : rotation.h

#####rotation.h에 들어있는 선언

1.	표준 헤더 파일 include 선언 ( #include <stdio.h>, #include <stdlib.h> #include<string.h> #include<time.h>\)

2.	visual studio에서 scanf함수를 쓸 때 보안 위협경고를 없애주기 위한 define 선언 (#define _CRT_SECURE_NO_WARNINGS)

---

#your team's brief ideas of implementations

1.	T_triv

	input: char * inputstr, int d(displacement of the letters before and after), int n(legnth of the string)

	case 1: d < 0

	multiply -1 to d

	for(d times) save first letter shift every letter to left save first letter to end

	case 2: d>0

	for(d times) save last letter shift every letter to right save last letter to first

2.	T_juggle

	input: char * inputstr, int d, int n

	while d > n, subtract n from d

	Define another function( GCD() ) that calculates gcd(a,b).

	case 1: d>0 gcd=GCD(n,d) k=n/gcd, l=d/gcd

	for h = 0 ~ l >for j = (k-2)~0

3.	T_bw

	input: char * string, int length, int d

	while d<=0, add length to d : this is because counterclockwise rotation by d equals clockwise rotation by n-d.

	if d = length, exit function

	case 1: d < length - d >for i = 0 ~ d-1 >>exchange i(th) letter and (i+length-d)th letter >>Then, we have A and Br exchanged!

	case 2: d = length - d >for i = 0 ~ d - 1 >>exchange i(th) letter and (i+length-d)th letter >>Then, we have A and B exchanged!

	```
	case 3: d > length - d
	```

	> for i = 0 ~ length - d >>exchange i(th) letter and (i+d)th letter >>Then, we have Ar and B exchanged!

4.	T_rev

	input: char * inputstr, int d, int n

	case 1: d > 0 >reverse array of (n-d)~(n-1)th letters >reverse array of 0~(n-d-1)th letters >reverse array of 0~(n-1)th letters

	case 2: d < 0 d = d*(-1)

	As I said before, counterclockwise rotation by d equals clockwise rotation by n-d.

	so,

	reverse array of d~(n-1)th letters reverse array of 0~(d-1)th letters reverse array of 0~(n-1)th letters

5.	main

	input: n[3](length of strings), d[3](displacement of strings before
	and after)

	output: time_triv[3], time_jug[3], time_bw[3], time_rev[3]

	for 3 times >get input for n[3], d[3] >using malloc, allocate strings in hip area >using functions above, get times for the output

---

#Test 결과  

screenshot ![final Report](https://i.imgur.com/57JCzH0.png)

---

#추론 결과

첫번째 경우(즉, 문자열의 길이가 천만이고 rotate distance가 만일 경우) juggling, bw, reverse 방법들의 실행시간이 똑같이 나왔다. 그러나 두번째 경우 즉, 문자열의 길이를 더 늘렸을 때 실행시간이 juggling, bw, reverse순으로 적었다. 이를 통해 첫번째 경우는 문자열의 길이가 짧아서 세 방법의 처리속도의 차이가 확연히 드러나지 않은 것이라는 것을 알 수 있다. 또, 두번째, 세번째, 네번째, 다섯번째 경우 각각에서 실행 시간이 trivial>juggling>bw>reverse임을 보아 reverse가 문자열을 rotation 하기 위한 가장 빠른 방법이고 bw가 그 다음으로 빠른 방법 그리고 juggling, trivial 순으로 빠른 방법임을 알 수 있다.
