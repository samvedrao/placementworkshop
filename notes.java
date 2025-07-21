public class notes {
    public static  void main(String args[]){
        int number=367,n,fif,hun = 0,te,on;
        if(number>100){
         n=number/100;
        number=number%100;
         hun=n;
        }
        if(number>50){
            fif=number/50;
            number=number%50;
        }
        if(number>10){
             te=number/10;
            number=number/10;
        }
        if(number>0){
            on=number/1;
        }
        System.out.println(hun+"hun"+fif+"fif"+te+"ten"+on);
          
    }
}
