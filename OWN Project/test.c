int enteredID;
                                    printf("\nEnter your IEEE ID: ");
                                    scanf("%d",&enteredID);
                                    for(i=0;i<3;i++)
                                    {
                                        if(enteredID!=sclub[i].clubID)
                                        {
                                            printf("\nWrong ID!\n");
                                            return 0;
                                        }
                                        else if(enteredID==sclub[i].clubID)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[i].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[i].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                            else
                                            {
                                                return 0;
                                            }