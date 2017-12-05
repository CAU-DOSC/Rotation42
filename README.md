# README file for TEAM[4,2]:

This text file describes brief but precise and complete specification of project including:
- function descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations


Your description start form next line and do not delete lines upto this point.
- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- 
					 #	Second Project	#
<PROJECT OUTLINE>

1. 두 정수를 입력받는다.(각각 n(문자열의 길이) 과 d(로테이션갯수), )
	# d>0 일 때 시계방향, d<0일 때 반시계방향으로 rotation
2. 4개의 rotation 함수를 설정하여 결과값을 리턴한다.
	# main 함수에서는 각각의 case에 대한 소요시간값을 받는다.
3. 출력하려는 값
	- 입력된 문자열의 길이를 출력
	- 4가지 함수의 반환값을 출력
	- 4가지 함수 각각의 소요시간을 출력
- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- 

# 역할 분담
의섭 - 조장/ README2.txt/T.Juggle.c/gc.c
민기 - main.c 
성규 - triv.c 
동진 - T.bw.c
경태 - T.bw.c/ reverse.c

*

- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- 

<Function Descriptions(이 표를 보기 위해 필요한 typedef 정보 - typedef struct node * Node * & typedef *Node LINK)>
	name	        	input parameter(전달된 인자의 자료형과 인자정보())   			           	output parameter(함수의 반환 자료형과 반환값 정보())
	------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	T.trivial.c  		정수형(문자열의 길이, rotation 값),문자형(문자열)     				        실수형(소요시간)		


	T.juggle.c		정수형(문자열의 길이, rotation 값),문자형(문자열)					실수형(소요시간)


	GCD			정수형(GCD를 구할 두 정수)								정수형(GCD)


	T.bw.c			정수형(문자열의 길이, rotation 값),문자형(문자열) 					실수형(소요시간)


	T.reverse.c		정수형(문자열의 길이, rotation 값),문자형(문자열)					실수형(소요시간)


- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- 

<declaration of important data and data types to be included in user header file>


- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- - -- 

<your team's brief ideas of implementations>

1. 입력받은 문자열에 대한 각각의 함수 구성

2. trivial

3. juggle
	trivial를 gcd를 이용하여 보다 간소화 시킨 함수

4. GCD
	juggle함수의 간소화를 위하여 GCD 함수 구현
 

5. bw    

6. reverse

7. 시간 계산
	 time.h 를 이용하여 각각의 함수에서 결과값을 반환해내는데 소요된 시간을 계산
	 
# Test 결과  
n=100000, d=2000
Trivial    :
reverse    : 
Block-Swap : 
Juggling   :
 
# 추론 결과                
  
