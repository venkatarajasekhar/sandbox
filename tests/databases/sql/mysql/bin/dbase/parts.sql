create database if not exists parts;

use parts;

create table if not exists parts (
  id int not null auto_increment,
  class_id int not null,
  part_number int not null,
  descrip varchar(255) not null,
  vendor_id int not null default '1',
  vendor_part_number varchar(255),
  username varchar(255) not null,
  ts datetime,
  status char(1),
  notes text,
  datasheet_id int not null default '1',

  unique index idx1 (id),
  unique index idx2 (class_id,part_number)
);


create table if not exists class (
  id int not null,
  descrip varchar(255) not null,
  unique index idx1 (id,descrip)
);

insert into class values ('100','Buffers');
insert into class values ('101','Caps SMT');
insert into class values ('102','Caps Lead');
insert into class values ('103','Resistors SMT');
insert into class values ('104','Resistors Lead');
insert into class values ('105','Inductors SMT');
insert into class values ('106','Inductors Lead');
insert into class values ('107','IC\'s analog');
insert into class values ('108','IC\'s digital');
insert into class values ('109','IC\'s mixed-signal');
insert into class values ('110','FPGA');
insert into class values ('111','Microprocessors');
insert into class values ('112','Transistors');
insert into class values ('113','Diodes');
insert into class values ('114','Thyristors');
insert into class values ('115','Relay');
insert into class values ('116','Opto');
insert into class values ('117','Fuses');
insert into class values ('118','Misc');

create table if not exists vendor (
  id int not null auto_increment,
  descrip varchar(255) not null,
  unique index idx1 (id,descrip)
);
insert into vendor (id,descrip) values (1, '');

create table if not exists datasheet (
  id int not null auto_increment,
  filename varchar(255) not null,
  file_type varchar(255) not null,
  file_data blob not null,
  unique index idx1 (id)
);
insert into datasheet (id,filename,file_type,file_data) values (1, '', '', '');

