
CREATE TABLE 고객 (
고객아이디 VARCHAR(20) NOT NULL,
제품명 VARCHAR(10) NOT NULL,
나이 INT,
등급 VARCHAR(10) NOT NULL,
직업 VARCHAR(20),
적립금 INT DEFAULT 0,
primary key(고객아이디)
);

create Table 제품 (
제품번호 CHAR(3) NOT NULL,
제품명 VARCHAR(20),
재고량 INT,
단가 INT,
제조업체 VARCHAR(20),
primary key(제품번호)
);

create table 주문 (
주문번호 CHAR(3) NOT NULL,
주문고객 varchar(20),
주문제품 char(3),
수량 int,
배송지 varchar(30),
주문일자 date,
primary key(주문고객),
foreign key(주문고객) references 고객(고객아이디),
foreign key(주문제품) references 제품(제품번호)
);

create table 배송업체 (
업체번호 char(3) NOT NULL,
업체명 varchar(20),
주소 varchar(100),
전화번호 varchar(20),
primary key(업체번호)
);

/* insert 고객 into 고객(고객아이디, 고객이름, 나이, 등급, 직업, 적립금) */
/* value ('strawberry', '최유경', 30, 'vip', '공무원', 100); */

insert into 고객 values ('apple', '정소화', 20, 'gold', '학생', 1000);
insert into 고객 values ('banana', '김선우', 25, 'vip', '간호사', 2500);
insert into 고객 values ('carrot', '고영석', 28, 'gold', '교사', 4500);
insert into 고객 values ('orange', '김용욱', 22, 'silver', '학생', 0);
insert into 고객 values ('melon', '성원용', 25, 'gold', '회사원', 5000);
insert into 고객 values ('peach', '오형준', NULL, 'silver', '의사', 500);
insert into 고객 values ('pear', '채광주', 31, 'silver', '회사원', 500);
select * from 고객;

insert into 제품 values ('p01', '그냥만두', 5000, 4500, '대한식품');
insert into 제품 values ('p02', '매운쫄면', 2500, 5500, '민국푸드');
insert into 제품 values ('p03', '쿵덕파이', 3600, 2600, '한빛제과');
insert into 제품 values ('p04', '맛난초콜릿', 1250, 2500, '한빛제과');
insert into 제품 values ('p05', '얼큰라면', 2200, 1200, '대한식품');
insert into 제품 values ('p06', '통통우동', 1000, 1550, '민국푸드');
insert into 제품 values ('p07', '달콤비스킷', 1650, 1500, '한빛제과');
select * from 제품 ;

insert into 주문 values ('o01', 'apple', 'p03', 5, '서울시 마포구', '19/01/01');
insert into 주문 values ('o02', 'melon', 'p01', 5, '인천시 계양구', '19/01/10');
insert into 주문 values ('o03', 'banana', 'p06', 45, '경기도 부천시' '19/01/11');
insert into 주문 values ('o04', 'carrot', 'p02', 8, '부산시 금정구', '19/02/01');
insert into 주문 values ('o05', 'melon', 'p06', 36, '경기도 용인시', '19/02/20');
insert into 주문 values ('o06', 'banana', 'p01', 19, '충청북도 보은군', '19/03/02');
insert into 주문 values ('o07', 'apple', 'p03', 5, '서울시 영등포구', '19/03/15');
insert into 주문 values ('o08', 'pear', 'p02', 50, '강원도 춘천시', '19/04/10');
insert into 주문 values ('o09', 'banana', 'p04', 15, '전라남도 목포시', '19/04/11');
insert into 주문 values ('o10', 'carrot', 'p03', 20, '경기도 안양시', '19/05/22');
select * from 주문 ;

select * from 주문 where 주문고객 = 'apple' and 수량 >= 15 ;
select * from 주문 order by 주문제품 asc, 수량 desc;
/* 앞쪽의 order가 먼저 적용 */
select sum(재고량) as '재고량 합계' from 제품 where 제조업체 = '한빛제과';
select count(나이) as 고객수 from 고객;
select count(고객아이디) as 고객수 from 고객;
/* NULL 값은 제외하고 계산하기 때문에 가능하다 >> primary key 에 사용해야 한다. */
select count(distinct 제조업체) as '제조업체 수' from 제품;
select count(제조업체) as '제품 수' from 제품;
/* 제품과 제조업체를 선택할 때는 distinct와 (all)의 차이를 활용한다*/
select 주문제품, sum(수량) as '총 주문 수량' from 주문 group by 주문제품;
/* 문자열 처리를 통해 띄어쓰기를 구현할 수 있다 */
select 제조업체, count(*) as 제품수, max(단가) as 최고가 from 제품 group by 제조업체;
select 제조업체, count(*) as '제품 수', max(단가) as 최고가 from 제품 group by 제조업체 having count(*) >= 3;

/* 여러 테이블에 대한 조인 검색 */
select 제품.제품명 from 제품, 주문 where 주문.주문고객 = 'banana' and 제품.제품번호 = 주문.주문제품;
/* 오류가 발생한 부분 >>> 주문 테이블에서 구성이 안되고, primary key 가 작동하지 않는 원인 */
select 주문.주문제품, 주문.주문일자 from 고객, 주문 where 고객.나이 >= 30 and 고객.고객아이디 = 주문.주문고객;
select 주문제품, 주문일자 from 고객 c, 주문 o where o.주문고객 = c.고객아이디;
/* 긴 확장자의 명을 축약하여 import 하고 사용하는 방법 */
select 제품명, 제조업체 from 제품 where (select * from 주문 where 제품.제품번호 = 주문.주문제품 뭉 주문.주문고객 = 'banana');
/* select 문 내부에 다시 select 문이 들어가는 형태 */

/* insert-into, update-set, delete-from 구문 */
insert into 고객 values ('tomato', '정은심', 36, 'gold', NULL, 4000);
insert into 한빛제품(제품명, 재고량, 단가) select 제품명, 재고량 단가 from 제품 where 제조업체 = '한빛제과' ;
update 제품 set 제품명 = '통큰파이' where 제품번호 = 'p03'; select * from 제품;
/* 값을 수학적 계산으로 적용하여 수정하는 방법 */
update 제품 set 단가 = 단가*1.1; select * from 제품; 
delete from 주문; select * from 주문;
/* delete 구문 내에, select 구문을 사용하는 방법 */
delete from 주문 where 주문고객 in (select 고객아이디 from 고객 where 고객이름 = '정소화'); select * from 주문;

/* view 는 table 을 통하여 제작하는 하나의 보여주기 위한 창 같은 것이다 */
create view 우수고객(고객아이디, 고객이름, 나이) as select 고객아이디, 고객이름, 나이 from 고객 where 등급 = 'vip' with check option;
select * from 우수고객 where 나이 >= 25;
/* 검색 연산은 모든 view 에 적용 가능하다 */

/* 오류 발생한 구분 */
ALTER TABLE `판매`.`주문` 
/* 오류 발생한 영역 - CHARACTER SET = DEFAULT , */
ADD INDEX `주문고객_idx` (`주문고객` ASC) VISIBLE,
ADD INDEX `주문제품_idx` (`주문제품` ASC) VISIBLE;
;
ALTER TABLE `판매`.`주문` 
ADD CONSTRAINT `주문고객`
  FOREIGN KEY (`주문고객`)
  REFERENCES `판매`.`고객` (`고객아이디`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION,
ADD CONSTRAINT `주문제품`
  FOREIGN KEY (`주문제품`)
  REFERENCES `판매`.`제품` (`제품번호`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;
  /* 오류 끝난 구문 */
  
  show create table 주문 ;
  /* 주문 시작시 쓴 코딩을 다시 로드하는 코딩 */
  create view 우수고객(고객아이디, 고객이름, 나이) as select 고객아이디, 고객이름, 나이 from 고객 where 등급 = 'vip' with check option;
  select * from 우수고객 ;
  create view 업체별ㅈ품수(제조업체, 제품수) as select 제조업체,count(*) from 제품 group by 제조업체 with check option ;
  select * from 업체별제품수;
  
  /* primary key 가 있는 view와 없는 view 의 수정 */
  create view 제품_1 as select 제품번호, 재고량, 제조업체 from 제품 with check option ;
  select * from 제품_1 ;
  create view 제품_2 as select 제품명, 재고량, 제조업체 from 제품 with check option ;
  select *  from 제품_2;
  /* 수정하는 insert-into 구문 활용 */
  
  /* 실습 1번 DB-MySQL 실습 */
create table 회원 (
회원아이디 varchar(20) not NULL,
비밀번호 varchar(20) not NULL,
이름 varchar(20) not NULL,
나이 int,
직업 varchar(20),
등급 varchar(10) not NULL default 'basic',
적립금 int not NULL default 0,
primary key(회원아이디)
);

create table 상품 (
상품번호 int not NULL,
상품명 varchar(30) not NULL,
재고량 int not NULL,
단가 int,
primary key(상품번호)
);

create table 제조업체 (
제조업체 varchar(40) not NULL,
전화번호 char(30) not NULL,
/* 전화번호를 int로 하게 된다면, 0으로 시작하는 것을 인식할 수 없으므로,
string 형 자료형으로 해서(char) 진행하는게 적절할 것이다 */
위치 varchar(60),
/* 위치는 다중 스키마로 변환해야 하는 항목 */
담당자 varchar(40),
primary key(제조업체)
);
/* 제조업체 명을 띄어서 적는 법을 알아야 호퍼에 쓸 수 있다 */

create table 게시글 (
글번호 int not NULL,
글제목 varchar(40) not NULL,
글내용 varchar(1000),
작성일자 date not NULL,
primary key(글번호)
);
alter table 게시글 add 회원아이디 varchar(20) not NULL;

create table 주문 (
회원아이디 varchar(30) not NULL,
주문번호 int not NULL,
주문수량 int not NULL default 1,
배송지 varchar(1000) not NULL,
주문일자 date,
primary key(회원아이디)
);

/* 아래 foreign 키를 추가하면서 추가되었던 코딩 */
ALTER TABLE `실습_1`.`주문` 
ADD INDEX `상품번호_idx` (`상품번호` ASC) VISIBLE;
;
ALTER TABLE `실습_1`.`주문` 
ADD CONSTRAINT `상품번호`
  FOREIGN KEY (`상품번호`)
  REFERENCES `실습_1`.`상품` (`상품번호`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

create table 상품_공급 (
제조업체 varchar(40) not NULL,
공급일자 date not NULL,
공급량 int,
foreign key(제조업체) references 제조업체(제조업체),
primary key(제조업체)
);

/* 정규화 부분 시작하는 영역*/
/* drop table if exist summer; >>> 오류 원인을 모르는 부분 */

create table summer (
sid integer,
class varchar(20),
price integer
);

insert into summer values (100, 'fortran', 20000);
insert into summer values (150, 'pascal', 15000);
insert into summer values (200, 'c', 10000);
insert into summer values (250, 'fortran', 20000);
select * from summer;

select sid, class from summer ;
select price from summer where class='c' ;
select distinct class from summer where price = (select max(price) from summer);
select count(*), sum(price) from summer ;

/* 자바 강좌 삽입 --> NULL 을 삽입해야 한다. NULL 은 문제가 있을 수 있다.*/
select price 'c 수강료' from summer where class='c' ;

/* 200 번 학생의 수강신청 취소*/
delete from summer where sid=200;
/* C 강좌 수강료 다시 조회 */
select price 'c 수강료' from summer where class='c';
insert into summer values (200, 'c', 10000) ;

/* 자바 강좌 삽입 */
insert into semmer values (NULL, 'JAVA', 25000) ;
/* summer 테이블 조회 */
select * from summer ;
/* NULL 값이 있는 경우 주의할 질의 :
투플은 다섯 개지만 수강학생은 총 네명이다 */
select count(*) '수강인원' from summer ;
select count(sid) '수강인원' from summer ;
select count(*) '수강인원' from summer where sid is not NULL ;

/* 문제 풀이 진행하던 부분 : 기존 테이블에서 as 로 판단 */
select sid,class,price from summer  ;
select class,price from SummerPrice ;
select sid,class from SummerEnroll ;

create tables summer (
sid int not NULL,
class varchar(20) not NULL,
price int default 0,
primary key(sid)
);

create table SummerPrice (
class varchar(20) not NULL,
/* 교재에서는 number 자료형 사용 */
price
);                   