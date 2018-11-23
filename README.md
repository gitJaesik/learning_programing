# learning_programing

# #Day1  

### TODO
* 책   
윤성우 열혈 c++ 프로그래밍  
* 블로그  
http://itguru.tistory.com/category/C++?page=1  
* 숙제  
Visual Studio 커뮤니티 OR CLION 설치하기  
[백준](https://www.acmicpc.net/step/1) 사이트의 문제 4개 이상 풀기  
[이문제](https://www.acmicpc.net/problem/2741) 풀기  


* 프로그래밍 개론  
##### PC 버전 카카오톡은 어떻게 만들어졌나?
-Windows 프로그램으로 Client + UI구현
-Socket Programing

* Windows Programing 기초 (for UI, Event)  
C#

* C++ 문법  

https://www.acmicpc.net/problem/2438  

https://www.acmicpc.net/problem/2439  

https://www.acmicpc.net/problem/2440  

https://www.acmicpc.net/problem/2441  

https://www.acmicpc.net/step/5  2문제  

https://www.acmicpc.net/step/6  2문제  


# #Day2  

 변수는 특정 주소의 메모리를 지칭한다.  
 메모리 -> 램카드로 인식하면 된다.  
 32비트 운영체제 (x86), 64비트 운영체제 (x64)는 주소값의 크기와도 상관이 있다.  
 포인터는 해당 주소의 값을 가져온다.  
 운영체제에 대해서 이해하자   
 https://ko.wikipedia.org/wiki/%EC%9A%B4%EC%98%81_%EC%B2%B4%EC%A0%9C  
 
 https://learngitbranching.js.org/
 
 # #Day3
 
## class 개념  
- oop의 특징과 원칙 이해하기 [참고위키](https://en.wikipedia.org/wiki/Object-oriented_programming)
- 쉽게는 클래스는 하나의 기능이 많은 변수라고 생각하면 된다.

## Linux 설치하기
- 윈도우에 리눅스 설치해오기

## git comit하기
- 숙제 소스 add, 소스1 add
- git init
- git add filename
- git commit -m "commit log"


# #Day 4

## console 회원가입 만들기
- User class로 콘솔 회원가입 만들기

## g++ compile
- g++ 파일명
=> a.out과 같은 파일이 생김
- g++ 파일명1 -o 파일명2
=> "파일명2"의 이름으로 실행파일이 생김

## stl string
- 문자열
- char[128] str;와 비슷
- ex) string s; cin >> s; "hello world"; s = "hello world"

# #Day 5

## 다형성 코딩
### 스타크래프트 개발을 한다고 하자.
### 아래의 클래스를 만드세요.
- scv
- 마린
- 파이어벳
- 메딕

------------------

## To learn more

### basic
- oop // language
- algorithm - acmipcp

### server
- socket programming
- web server

### client
- aos ios

### master class
- machine learning
- natural language


# #Day 6

https://www.acmicpc.net/problem/10845  

Tetris source code driving


# #Day 7

vim  
visual assist  
console api 사용  
prime (소수구하기) 문제 풀이  

# #Day 8
Code explanation order =>  
Abstract  
Data Structure  
Logic  

Get prime problem is solved well  


# #Day 9
도서관리 프로그램 만들기
* 명세
  * 도서 대여 정보 입력, 회원정보 추가, 모든 회원정보 조회, 회원정보 조회, 회원정보 수정 및 삭제, 프로그램 종료
    * 도서 정보 조회
      * 도서와 해당 도서를 빌린 회원의 정보 및 이력을 가지고 있음
    * 도서 대여 정보 입력
      * 도서 검색 -> 카테고리 검색, 이름 검색
        * 도서 대여 가능한 경우
        * 회원 검색 -> 이름 검색
          * 회원이 대여 가능한 경우 
            * 대여 처리
          * 회원이 대여 불가능한 경우
            * 실패
          * 회원이 없는 경우
            * 실패
        * 도서 대여 불가능한 경우 
          * 예약
        * 도서가 없는 경우
          * 실패
    * 회원정보 추가
      * 이름, 전호번호, 나이 등 기본 정보 입력
    * 모든 회원 정보 조회
      * 모든 사용자 한번에 조회 간략하게
    * 회원 정보 조회
      * 한명의 회원정보 상세하게 조회
      * 추가적으로 해당 회원이 빌린 정보를 가지고 있음
    * 회원정보 수정 및 삭제
      * 회원정보 수정 및 삭제 기능 추가
   

