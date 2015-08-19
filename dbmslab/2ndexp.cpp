CREATE TABLE PRODUCT_MASTER23
(
PRODUCTNO	Varchar(6),
DESCRIPTION	Varchar(15),
PROFITPERCENT	Double(4,2),
`UNIT MEASURE`	Varchar(10),
`QTYONHAND`	Int,	
`REORDERL VL`	Int,
SELLPRICE	Double(8,2),
COSTPRICE	double(8,2)
);
CREATE TABLE SALESMAN_MASTER23
(
SALESMANNO	Varchar(6),
SALESMANNAME	Varchar(20),
`ADDRESS 1` Varchar(30),
`ADDRESS 2`	Varchar(30),
CITY	Varchar(20),
PINCODE	Int,
STATE	Varchar(20),
SALAMT	INT,
TGTTOGET	DOUBLE,
YTDSALES	Double(6,2),
REMARKS	Varchar(60)
);
//insert
INSERT INTO CLIENT_MASTER23 (CLIENTNO,NAME,CITY,PINCODE,STATE,BALDUE) 
VALUES
('C00001',	'Ivan bayross',	'Mumbai',	'400054',	'Maharashtra',	'15000');
INSERT INTO CLIENT_MASTER23 (CLIENTNO,NAME,CITY,PINCODE,STATE,BALDUE) 
VALUES
(C00002,'Mamta muzumdar',Madras,780001,'Tamil nadu',0);
//
INSERT INTO CLIENT_MASTER23 (CLIENTNO,NAME,CITY,PINCODE,STATE,BALDUE) 
VALUES
('C00003'	,'Chhaya bankar'	,'Mumbai'	,'400057'	,'Maharashtra'	,'5000');/
/
INSERT INTO CLIENT_MASTER23 (CLIENTNO,NAME,CITY,PINCODE,STATE,BALDUE) 
VALUES
('C00004',	'Ashwini  joshi'	,'Bangalore',	'560001'	,'Karnataka'	,'0');
INSERT INTO CLIENT_MASTER23 (CLIENTNO,NAME,CITY,PINCODE,STATE,BALDUE) 
VALUES
('C00005',	'Hansel colaco'	,'Mumbai'	,'400060'	,'Maharashtra'	,'2000');
INSERT INTO CLIENT_MASTER23 (CLIENTNO,NAME,CITY,PINCODE,STATE,BALDUE) 
VALUES
('C00006'	,'Deepak sharma'	,'Mangalore',	'560050',	'Karnataka'	,'0');
//INSERTION 2ND
INSERT INTO PRODUCT_MASTER23(ProductNo,Description,Profitpercent,`Unit measure`,Qtyonhand,`ReorderL vl`,SellPrice,CostPrice)
VALUES
('P00001'	,'T-Shirt'	,'5',	'Piece',	'200',	'50'	,'350'	,'250'),
('P0345',	'Shirts',	'6'	,'Piece'	,'150'	,'50'	,'500'	,'350');
INSERT INTO PRODUCT_MASTER23(ProductNo,Description,Profitpercent,`Unit measure`,Qtyonhand,`ReorderL vl`,SellPrice,CostPrice)
VALUES
('P06734',	'Cottdon jeans',	'5',	'Piece',	'100'	,'20'	,'600',	'450'),
('P07865',	'Jeans',	'5'	,'Piece',	'100',	'20',	'750'	,'500'),
('P07868',	'Trousers'	,'2'        ,   	'Piece'	,'150'	,'50'	,'850'	,'550'),
('P07885',	'Pull Overs'	,'2.5',	'Piece'	,'80'	,'30',	'700'	,'450'),
('P07965',	'Denim jeans',	'4'	,'Piece'	,'100',	'40'	,'350'	,'250'),
('P07975',	'Lycra tops'	,'5'	,'Piece',	'70'	,'30'	,'300',	'175'),
('P08865',	'Skirts',	'5'	,'Piece',	'75'	,'30'	,'450',	'300');
//salesman_master23
INSERT INTO SALESMAN_MASTER23
(SalesmanNo,SALESMANNAME,`Address 1`,`Address 2`,City,PinCode,State,SalAmt,TgtToGet,YtdSales,Remarks)
VALUES
('S00001'	,'Aman'	,'A/14'	,'Worli',	'Mumbai',	'400002'	,'Maharashtra' ,'3000'	,'100'	,'50',	'Good'),
('S00002'	,'Omkar'	,'65'	,'Nariman'	,'Mumbai'	,'400001'	,'Maharashtra' ,'3000'	,'200'	,'100',	'Good'),
('S00003'	,'Raj'	,'P-7'	,'Bandra'	,'Mumbai'	,'400032'	,'Maharashtra' ,'3000'	,'200',	'100'	,'Good'),
('S00004'	,'Ashish', 'A/5'	,'Juhu'	,'Mumbai'	,'400044'	,'Maharashtra'  , '3500'	,  '200'	,  '150',	  'Good'
);
//EXP 3
1)SELECT NAME FROM `CLIENT_MASTER23`;
2)SELECT * FROM `CLIENT_MASTER23`;
3)SELECT NAME,CITY,STATE FROM `CLIENT_MASTER23`;
5)SELECT * FROM `CLIENT_MASTER23` WHERE STATE='MAHARASHTRA';
6)SELECT * FROM `SALESMAN_MASTER23` WHERE SALAMT='3000';
b)
UPDATE  `CLIENT_MASTER23` Set CITY='Bangalore'  WHERE CLIENTNO='C00005';
UPDATE  `CLIENT_MASTER23` Set BALDUE='1000'  WHERE CLIENTNO='C00001';
UPDATE PRODUCT_MASTER23  set COSTPRICE='950' where DESCRIPTION='Trousers';
UPDATE SALESMAN_MASTER23 set CITY='Pune';
c)
