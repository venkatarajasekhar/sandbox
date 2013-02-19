use mysql;

grant select on documents.* to "www"@"localhost" identified by "wwwuser";
grant select,insert,update,delete on documents.* to "cjuan"@"localhost" identified by "cjuan";
grant select,insert,update,delete on documents.* to "barnold"@"localhost" identified by "barnold";
grant select,insert,update,delete on documents.* to "mwinfield"@"localhost" identified by "mwinfield";
grant select,insert,update,delete on documents.* to "bwoo"@"localhost" identified by "bwoo";
grant select,insert,update,delete on documents.* to "emayssat"@"localhost" identified by "emayssat";




grant select on parts.* to "www"@"localhost" identified by "wwwuser";
grant select,insert,update,lock tables,delete on parts.* to "bwoo"@"localhost" identified by "bwoo";
grant select,insert,update,lock tables,delete on parts.* to "mgifford"@"localhost" identified by "mgifford";
grant select,insert,update,lock tables,delete on parts.* to "olipkind"@"localhost" identified by "olipkind";
grant select,insert,update,lock tables,delete on parts.* to "mwinfield"@"localhost" identified by "mwinfield";
grant select,insert,update,lock tables,delete on parts.* to "emayssat"@"localhost" identified by "emayssat";


flush privileges;
