#!/bin/bash
fileName=""
i=1;
for file in "$@" 
do
    fileName+=$file"_"
    i=$((i + 1));
done
fileName+="c++.cpp"
gedit $fileName  
git add .
git commit -m "daily code added - $fileName"
git push origin master
