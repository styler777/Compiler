compteurSucessNegatif=0
compteurFailureNegatif=0

for file in test/syn-err/* ;
do  
 bin/./tpcas < "$file"
 sorti=$?
 if [ $sorti -eq 0 ]; then
    ((compteurSucessNegatif++))
 else 
    ((compteurFailureNegatif++))
fi
done 
for file in test/good/* ; do
   bin/./tpcas < "$file"
   sorti=$?
   if [ $sorti -eq 0 ]; then
        ((compteurSucessNegatif++))
    else 
        ((compteurFailureNegatif++))
    fi
    
done 
echo "sucess = $compteurSucessNegatif failure =$compteurFailureNegatif" >> report.txt