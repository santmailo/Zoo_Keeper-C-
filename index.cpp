// Your functions are here  

void displayCamelHabitat (){ 
    std::string camel = R"(
        Switching on the camera in the camel habitat...
         ___.-''''-.
        /___  @    |
        ',,,,.     |         _.'''''''._
             '     |        /           \\
             |     \\    _.-'             \\
             |      '.-'                  '-.
             |                               ',
             |                                '',
              ',,-,                           ':;
                   ',,| ;,,                 ,' ;;
                      ! ; !'',,,',',,,,'!  ;   ;:
                     : ;  ! !       ! ! ;  ;   :;
                     ; ;   ! !      ! !  ; ;   ;,
                    ; ;    ! !     ! !   ; ;
                    ; ;    ! !    ! !     ; ;
                   ;,,      !,!   !,!     ;,;
                   /_I      L_I   L_I     /_I
        Look at that! Our little camel is sunbathing!)";

    std::cout << camel ;
}

void displayLionHabitat (){ 
    std::string lion =  R"(
        Switching on the camera in the lion habitat...
                                                       ,w.
                                                     ,YWMMw  ,M  ,
                                _.---.._   __..---._.'MMMMMw,wMWmW,
                           _.-""        '''           YP"WMMMMMMMMMb,
                        .-' __.'                   .'     MMMMW^WMMMM;
            _,        .'.-'"; `,       /`     .--""      :MMM[==MWMW^;
         ,mM^"     ,-'.'   /   ;      ;      /   ,       MMMMb_wMW"  @\\
        ,MM:.    .'.-'   .'     ;     `\\    ;     `,     MMMMMMMW `"=./`-,
        WMMm__,-'.'     /      _.\\      F'''-+,,   ;_,_.dMMMMMMMM[,_ / `=_}
        "^MP__.-'    ,-' _.--""   `-,   ;       \\  ; ;MMMMMMMMMMW^``; __|
                   /   .'            ; ;         )  )`{  \\ `"^W^`,   \\  :
                  /  .'             /  (       .'  /     Ww._     `.  `"
                 /  Y,              `,  `-,=,_{   ;      MMMP`""-,  `-._.-,
                (--, )                `,_ / `) \\/"")      ^"      `-, -;"\\:
        The lion is roaring!)";
    std::cout << lion ;
}

 void displayDeerHabitat(){ 
    std::string deer = R"(
        Switching on the camera in the deer habitat...
           /|       |\\
        `__\\       //__'
           ||      ||
         \\__`\\     |'__/
           `_\\   //_'
           _.,:---;,._
           \\_:     :_/
             |@. .@|
             |     |
             ,\\.-./ \\
             ;;`-'   `---__________-----.-.
             ;;;                         \\_\\
             ';;;                         |
              ;    |                      ;
               \\   \\     \\        |      /
                \\_, \\    /        \\     |\\
                  |';|  |,,,,,,,,/ \\    \\ \\_
                  |  |  |           \\   /   |
                  \\  \\  |           |  / \\  |
                   | || |           | |   | |
                   | || |           | |   | |
                   | || |           | |   | |
                   |_||_|           |_|   |_|
                  /_//_/           /_/   /_/
        Our 'Bambi' looks hungry. Let's go to feed it!)";
     
    std::cout << deer ;

}

void displayGooseHabitat(){
    std::string goose = R"(
        Switching on the camera in the goose habitat...

                                            _
                                        ,-"" "".
                                      ,'  ____  `.
                                    ,'  ,'    `.  `._
           (`.         _..--.._   ,'  ,'        \\    \\
          (`-.\\    .-""        ""'   /          (  d _b
         (`._  `-"" ,._             (            `-(   \\
         <_  `     (  <`<            \\              `-._\\
          <`-       (__< <           :
           (__        (_<_<          ;
            `------------------------------------------
        The goose is staring intently at you... Maybe it's time to change the channel?)";
    
    std::cout << goose ;

}

void displayBatHabitat(){
    std::string bat = R"(
        Switching on the camera in the bat habitat...
        _________________               _________________
         ~-.              \\  |\\___/|  /              .-~
             ~-.           \\ / o o \\ /           .-~
                >           \\  W  //           <
               /             /~---~\\             \\
              /_            |       |            _\\
                 ~-.        |       |        .-~
                    ;        \\     /        i
                   /___      /\\   /\\      ___\\
                        ~-. /  \\_/  \\ .-~
                           V         V
        This bat looks like it's doing fine.)";
    
    std::cout << bat ;
}

void displayRabbitHabitat(){
    std::string rabbit = R"(
        Switching on the camera in the rabbit habitat...
                 ,
                /|      __
               / |   ,-~ /
              Y :|  //  /
              | jj /( .^
              >-"~"-v"
             /       Y
            jo  o    |
           ( ~T~     j
            >._-' _./
           /   "~"  |
          Y     _,  |
         /| ;-"~ _  l
        / l/ ,-"~    \\
        \\//\\/      .- \\
         Y        /    Y
         l       I     !
         ]\\      _\\    /"\\
        (" ~----( ~   Y.  )
        It looks like we will soon have more rabbits!)";
    
    std::cout << rabbit;

}

 void print_habitat(char m){
     if(m==0){
         displayCamelHabitat();
     }
     if(m==1){
         displayLionHabitat();
     }
     if(m==2){
         displayDeerHabitat();
     }
     if(m==3){
        displayGooseHabitat();  
     }
     if(m==4){
        displayBatHabitat();
     }
     if(m==5){
        displayRabbitHabitat();
     }
     std::cout << std::endl << std::endl << std::endl;

}
