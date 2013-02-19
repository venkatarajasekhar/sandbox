create database if not exists documents;

use documents;

create table if not exists fm (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists ps (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists pr (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);


create table if not exists si (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists sp (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists tn (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);


create table if not exists tp (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists wi (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists mo (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists es (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists bd (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists ed (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists gf (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);

create table if not exists pa (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);


create table if not exists mm (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);


create table if not exists ca (
  id int not null auto_increment,
  descrip varchar(255),
  ts datetime,
  username varchar(25),
  status char(1),
  unique index idx1 (id),
);
