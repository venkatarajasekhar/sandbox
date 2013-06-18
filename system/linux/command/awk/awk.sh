#!/bin/sh


awk '{print;}' employee.txt                     # Print all file
awk '/Thomas/ 
/Nisha/' employee.txt                           # Print matching line (filtering)
awk '{print $2,$5;}' employee.txt               # Print selected columns
awk '{print $2,$NF;}' employee.txt              # Same (NF is number of fields)
awk '$1 >200' employee.txt                      # Filtering on value
awk '$4 ~/Technology/' employee.txt             # Filtering on STRING


awk 'BEGIN {print "Name\tDesignation\tDepartment\tSalary";}
 {print $2,"\t",$3,"\t",$4,"\t",$NF;}
 END{print "Report Generated\n--------------";
}' employee.txt                                 # Report builder

awk 'BEGIN { count=0;}
$4 ~ /Technology/ { count++; }
END { print "Number of employees in Technology Dept =",count;}' employee.txt
                                                # Statistics on entries
