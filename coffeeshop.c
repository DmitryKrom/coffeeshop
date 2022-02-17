#include<stdio.h>
#include<windows.h>





main()
{
    system("chcp 1252");
    system("cls");

    int teeMax = 600;
    int kaffeeMax = 45;
    int kaffeefilterMax = 100;
    int kaffeemilchpottMax = 60;
    int zuckersticksMax = 50;
    int kekseMax = 200;

    int teeTase = 1;
    int kaffeeTaste = 2;
    int kaffeefilterTaste = 3;
    int kaffeemilchpottTaste = 4;
    int zuckersticksTaste = 5;
    int kekseTaste = 6;
    int cancel = 0;


        int teeActuel = teeMax;
        int kaffeeActuel = kaffeeMax;
        int kaffeefilterActuel = kaffeefilterMax;
        int kaffeemilchpottActuel = kaffeemilchpottMax;
        int zuckersticksActuel = zuckersticksMax;
        int kekseActuel = kekseMax;
        int auswahl;
    char programm = 'j';

    while (programm == 'j')
    {
        printf("\nWas möchten Sie entnehmen? Wählen Sie:\n");
        printf("*\t1-Tee\t* 2-Kaffee\t* 3-Kaffeefilter\t* 4-Kaffemilchpöttchen\t* 5-Zuckersticks\t* 6-Kekse\t*\n");
        printf("*************************************************************************************************************************\n");
        printf("Wenn Sie nichts entnehmen möchten, wählen Sie \"%d\" und machen Sie den Kühlschrank zu: ", cancel);
        fflush(stdin);
        scanf("%d", &auswahl);
       while (auswahl == 1 || auswahl == 2 || auswahl == 3 || auswahl == 4 || auswahl == 5 || auswahl ==6)
       {   
           //--------------------------------------------------------------//
           // Auswahl für Tee //
           if (auswahl == 1)
           {
                printf("\nIm Kühlschrank sind im Moment %d Beutel Tee\t", teeActuel);
               // tee(teeActuel);
           int bedarf;
           char zusammenfassung;
           char nachfuellen;
           Sleep(800);
                printf("\tWieviel Teebeutel brauchen Sie? ");
                fflush(stdin);
                scanf("%d", &bedarf);

                teeActuel = teeActuel - bedarf;

                printf("\nMöchten Sie die Zusammenfassung (j/n)? ");
                fflush(stdin);
                scanf("%c", &zusammenfassung);
                if(zusammenfassung == 'j')
                {
                    printf("Im Kühlschrank sind noch %d Beutel Tee\n", teeActuel);
                                if (teeActuel < (teeMax*20/100))
                                {
                                    printf("\nWarnung!!! ZU WENIG TEE IM KÜHLSCHRANK!!!\n");
                                    printf("Nachfüllen (j/n)? ");
                                        fflush(stdin);
                                        scanf("%c", &nachfuellen);
                                        if(nachfuellen == 'j')
                                        {
                                            teeActuel = teeMax;
                                            printf("Es sind %d Teebeutel im Kühlschrank!!!\n", teeActuel);
                                        }else{
                                            printf("\nBitte nicht vergessen: Tee muss nachbeschafft werden!\n");
                                        }
                                }
                 }
            
            
            }

//--------------------------------------------------------------//
           // Auswahl für Kaffee //

if (auswahl == 2)
           {
            printf("Im Kühlschrank ist noch Kaffeepulver für %d Tassen Kaffee\t", kaffeeActuel);
           int bedarf;
           char zusammenfassung;
           char nachfuellen;
           Sleep(800);
                printf("\nFür wie viele Tassen brauchen Sie Kaffee? ");
                fflush(stdin);
                scanf("%d", &bedarf);

                kaffeeActuel = kaffeeActuel - bedarf;

                printf("\nMöchten Sie die Zusammenfassung (j/n)? ");
                fflush(stdin);
                scanf("%c", &zusammenfassung);
                if(zusammenfassung == 'j')
                {
                    printf("Im Kühlschrank ist noch Kaffeepulver für %d Tassen Kaffee\n", kaffeeActuel);
                                if (kaffeeActuel < (kaffeeMax*20/100))
                                {
                                    printf("\nWarnung!!! ZU WENIG KAFFEE IM KÜHLSCHRANK!!!\n");
                                    printf("Nachfüllen (j/n)? ");
                                        fflush(stdin);
                                        scanf("%c", &nachfuellen);
                                        if(nachfuellen == 'j')
                                        {
                                            kaffeeActuel = kaffeeMax;
                                            printf("Es ist Kaffeepulver für %d Tassen Kaffee im Kühlschrank!!!\n", kaffeeActuel);
                                        }else{
                                            printf("\nBitte nicht vergessen: Kaffee muss nachbeschafft werden!\n");
                                        }
                                }
                 }
            
            
            }

            //--------------------------------------------------------------//
           // Auswahl für Kaffeefilter //

if (auswahl == 3)
           {
               printf("Im Kühlschrank sind im Moment %d Kaffeefilter\t", kaffeefilterActuel);
           int bedarf;
           char zusammenfassung;
           char nachfuellen;
           Sleep(800);
                printf("\nWieviele Kaffeefilter brauchen Sie? ");
                fflush(stdin);
                scanf("%d", &bedarf);

                kaffeefilterActuel = kaffeefilterActuel - bedarf;

                printf("\nMöchten Sie die Zusammenfassung (j/n)? ");
                fflush(stdin);
                scanf("%c", &zusammenfassung);
                if(zusammenfassung == 'j')
                {
                    printf("Im Kühlschrank sind noch %d Kaffeefilter\n", kaffeefilterActuel);
                                if (kaffeefilterActuel < (kaffeefilterMax*20/100))
                                {
                                    printf("\nWarnung!!! ZU WENIG KAFFEEFILTER IM KÜHLSCHRANK!!!\n");
                                    printf("Nachfüllen (j/n)? ");
                                        fflush(stdin);
                                        scanf("%c", &nachfuellen);
                                        if(nachfuellen == 'j')
                                        {
                                            kaffeefilterActuel = kaffeefilterMax;
                                            printf("Es sind %d Kaffeefilter im Kühlschrank!!!\n", kaffeefilterActuel);
                                        }else{
                                            printf("\nBitte nicht vergessen: Kaffeefilter müssen nachbeschafft werden!\n");
                                        }
                                }
                 }
            
            
            }

             //--------------------------------------------------------------//
           // Auswahl für Kaffeemilchpöttchen //

if (auswahl == 4)
           {
            printf("Im Kühlschrank sind im Moment %d Kaffeemilchpöttchen\t", kaffeemilchpottActuel);
              
           int bedarf;
           char zusammenfassung;
           char nachfuellen;
           Sleep(800);
                printf("\nWieviele Kaffeemilchpöttchen brauchen Sie? ");
                fflush(stdin);
                scanf("%d", &bedarf);

                kaffeemilchpottActuel = kaffeemilchpottActuel - bedarf;

                printf("\nMöchten Sie die Zusammenfassung (j/n)? ");
                fflush(stdin);
                scanf("%c", &zusammenfassung);
                if(zusammenfassung == 'j')
                {
                    printf("Im Kühlschrank sind noch %d Kaffeemilchpöttchen\n", kaffeemilchpottActuel);
                                if (kaffeemilchpottActuel < (kaffeemilchpottMax*20/100))
                                {
                                    printf("\nWarnung!!! ZU WENIG KAFFEEMILCHPÖTTCHEN IM KÜHLSCHRANK!!!\n");
                                    printf("Nachfüllen (j/n)? ");
                                        fflush(stdin);
                                        scanf("%c", &nachfuellen);
                                        if(nachfuellen == 'j')
                                        {
                                            kaffeemilchpottActuel = kaffeemilchpottMax;
                                            printf("Es sind %d Kaffeemilchpöttchen im Kühlschrank!!!\n", kaffeemilchpottActuel);
                                        }else{
                                            printf("\nBitte nicht vergessen: Kaffeemilchpöttchen müssen nachbeschafft werden!\n");
                                        }
                                }
                }
            
            
            }


                         //--------------------------------------------------------------//
                        // Auswahl für Zuckersticks //

if (auswahl == 5)
           {
              printf("Im Kühlschrank sind im Moment %d Zuckersticks\t", zuckersticksActuel);
           int bedarf;
           char zusammenfassung;
           char nachfuellen;
           Sleep(800);
                printf("\nWieviele Zuckersticks brauchen Sie? ");
                fflush(stdin);
                scanf("%d", &bedarf);

                zuckersticksActuel = zuckersticksActuel - bedarf;

                printf("\nMöchten Sie die Zusammenfassung (j/n)? ");
                fflush(stdin);
                scanf("%c", &zusammenfassung);
                if(zusammenfassung == 'j')
                {
                    printf("Im Kühlschrank sind noch %d Zuckersticks\n", zuckersticksActuel);
                                if (zuckersticksActuel < (zuckersticksMax*20/100))
                                {
                                    printf("\nWarnung!!! ZU WENIG ZUCKERSTICKS IM KÜHLSCHRANK!!!\n");
                                    printf("Nachfüllen (j/n)? ");
                                        fflush(stdin);
                                        scanf("%c", &nachfuellen);
                                        if(nachfuellen == 'j')
                                        {
                                            zuckersticksActuel = zuckersticksMax;
                                            printf("Es sind %d Zuckersticks im Kühlschrank!!!\n", zuckersticksActuel);
                                        }else{
                                            printf("\nBitte nicht vergessen: Zuckersticks müssen nachbeschafft werden!\n");
                                        }
                                }
                }
            
            
            }
            
                         //--------------------------------------------------------------//
                        // Auswahl für Kekse //

if (auswahl == 6)
           {
              printf("Im Kühlschrank sind im Moment %d Kekse\t", kekseActuel);
           int bedarf;
           char zusammenfassung;
           char nachfuellen;
           Sleep(800);
                printf("\nWieviele Kekse brauchen Sie? ");
                fflush(stdin);
                scanf("%d", &bedarf);

                kekseActuel = kekseActuel - bedarf;

                printf("\nMöchten Sie die Zusammenfassung (j/n)? ");
                fflush(stdin);
                scanf("%c", &zusammenfassung);
                if(zusammenfassung == 'j')
                {
                    printf("Im Kühlschrank sind noch %d Kekse\n", kekseActuel);
                                if (kekseActuel < (kekseMax*20/100))
                                {
                                    printf("\nWarnung!!! ZU WENIG KEKSE IM KÜHLSCHRANK!!!\n");
                                    printf("Nachfüllen (j/n)? ");
                                        fflush(stdin);
                                        scanf("%c", &nachfuellen);
                                        if(nachfuellen == 'j')
                                        {
                                            kekseActuel = kekseMax;
                                            printf("Es sind %d Kekse im Kühlschrank!!!\n", kekseActuel);
                                        }else{
                                            printf("\nBitte nicht vergessen: Kekse müssen nachbeschafft werden!\n");
                                        }
                                }
                }
            
            
            }




               auswahl = cancel;

        }
        printf("Fortsetzen? ");
        fflush(stdin);
        scanf("%c", &programm);
    }
    

}

