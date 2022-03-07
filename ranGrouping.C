void ranGrouping(){
    TRandom3 *rnd = new TRandom3(0);
    const char *STUDENT_NAME[] = {
        "Nguyen_Phuc_Huynh",
        "Chau_Thanh_Tai",
        "Phan_Thanh_Xuan",
        "Le_Binh_An",
        "Truong_Thanh_Sang",
        "Do_Quoc_Trong",
        "Phan_Thi_Xuan_Mai",
        "Tran_Hoang_Viet",
        "Nguyen_Cao_Tri",
        "Vo_Nhat_Le",
        "Pham_Thuy_Linh",
        "Pham_Hoang_Lan"
    };
    
    Int_t NSTUDENT =sizeof(STUDENT_NAME)/sizeof(STUDENT_NAME[0]);
    
    Int_t IDSTDGroup[NSTUDENT];
    
    cout<<"No. of students: "<<NSTUDENT<<endl;
    
    Int_t NSTD4GroupA=0;
    Int_t NTRY = 1;
    //random values
    //make sure there are six students per group
    while (NSTD4GroupA!=6) {
        cout<<"Trying "<<NTRY<<" times"<<endl;
        NSTD4GroupA=0;
        for (Int_t istd=0; istd<NSTUDENT; ++istd) {
            Double_t ival = rnd->Uniform(0,1);
            cout<<"val "<<ival<<endl;
            if (ival<0.5) {
                IDSTDGroup[istd] = 0;
                ++NSTD4GroupA;
            }
            else IDSTDGroup[istd] = 1;
        }
        NTRY++;
    }
   
    //Printing member for group A
    cout<<"GROUP A"<<endl;
    Int_t icount = 1;
    for (Int_t istd=0; istd<NSTUDENT; ++istd) {
        if (IDSTDGroup[istd] == 0) {
            cout<<icount<<". "<<STUDENT_NAME[istd]<<endl;
            icount++;
        }
    }
    
    
     //Printing member for group B
    cout<<"GROUP B"<<endl;
    icount = 1;
    for (Int_t istd=0; istd<NSTUDENT; ++istd) {
        if (IDSTDGroup[istd] == 1) {
            cout<<icount<<". "<<STUDENT_NAME[istd]<<endl;
            icount++;
        }
    }
}
