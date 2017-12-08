README file for TEAM[4,2]:
==========================

This text file describes brief but precise and complete specification of project including: - function descriptions: name, input/output parameters - declaration of important data and data types to be included in user header file - your team's brief ideas of implementations

Your description start form next line and do not delete lines upto this point.

---

# Second Project # ##PROJECT OUTLINE

1.	두 정수를 입력받는다.(각각 n(문자열의 길이) 과 d(로테이션횟수))

	```
	d>0 일 때 시계방향, d<0일 때 반시계방향으로 rotation


	* 각 함수의 시간비교를 위해서는 문자열의 길이가 매우 길어야 함
	=> 따라서 문자열을 따로 입력받기 보다는 rand함수를 이용해 문자열
	길이(n)만큼의 알파벳으로 이루어진 스트링을 생성해서 사용했음.
	```

2.	4개의 rotation 함수를 설정하여 결과값을 리턴한다.

	```
	main 함수에서는 각각의 case에 대한 소요시간(실행시간)값을 받는다.
	```

3.	출력하려는 값

	-	입력된 문자열의 길이와 distance of rotation인 d의 값에 따른 4가지 함수 각각의 소요시간을 출력 -- --

역할 분담
=========

의섭 - 조장 / library1의 함수 T_juggling() / libray2.c의 함수 gcd() / README.md 민기 - main.c 성규 - library1의 함수 T_triv() 동진 - library1의 함수 T_bw() 경태 - library1.c의 함수 T_bw(), T_rev() / library2.c의 함수 reverseArray() / README.md

---

#Function Descriptions name input parameter(전달된 인자의 자료형과 인자정보()) output parameter(함수의 반환 자료형과 반환값 정보()) ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ T_triv int형(문자열의 길이, distanace of rotation 값), char 포인터 형(문자열) char 포인터 형(rotate 한 후의 문자열)

```
T_juggle        int형(문자열의 길이, distanace of rotation 값), char 포인터 형(문자열)         char 포인터 형(rotate 한 후의 문자열)


GCD         정수형(GCD를 구할 두 정수)                               정수형(GCD)


T.bw.c          정수형(문자열의 길이, rotation 값),문자형(문자열)                   실수형(소요시간)


T.reverse.c     정수형(문자열의 길이, rotation 값),문자형(문자열)                   실수형(소요시간)
```

---

declaration of important data and data types to be included in user header file
-------------------------------------------------------------------------------

#### #####우리가 쓴 user header file name : rotation.h #### #####rotation.h에 들어있는 선언

1.	표준 헤더 파일 include 선언 ( #include <stdio.h>, #include <stdlib.h> #include<string.h> #include<time.h>\)

2.	visual studio에서 scanf함수를 쓸 때 보안 위협경고를 없애주기 위한 define 선언 (#define _CRT_SECURE_NO_WARNINGS)

---

your team's brief ideas of implementations
------------------------------------------

1.	입력받은 문자열에 대한 각각의 함수 구성

2.	trivial

3.	juggle trivial를 gcd를 이용하여 보다 간소화 시킨 함수

4.	GCD juggle함수의 간소화를 위하여 GCD 함수 구현

5.	bw    

6.	reverse

7.	시간 계산 time.h 를 이용하여 각각의 함수에서 결과값을 반환해내는데 소요된 시간을 계산

Test 결과  
===========

1.	n=100000 n=100000, d=2000 Trivial : reverse   : Block-Swap : Juggling   :

추론 결과
=========
