#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
int ans, counter,option,chance_5050=0,counter, chance =0;
struct participant{
    char name[50];
    int age;
    char date[12];
}p1;
void help(){
    printf("\t\t\t\n\n\n\t\t\t\n\n\n\t\t\t*****************Hello! welcome to this fun COVID-QUIZ******************\n\n");
    printf("\t\t\t************************RULES TO PLAY THIS GAME**************************\n");
    printf("\t\t\tYou will be asked 10 questions\n");
    printf("\t\t\t-> You have no time limit.\n");
    printf("\t\t\t-> You can use 50:50 Lifeline twice only\n");
    printf("\t\t\t-> No negative marking for wrong answer.\n");
    printf("\t\t\tEnter any button if you have read the rules: ");
    getch();
    system("cls");
}
void information(){
    printf("\t\t\t\t*****************INFORMATION RELATED COVID-19*****************\n");
    printf("-> What is COVID-19?\n\tCOVID-19 is the disease caused by a new coronavirus called SARS-CoV-2.");
    printf("-> WHO first learned of this new virus on 31 December 2019, following a report of a cluster of cases of viral pneumonia in Wuhan, Peoples Republic of China.\n");
    printf("-> The most common symptoms of COVID-19 are:\n\t1. Fever\n\t2. Dry cough\n\t3. Fatigue\n");
    printf("-> Other symptoms that are less common and may affect some patients include:\n\t1. Loss of taste or smell Nasal congestion\n\t2. Conjunctivitis (also known as red eyes)\n\t3. Sore throat \n\t4. Headache Muscle or joint pain\n\t5. Different types of skin rash\n\t6. Nausea or vomiting\n\t7. Diarrhea\n\t8. Chills or dizziness.\n");
    printf("-> Symptoms of severe COVID‐19 disease include:\n\t1. Shortness of breath\n\t2. Loss of appetite\n\t3. Confusion\n\t4. Persistent pain or pressure in the chest\n\t5. High temperature (above 38 °C).\n");
    printf("People of all ages who experience fever and/or cough associated with difficulty breathing or shortness of breath, chest pain or pressure, or loss of speech or movement should seek medical care immediately. If possible, call your health care provider, hotline or health facility first, so you can be directed to the right clinic.\n");
    printf("-> Among those who develop symptoms, most (about 80 percentage) recover from the disease without needing hospital treatment. About 15 Percentage become seriously ill and require oxygen and 5 percentage become critically ill and need intensive care.\n");
    printf("-> Complications leading to death may include respiratory failure, acute respiratory distress syndrome (ARDS), sepsis and septic shock, thromboembolism, and/or multiorgan failure, including injury of the heart, liver or kidneys.\n");
    printf("-> In rare situations, children can develop a severe inflammatory syndrome a few weeks after infection. People aged 60 years and over, and those with underlying medical problems like high blood pressure, heart and lung problems, diabetes, obesity or cancer, are at higher risk of developing serious illness. However, anyone can get sick with COVID-19 and become seriously ill or die at any age. \n");
    printf("-> WHO is working with our Global Technical Network for Clinical Management of COVID-19, researchers and patient groups around the world to design and carry out studies of patients beyond the initial acute course of illness to understand the proportion of patients who have long term effects, how long they persist, and why they occur.  These studies will be used to develop further guidance for patient care.\n");
    printf("-> Stay safe by taking some simple precautions, such as physical distancing, wearing a mask, especially when distancing cannot be maintained, keeping rooms well ventilated, avoiding crowds and close contact, regularly cleaning your hands, and coughing into a bent elbow or tissue. Check local advice where you live and work. Do it all!\n");
    printf("-> Anyone with symptoms should be tested, wherever possible. People who do not have symptoms but have had close contact with someone who is, or may be, infected may also consider testing – contact your local health guidelines and follow their guidance.\n");
    printf("-> While a person is waiting for test results, they should remain isolated from others. Where testing capacity is limited, tests should first be done for those at higher risk of infection, such as health workers, and those at higher risk of severe illness such as older people, especially those living in seniors’ residences or long-term care facilities.\n");
    printf("-> Antibiotics do not work against viruses; they only work on bacterial infections. COVID-19 is caused by a virus, so antibiotics do not work. Antibiotics should not be used as a means of prevention or treatment of COVID-19.\n");
    printf("-> In hospitals, physicians will sometimes use antibiotics to prevent or treat secondary bacterial infections which can be a complication of COVID-19 in severely ill patients. They should only be used as directed by a physician to treat a bacterial infection\n.");
    printf("Enter any button if you have read the information/'s.");
    getch();
    system("cls");
}
int random(){
    srand(time(0));
    return (rand()%9+1);
}
int new_ques(int number){
    int flag =1;
    switch(number){
        int choose_1;
        counter = 0;
        case 0:
        printf("\n\n\n\n\n\t\t\t\t\tThe city where first COVID - 19 case was detected in 2019 was:\nscore = %d\n",counter);
        no1l:
        printf("\t\t\t\t\t1. Wuhan\n\t\t\t\t\t2. Shanghai\n\t\t\t\t\t3. Bejing\n\t\t\t\t\t4. Hongkong\n\n\t\t\t\t\t5. Use 50:50 Lifeline\n\n\n");
        scanf("%d",&ans);
        printf("\n\t\t\t\t\tYour answer is: %d\n\n", ans);
        if(ans == 1){
            next1t:
                system("COLOR A");
            printf("\n\t\t\t\t\tcorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
              system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance_5050 > 2){
                printf("\n\t\t\t\t\tSorry! You have no Lifeline left\n");
                goto no1l;
            }
            else{
                chance_5050++;
                printf("\n\t\t\t\t\tOptions Remaining: \n");
                printf("\t\t\t\t\t1. Wuhan\n\t\t\t\t\t2. Shanghai\n");
                scanf("%d", &ans);
                if(ans == 1)
                    goto next1t;
                else
                    goto next1f;
                }
        }
        else{
            next1f:
            system("COLOR 04");
            printf("\n\t\t\t\t\t\awrong\n");
            printf("\t\t\t\t\tThe correct answer is: Wuhan\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
        case 1:
        printf("\n\n\n\n\n\t\t\t\t\tThe virus affects which part of the body?\nscore = %d\n",counter);
        no2l:
        printf("1. Head\n2. Chest\n3. Legs\n4. Neck\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\nddd", ans);
        if(ans == 2){
            next2t:
                 system("COLOR A");
            printf("\ncorrect!");
           counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance_5050 >= 2){
                printf("Sorry! You have no Lifeline left\n");
                goto no2l;
            }
            else{
                chance_5050++;
                printf("\nOptions Remaining: \n");
                printf("2. Chest\n4. Neck");
                scanf("%d",&ans);
                if(ans == 2)
                    goto next2t;
                else
                    goto next2f;
                }
            }
        else{
            next2f:
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("The correct answer is : Chest\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
     case 2:
        printf("\n\n\n\n\n\t\t\t\t\tThe common symptoms of COVID - 19\nscore = %d\n",counter);
        no3l:
        printf("1. Fever\n2. Dry cough\n3. Tiredness\n4.All of the above\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 4){
            next3t:
                 system("COLOR A");
            printf("\ncorrect!");
           counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance_5050 >= 2){
                printf("Sorry! You have no Lifeline left\n");
                goto no3l;
            }
            else{
                chance_5050++;
                printf("\nOptions Remaining: \n");
                printf("2. Dry Cough\n4. All of the above\n");
                scanf("%d",&ans);
                if(ans == 4)
                    goto next3t;
                else
                    goto next3f;
                }
        }
        else{
            next3f:
            system("COLOR 04");
            printf("\n\awrong\n");
            printf("The correct answer is: All of the above\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
     case 3:
        printf("\n\n\n\n\n\t\t\t\t\tThe  term CORONA was coined by?\nscore = %d\n",counter);
        no4l:
        printf("1. Elsa Cleland \n2. Mark Estelle\n3. Julian Schroeder\n4. Prof. Tony Waterson\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 4){
            next4t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance_5050 >= 2){
                 printf("Sorry! You have no Lifeline left\n");
                goto no4l;
            }
            else{
                chance_5050++;
                printf("\nOptions Remaining: \n");
                printf("1. Elsa clekand\n4. Prof. Tony Waterson\n");
                scanf("%d",&ans);
                if(ans == 4)
                    goto next4t;
                else
                    goto next4f;
            }
        }
        else{
            next4f:
            system("COLOR 04");
            printf("\n\awrong\n");
            printf("The correct answer is: Tony Waterson \n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
     case 4:
        printf("\n\n\n\n\n\t\t\t\t\tCorona diseases are caused by viruses related to RNA viruses?\nscore = %d\n",counter);
        printf("1. True\n2. False\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 1){
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else{
            system("COLOR 04");
            printf("\n\awrong\n");
            printf("The correct answer is: True\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
    case 5:
        printf("\n\n\n\n\n\t\t\t\t\tThe first corona virus disease was discovered in?\nscore = %d\n",counter);
        no5l:
        printf("1. late 2019's\n2. 1960's\n3. Beginning of 2021\n4. Beginning of 2020\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 2){
            next5t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance_5050 >= 2){
                 printf("Sorry! You have no Lifeline left\n");
                goto no5l;
            }
            else{
                chance_5050++;
                printf("\nOptions Remaining: \n");
                printf("1. late 2019's\n2. 1960's \n");
                scanf("%d",&ans);
                if(ans == 2)
                    goto next5t;
                else
                    goto next5f;
            }
        }
        else{
            next5f:
            system("COLOR 04");
            printf("\n\awrong\n");
            printf("Human coronaviruses were discovered in the 1960s, through a variety of experiments in the United States and the United Kingdom.\n");
            Sleep(5000);
            system("cls");
            system ("COLOR 07");
        }
        break;
    case 6:
        printf("\n\n\n\n\n\t\t\t\t\tThe COVID - 19 is a communicable disease:\nscore = %d\n",counter);
        printf("1. True\n2. False\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 1){
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else{
            system("COLOR 04");
            printf("\n\awrong!\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
    case 7:
        printf("\n\n\n\n\n\t\t\t\t\tWhich of the following is not a variant of covid - 19\nscore = %d\n",counter);
        no6l:
        printf("1. P.1\n2. B.1.6172.2\n3. B.11.7\n4. B.1.351\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 3){
            next6t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance_5050 >= 2){
                printf("Sorry! You have no Lifeline left\n");
                goto no6l;
            }
            else{
                chance_5050++;
                printf("\nOptions Remaining: \n");
                printf("1.P.1\n3. B.11.7\n");
                scanf("%d",&ans);
                if(ans == 3)
                    goto next6t;
                else
                    goto next6f;
                }
        }
        else{
            next6f:
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("B.1.1.7(Beta) is a variant of covid - 19 but B.11.7 is not a variant of covid-19\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
    case 8:
        printf("\n\n\n\n\n\t\t\t\t\tWho was the first person to report about corona virus?\nscore = %d\n",counter);
        no7l:
        printf("1. Dr. Zhang Jixian\n2. Niu Lizhi\n3. Jianan Li\n4. Jingsehng Zhou\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 1){
            next7t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
         else if(ans == 5){
            if(chance_5050 >= 2){
                 printf("Sorry! You have no Lifeline left\n");
                goto no7l;
            }
            else{
                chance_5050++;
                printf("\nOptions Remaining: \n");
                printf("1.Dr. Zhang Jixian\n2.Niu Lizhi\n");
                scanf("%d",&ans);
                if(ans == 1)
                    goto next7t;
                else
                    goto next7f;
                }
        }
        else{
            next7f:
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("The correct answer is: Dr. Zhang Jixian\n");
            Sleep(2000);
            system("cls");
             system ("COLOR 07");
        }
        break;
    case 9:
        printf("\n\n\n\n\n\t\t\t\t\tThe official names COVID - 19 wewe issued by the WHO on?\nscore = %d\n",counter);
        no8l:
        printf("1. 1 Jan 2020\n2. 31 December 2019\n3. 11 February 2020 \n4. None of the above\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 3){
            next8t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance_5050 >= 2){
                 printf("Sorry! You have no Lifeline left\n");
                goto no8l;
            }
            else{
                chance_5050++;
                printf("\nOptions Remaining: \n");
                printf("2. 31 December 2019\n3. 11 February 2020 \n");
                scanf("%d",&ans);
                if(ans == 3)
                    goto next8t;
                else
                    goto next8f;
                }
        }
        else{
            next8f:
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("The correct answer is: 11 February 2020\n");
            Sleep(5000);
            system("cls");
           system ("COLOR 07");
        }
        break;
    }
    return counter;
}
int questions(num){
    int choose_1;
     switch(num){
        case 0:
        printf("\n\n\n\n\n\t\t\t\t\tWhat does the 19 in the COVID-19 refer to:\nscore = %d\n",counter);
        no_1l:
        printf("1. There are 19 variants of the corona virus\n2. There are 19 symptoms of coronavirus disease\n3. This is the 19th coronavirus pandemic\n4. The coronavirus and the disease it causes were identifed in 2019\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 4){
            next1_t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance>2){
                printf("Sorry! You have no Lifeline left\n");
                goto no_1l;
            }
            else{
                chance++;
                printf("\nOptions Remaining:\n");
                printf("\n3. This is the 19th coronavirus pandemic\n4. The coronavirus and the disease it causes were identifed in 2019\n");
                scanf("%d",&ans);
                printf("Your answer is: %d\n", ans);
                if(ans == 4){
                    goto next1_t;
                }
                else{
                    goto next1_f;
                }
            }
        }
        else{
            next1_f:
            system("COLOR 04");
            printf("\n\awrong\n");
            printf("The correct answer is: The corona virus and the disease it causes were identified in 2019\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
        case 1:
        printf("\n\n\n\n\n\t\t\t\t\tThere is more than one corona virus. True or False\nscore = %d\n",counter);
        printf("1. True\n2. False\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 1){
                system ("COLOR A");
            printf("\ncorrect!");
           counter += 10;
            Sleep(2000);
            system("cls");
        }
        else{
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("The correct answer is : There are hundreds of coronaviruses, and some of them cause disease in humans, such as mild colds and more serious illnesses or death. The SARS-CoV-2 coronavirus, along with those that cause SARS and MERS are examples of coronaviruses that can cause serious illness in people.\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
     case 2:
        printf("\n\n\n\n\n\t\t\t\t\tThe corona in corona virus means\nscore = %d\n",counter);
        no_2l:
        printf("1. Sun\n2. Beer\n3. Strong\n4. Crown\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 4){
            next2_t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance>2){
                printf("Sorry! You have no Lifeline left\n");
                goto no_2l;
            }
            else{
                    chance++;
                    printf("\nOptions Remaining:\n");
                    printf("3. Strong\n4. Crown\n");
                    scanf("%d",&ans);
                    printf("Your answer is: %d\n", ans);
                    if(ans == 4){
                        goto next2_t;
                    }
                    else{
                        goto next2_f;
                    }
                }
        }
        else{
            next2_f:
            system("COLOR 04");
            printf("\n\awrong\n");
            printf("The correct answer is: Crown. Spike proteins on these viruses’ outer coating give them the appearance of a crown or halo.\n");
            Sleep(5000);
            system("cls");
            system ("COLOR 07");
        }
        break;
     case 3:
        printf("\n\n\n\n\n\t\t\t\t\tAn effective hand sanitizer contains at least ___ percentage of alcohol to kill the coronavirus and other germs:?\nscore = %d\n",counter);
        no_3l:
        printf("1. 30\n2. 45\n3. 60\n4. 80\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 3){
            next3_t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance>2){
                printf("Sorry! You have no Lifeline left\n");
                goto no_3l;
            }
            else{
                chance++;
                printf("\nOptions Remaining:\n");
                printf("2. 45\n3. 60\n");
                scanf("%d", &ans);
                if(ans == 3){
                    goto next3_t;
                }
                else{
                    goto next3_f;
                }
            }
        }
        else{
            next3_f:
            system("COLOR 04");
            printf("\n\awrong\n");
            printf("The correct answer is: 60. Lower alcohol content may make a hand sanitizer less effective in killing the coronavirus and other pathogens. \n");
            Sleep(5000);
            system("cls");
            system ("COLOR 07");
        }
        break;
     case 4:
        printf("\n\n\n\n\n\t\t\t\t\tOnce you are fully vaccinated you may not be required to wear a mask in public places.Ture or False?\nscore = %d\n",counter);
        printf("1. True\n2. False\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 1){
                system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else{
            system("COLOR 04");
            printf("nwrong\n");
            printf("The correct answer is: True. The CDC has updated its recommendations on resuming some activities once you have completed your COVID-19 vaccines and allowed at least two weeks for your immune system to respond after your last shot. Fully vaccinated people can resume activities without wearing a mask or physically distancing, except where required by federal, state, local, tribal, or territorial laws, rules, and regulations, including local business and workplace guidance. \n");
            Sleep(5000);
            system("cls");
            system ("COLOR 07");
        }
        break;
    case 5:
        printf("\n\n\n\n\n\t\t\t\t\tWhen is it safe to be closer than 6 feet to another person who is not sick with COVID-19?\nscore = %d\n",counter);
        no_4l:
        printf("1. When the person is related to you\n2. When you have already had COVID-19\n3. When the person normally lives with you\n4. When you are outdoors.\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 3){
            next_4t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance>2){
                printf("Sorry! You have no lifeline left\n");
                goto no_4l;
            }
            else{
                chance++;
                printf("\nOptions Remaining:\n");
                printf("1. When the person is related to you\n2. Whent the person normally lives with you\n");
                scanf("%d",&ans);
                printf("Your answer is: %d", ans);
                if(ans == 3){
                    goto next_4t;
                }
                else{
                    goto next_4f;
                }
            }
        }
        else{
            next_4f:
            system("COLOR 04");
            printf("\n\awrong\n");
            printf("When the person normally lives with you in your home. When you’re around anyone from outside your regular household, physical distancing and mask-wearing are essential to avoid spreading the coronavirus. Outdoors is generally safer than inside, but you should still maintain physical distance and wear your face mask.\n");
            Sleep(5000);
            system("cls");
            system ("COLOR 07");
        }
        break;
    case 6:
        printf("\n\n\n\n\n\t\t\t\t\tStaying apart from other people when you have been exposed to the coronavirus is called:\nscore = %d\n",counter);
        no5_l:
        printf("1. Physical Distancing\n2. Isolation\n3. Quarantine\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 3){
            next_5t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance>2){
                printf("Sorry! You have no lifeline left.\n");
                goto no5_l;
            }
            else{
                chance++;
                printf("\nOptions Remaining:\n");
                printf("2. Isolation\n3. Quarantine\n");
                scanf("%d",&ans);
                printf("Your answer is: %d", ans);
                if(ans == 3){
                    goto next_5t;
                }
                else{
                    goto next_5f;
                }
            }
        }
        else{
            next_5f:
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("A person who has been exposed to an infectious illness might be under quarantine to wait and see if they will become sick. Physical distancing refers to staying at least 6 feet apart from someone to avoid spreading disease. Isolation is keeping someone sick with COVID-19 apart from other patients in a health care setting.");
            Sleep(5000);
            system("cls");
            system ("COLOR 07");
        }
        break;
    case 7:
        printf("\n\n\n\n\n\t\t\t\t\tWhat is the safest way to celebrate your birthday during the COVID-19 pandemic?\nscore = %d\n",counter);
        no6_l:
        printf("1. Sharing a meal with relatives only.\n2. Having a virtual party using an online conferencing app.\n3. Hitting your favourite bar when its less crowded.\n4. Gathering at a friends house with people you know well.\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 2){
            next_6t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance>2){
                printf("Sorry! You have no lifeline left.\n");
                goto no6_l;
            }
            else{
                chance++;
                printf("\nOptions Remaining:\n");
                printf("1. Sharing a meal with relatives only.\n2. Having a virtual party using an online conferencing app\n");
                scanf("%d", &ans);
                printf("Your answer is %d", ans);
                if(ans == 2){
                    goto next_6t;
                }
                else{
                    goto next_6f;
                }
            }
        }
        else{
            next_6f:
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("Having a virtual party is the safest option.\n");
            Sleep(5000);
            system("cls");
            system ("COLOR 07");
        }
        break;
    case 8:
        printf("\n\n\n\n\n\t\t\t\t\tHaving a food allergy means you should not get a COVID-19 vaccine. True or False?\nscore = %d\n",counter);
        printf("1. True\n2. False\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("Your answer is: %d\n", ans);
        if(ans == 2){
                 system("COLOR A");
            printf("\ncorrect!");
           counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else{
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("The correct answer is: False");
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        break;
    case 9:
        printf("\n\n\n\n\n\t\t\t\t\tCan COVID 19 be cured? \nscore = %d\n",counter);
        no_7l:
        printf("1. Yes- Hot drinks can cure COVID-19\n2. No - COVID-19 is a death sentence.\n3. No - but most people get better by themselves.\n5. Use 50:50 Lifeline\n\n\n");
        printf("Enter your answer here: ");
        scanf("%d",&ans);
        printf("\nYour answer is: %d\n\n", ans);
        if(ans == 3){
            next7_t:
                 system("COLOR A");
            printf("\ncorrect!");
            counter += 10;
            Sleep(2000);
            system("cls");
            system ("COLOR 07");
        }
        else if(ans == 5){
            if(chance>2){
                printf("Sorry! You have no Lifeline left\n");
                goto no_7l;
            }
            else{
                chance++;
                printf("\nOptions Remaining:\n");
                printf("1. Yes-Hot drinks can cure COVID-19\n2. No-but most people get better by themselves\n");
                scanf("%d",&ans);
                printf("Your answer is: %d", ans);
                if(ans == 2){
                    goto next7_t;
                }
                else{
                    goto next7_f;
                }
            }
        }
        else{
            next7_f:
            system("COLOR 04");
            printf("\n\awrong!\n");
            printf("The correct answer is:Most people who get COVID-19 will recover by themselves, normally within 14 days\n");
            Sleep(5000);
            system("cls");
             system ("COLOR 07");
        }
        break;
    }
    return counter;
}
int main(){
    int choose_1,score,num;
    int i, check[10];
    FILE *ptr_1,*ptr;
    printf("\n\n\n\n\t\t\t\t\t\t WELCOME\n");
    printf("\t\t\t\t\t\t*********\n");
    printf("\t\t\t\t\t\t1. New player\n");
    printf("\t\t\t\t\t\t------------------\n");
    printf("\t\t\t\t\t\t2. Old player\n");
    printf("\t\t\t\t\t\t------------------\n");
    scanf("%d",&choose_1);
    printf("\t\t\t\t\t\tLOADING");
    for(i=0;i<=6;i++){
        Sleep(100);
        printf(".");

    }
    if(choose_1 == 1){
        system("cls");
        information();
        help();
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\tEnter your First Name: ");
        printf("");
        scanf("%s",&p1.name);
        printf("\n");
        printf("\t\t\t\t\t\tEnter your age: ");
        printf("");
        scanf("%d",&p1.age);
        printf("\n");
        printf("\t\t\t\t\t\tEnter today's date: ");
        scanf("%s",&p1.date);
        system("cls");
        for(i=0;i<10;i++){

            num = random();
            questions(num);
            }
        int score = questions(num);
        printf("\nYou scored : %d",score);
        ptr_1 = fopen("old_player.txt","a");
        fprintf(ptr_1,"\nName: %s\n", p1.name);
        fprintf(ptr_1,"Age: %d\n",p1.age);
        fprintf(ptr_1,"Date: %s\n",p1.date);
        fprintf(ptr_1,"Score: %d\n", score);
        fclose(ptr_1);
        exit(1);
        }
    else{
        printf("\n\n");
        printf("\t\t\tRecord of previous game: \n");
        ptr = fopen("old_player.txt","r");
        char a = fgetc(ptr);
        do{
            putchar(a);
            a = fgetc(ptr);
        }while(a != EOF);
        getch();
        fclose(ptr);
        system("cls");
        }
        printf("\t\t\t\t\t\tNow the game begins!!");
            for(i=0;i<=6;i++){
            Sleep(100);
            printf(".");
            }
        system("cls");
        help();
        information();
        for(i=0;i<10;i++){
            num = random();
            new_ques(num);
        }
         printf("\nYou scored : %d",score);
        exit(1);
    return 0;
}
