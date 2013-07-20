/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (insn)
     rtx insn;
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  memset (ro, 0, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 830:  /* monitor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 829:  /* mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 809:  /* sse2_punpcklqdq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 797:  /* sse2_lshrti3 */
    case 796:  /* sse2_ashlti3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 759:  /* sse2_umulv2siv2di3 */
    case 758:  /* sse2_umulsidi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 737:  /* cvtpd2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 694:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 691:  /* pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 683:  /* pi2fw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 682:  /* pfpnacc */
    case 681:  /* pfnacc */
    case 680:  /* pfacc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 679:  /* pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 670:  /* subrv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 828:  /* *lfence_insn */
    case 827:  /* *mfence_insn */
    case 667:  /* *sfence_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 766:  /* sse2_pextrw */
    case 635:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 765:  /* sse2_pinsrw */
    case 634:  /* mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 836:  /* hsubv2df3 */
    case 835:  /* hsubv4sf3 */
    case 834:  /* haddv2df3 */
    case 833:  /* haddv4sf3 */
    case 832:  /* addsubv2df3 */
    case 831:  /* addsubv4sf3 */
    case 769:  /* sse2_pshufhw */
    case 768:  /* sse2_pshuflw */
    case 767:  /* sse2_pshufd */
    case 764:  /* sse2_psadbw */
    case 690:  /* pfrsqit1v2sf3 */
    case 688:  /* pfrcpit2v2sf3 */
    case 687:  /* pfrcpit1v2sf3 */
    case 685:  /* pavgusb */
    case 636:  /* mmx_pshufw */
    case 633:  /* mmx_psadbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 763:  /* sse2_uavgv8hi3 */
    case 762:  /* sse2_uavgv16qi3 */
    case 632:  /* mmx_uavgv4hi3 */
    case 631:  /* mmx_uavgv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 630:  /* mmx_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 760:  /* sse2_pmaddwd */
    case 625:  /* mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 757:  /* umulv8hi3_highpart */
    case 756:  /* smulv8hi3_highpart */
    case 624:  /* umulv4hi3_highpart */
    case 623:  /* smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 728:  /* cvttpd2dq */
    case 605:  /* cvttss2si */
    case 601:  /* cvttps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 736:  /* cvtss2sd */
    case 735:  /* cvtsd2ss */
    case 734:  /* cvtsi2sd */
    case 602:  /* cvtsi2ss */
    case 599:  /* cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 808:  /* sse2_punpckldq */
    case 807:  /* sse2_punpcklwd */
    case 806:  /* sse2_punpcklbw */
    case 805:  /* sse2_punpckhdq */
    case 804:  /* sse2_punpckhwd */
    case 803:  /* sse2_punpckhbw */
    case 802:  /* sse2_packuswb */
    case 801:  /* sse2_packssdw */
    case 800:  /* sse2_packsswb */
    case 799:  /* sse2_unpcklpd */
    case 798:  /* sse2_unpckhpd */
    case 662:  /* mmx_punpcklwd */
    case 661:  /* mmx_punpcklbw */
    case 659:  /* mmx_punpckhwd */
    case 658:  /* mmx_punpckhbw */
    case 657:  /* mmx_packuswb */
    case 656:  /* mmx_packssdw */
    case 655:  /* mmx_packsswb */
    case 594:  /* sse_unpcklps */
    case 593:  /* sse_unpckhps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 715:  /* sse2_ucomi */
    case 714:  /* sse2_comi */
    case 592:  /* sse_ucomi */
    case 591:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 713:  /* vmmaskncmpv2df3 */
    case 590:  /* vmmaskncmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 712:  /* vmmaskcmpv2df3 */
    case 589:  /* vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 711:  /* maskncmpv2df3 */
    case 588:  /* maskncmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 572:  /* *sse_nandti3_df */
    case 571:  /* *sse2_nandv2df3 */
    case 564:  /* *sse_nandsf3 */
    case 563:  /* *sse_nandv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 576:  /* *sse2_xordf3 */
    case 575:  /* *sse2_xorv2df3 */
    case 574:  /* *sse2_iordf3 */
    case 573:  /* *sse2_iorv2df3 */
    case 570:  /* *sse2_andv2df3 */
    case 569:  /* *sse2_andv2df3 */
    case 568:  /* *sse_xorsf3 */
    case 567:  /* *sse_xorv4sf3 */
    case 566:  /* *sse_iorsf3 */
    case 565:  /* *sse_iorv4sf3 */
    case 562:  /* *sse_andsf3 */
    case 561:  /* *sse_andv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 558:  /* vmrsqrtv4sf2 */
    case 556:  /* vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 707:  /* vmsminv2df3 */
    case 705:  /* vmsmaxv2df3 */
    case 703:  /* vmdivv2df3 */
    case 701:  /* vmmulv2df3 */
    case 699:  /* vmsubv2df3 */
    case 697:  /* vmaddv2df3 */
    case 598:  /* vmsminv4sf3 */
    case 596:  /* vmsmaxv4sf3 */
    case 554:  /* vmdivv4sf3 */
    case 552:  /* vmmulv4sf3 */
    case 550:  /* vmsubv4sf3 */
    case 548:  /* vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 825:  /* sse2_shufpd */
    case 546:  /* sse_shufps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 823:  /* sse2_movsd */
    case 821:  /* sse2_movlpd */
    case 820:  /* sse2_movhpd */
    case 787:  /* ashlv2di3 */
    case 786:  /* ashlv4si3 */
    case 785:  /* ashlv8hi3 */
    case 784:  /* lshrv2di3 */
    case 783:  /* lshrv4si3 */
    case 782:  /* lshrv8hi3 */
    case 781:  /* ashrv4si3 */
    case 780:  /* ashrv8hi3 */
    case 779:  /* sminv8hi3 */
    case 778:  /* uminv16qi3 */
    case 777:  /* smaxv8hi3 */
    case 776:  /* umaxv16qi3 */
    case 775:  /* gtv4si3 */
    case 774:  /* gtv8hi3 */
    case 773:  /* gtv16qi3 */
    case 772:  /* eqv4si3 */
    case 771:  /* eqv8hi3 */
    case 770:  /* eqv16qi3 */
    case 755:  /* mulv8hi3 */
    case 754:  /* ussubv8hi3 */
    case 753:  /* ussubv16qi3 */
    case 752:  /* sssubv8hi3 */
    case 751:  /* sssubv16qi3 */
    case 750:  /* subv2di3 */
    case 749:  /* subv4si3 */
    case 748:  /* subv8hi3 */
    case 747:  /* subv16qi3 */
    case 746:  /* usaddv8hi3 */
    case 745:  /* usaddv16qi3 */
    case 744:  /* ssaddv8hi3 */
    case 743:  /* ssaddv16qi3 */
    case 742:  /* addv2di3 */
    case 741:  /* addv4si3 */
    case 740:  /* addv8hi3 */
    case 739:  /* addv16qi3 */
    case 706:  /* sminv2df3 */
    case 704:  /* smaxv2df3 */
    case 702:  /* divv2df3 */
    case 700:  /* mulv2df3 */
    case 698:  /* subv2df3 */
    case 696:  /* addv2df3 */
    case 676:  /* mulv2sf3 */
    case 675:  /* pfminv2sf3 */
    case 674:  /* pfmaxv2sf3 */
    case 673:  /* eqv2sf3 */
    case 672:  /* gev2sf3 */
    case 671:  /* gtv2sf3 */
    case 669:  /* subv2sf3 */
    case 668:  /* addv2sf3 */
    case 653:  /* ashlv2si3 */
    case 652:  /* ashlv4hi3 */
    case 650:  /* lshrv2si3 */
    case 649:  /* lshrv4hi3 */
    case 648:  /* ashrv2si3 */
    case 647:  /* ashrv4hi3 */
    case 646:  /* sminv4hi3 */
    case 645:  /* uminv8qi3 */
    case 644:  /* smaxv4hi3 */
    case 643:  /* umaxv8qi3 */
    case 642:  /* gtv2si3 */
    case 641:  /* gtv4hi3 */
    case 640:  /* gtv8qi3 */
    case 639:  /* eqv2si3 */
    case 638:  /* eqv4hi3 */
    case 637:  /* eqv8qi3 */
    case 622:  /* mulv4hi3 */
    case 621:  /* ussubv4hi3 */
    case 620:  /* ussubv8qi3 */
    case 619:  /* sssubv4hi3 */
    case 618:  /* sssubv8qi3 */
    case 616:  /* subv2si3 */
    case 615:  /* subv4hi3 */
    case 614:  /* subv8qi3 */
    case 613:  /* usaddv4hi3 */
    case 612:  /* usaddv8qi3 */
    case 611:  /* ssaddv4hi3 */
    case 610:  /* ssaddv8qi3 */
    case 608:  /* addv2si3 */
    case 607:  /* addv4hi3 */
    case 606:  /* addv8qi3 */
    case 597:  /* sminv4sf3 */
    case 595:  /* smaxv4sf3 */
    case 584:  /* sse2_xorv2di3 */
    case 583:  /* *sse2_xorti3 */
    case 582:  /* sse2_iorv2di3 */
    case 581:  /* *sse2_iorti3 */
    case 578:  /* sse2_andv2di3 */
    case 577:  /* *sse2_andti3 */
    case 553:  /* divv4sf3 */
    case 551:  /* mulv4sf3 */
    case 549:  /* subv4sf3 */
    case 547:  /* addv4sf3 */
    case 544:  /* sse_movss */
    case 542:  /* sse_movlps */
    case 541:  /* sse_movhps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 810:  /* sse2_punpckhqdq */
    case 795:  /* ashlv2di3_ti */
    case 794:  /* ashlv4si3_ti */
    case 793:  /* ashlv8hi3_ti */
    case 792:  /* lshrv2di3_ti */
    case 791:  /* lshrv4si3_ti */
    case 790:  /* lshrv8hi3_ti */
    case 789:  /* ashrv4si3_ti */
    case 788:  /* ashrv8hi3_ti */
    case 660:  /* mmx_punpckhdq */
    case 540:  /* sse_movlhps */
    case 539:  /* sse_movhlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 719:  /* sse2_maskmovdqu_rex64 */
    case 718:  /* sse2_maskmovdqu */
    case 536:  /* mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 822:  /* sse2_loadsd_1 */
    case 709:  /* vmsqrtv2df2 */
    case 663:  /* mmx_punpckldq */
    case 580:  /* sse2_nandv2di3 */
    case 579:  /* *sse2_nandti3 */
    case 560:  /* vmsqrtv4sf2 */
    case 543:  /* sse_loadss_1 */
    case 497:  /* *call_value_1 */
    case 496:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 495:  /* *call_value_pop_1 */
    case 494:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 493:  /* allocate_stack_worker_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 492:  /* *sse_movdfcc_const0_4 */
    case 491:  /* *sse_movdfcc_const0_3 */
    case 490:  /* *sse_movdfcc_const0_2 */
    case 489:  /* *sse_movdfcc_const0_1 */
    case 488:  /* *sse_movsfcc_const0_4 */
    case 487:  /* *sse_movsfcc_const0_3 */
    case 486:  /* *sse_movsfcc_const0_2 */
    case 485:  /* *sse_movsfcc_const0_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 484:  /* sse_movdfcc_eq */
    case 482:  /* sse_movsfcc_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 483:  /* sse_movdfcc */
    case 481:  /* sse_movsfcc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 479:  /* *maxdf_sse */
    case 476:  /* *maxsf_sse */
    case 473:  /* *mindf_sse */
    case 470:  /* *minsf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[1] = 2;
      break;

    case 478:  /* *maxdf_nonieee */
    case 477:  /* *maxdf */
    case 475:  /* *maxsf_nonieee */
    case 474:  /* *maxsf */
    case 472:  /* *mindf_nonieee */
    case 471:  /* *mindf */
    case 469:  /* *minsf_nonieee */
    case 468:  /* *minsf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2);
      recog_data.dup_num[1] = 2;
      break;

    case 467:  /* *movtfcc_1 */
    case 466:  /* *movxfcc_1 */
    case 465:  /* *movdfcc_1 */
    case 464:  /* *movsfcc_1 */
    case 463:  /* *movhicc_noc */
    case 462:  /* *movsicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 460:  /* strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 459:  /* cmpstrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 458:  /* cmpstrqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 457:  /* rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 456:  /* rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 455:  /* strsetqi_1 */
    case 454:  /* strsethi_1 */
    case 453:  /* strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 452:  /* rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 451:  /* rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 450:  /* strmovqi_1 */
    case 449:  /* strmovhi_1 */
    case 448:  /* strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 733:  /* cvttsd2si */
    case 444:  /* *cosextendsfdf2 */
    case 439:  /* *sinextendsfdf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 839:  /* lddqu */
    case 838:  /* movsldup */
    case 837:  /* movshdup */
    case 814:  /* sse2_movdqu */
    case 813:  /* sse2_movdqa */
    case 812:  /* sse2_movupd */
    case 811:  /* sse2_movapd */
    case 730:  /* cvttpd2pi */
    case 725:  /* cvttps2dq */
    case 722:  /* sse2_movntsi */
    case 721:  /* sse2_movntv2di */
    case 720:  /* sse2_movntv2df */
    case 717:  /* sse2_pmovmskb */
    case 716:  /* sse2_movmskpd */
    case 689:  /* pfrsqrtv2sf2 */
    case 686:  /* pfrcpv2sf2 */
    case 557:  /* rsqrtv4sf2 */
    case 555:  /* rcpv4sf2 */
    case 538:  /* sse_movntdi */
    case 537:  /* sse_movntv4sf */
    case 535:  /* mmx_pmovmskb */
    case 534:  /* sse_movmskps */
    case 533:  /* *sse_movups_1 */
    case 532:  /* *sse_movaps_1 */
    case 446:  /* costf2 */
    case 445:  /* cosxf2 */
    case 443:  /* cossf2 */
    case 442:  /* cosdf2 */
    case 441:  /* sintf2 */
    case 440:  /* sinxf2 */
    case 438:  /* sinsf2 */
    case 437:  /* sindf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 423:  /* *fop_tf_7 */
    case 422:  /* *fop_xf_7 */
    case 419:  /* *fop_tf_5 */
    case 418:  /* *fop_xf_5 */
    case 415:  /* *fop_tf_3 */
    case 414:  /* *fop_xf_3 */
    case 409:  /* *fop_df_5 */
    case 407:  /* *fop_df_3 */
    case 402:  /* *fop_sf_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 421:  /* *fop_tf_6 */
    case 420:  /* *fop_xf_6 */
    case 417:  /* *fop_tf_4 */
    case 416:  /* *fop_xf_4 */
    case 413:  /* *fop_tf_2 */
    case 412:  /* *fop_xf_2 */
    case 408:  /* *fop_df_4 */
    case 406:  /* *fop_df_2 */
    case 401:  /* *fop_sf_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 710:  /* maskcmpv2df3 */
    case 587:  /* maskcmpv4sf3 */
    case 411:  /* *fop_tf_1 */
    case 410:  /* *fop_xf_1 */
    case 405:  /* *fop_df_1_sse */
    case 404:  /* *fop_df_1 */
    case 403:  /* *fop_df_1_nosse */
    case 400:  /* *fop_sf_1_sse */
    case 399:  /* *fop_sf_1 */
    case 398:  /* *fop_sf_1_nosse */
    case 397:  /* *fop_tf_comm */
    case 396:  /* *fop_xf_comm */
    case 395:  /* *fop_df_comm_sse */
    case 394:  /* *fop_df_comm */
    case 393:  /* *fop_df_comm_nosse */
    case 392:  /* *fop_sf_comm_sse */
    case 391:  /* *fop_sf_comm */
    case 390:  /* *fop_sf_comm_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 389:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 388:  /* *tls_local_dynamic_base_32_sun */
    case 387:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 386:  /* *tls_global_dynamic_32_sun */
    case 385:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 384:  /* ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 379:  /* return_indirect_internal */
    case 378:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 677:  /* femms */
    case 664:  /* emms */
    case 498:  /* trap */
    case 447:  /* cld */
    case 383:  /* leave */
    case 380:  /* nop */
    case 377:  /* return_internal */
      break;

    case 826:  /* sse2_clflush */
    case 665:  /* ldmxcsr */
    case 382:  /* eh_return_si */
    case 376:  /* blockage */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 373:  /* *call_pop_1 */
    case 372:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 371:  /* doloop_end_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 370:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 369:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 368:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 367:  /* *fp_jcc_6 */
    case 365:  /* *fp_jcc_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 366:  /* *fp_jcc_5 */
    case 364:  /* *fp_jcc_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 363:  /* *fp_jcc_2_sse_only */
    case 362:  /* *fp_jcc_2_sse */
    case 361:  /* *fp_jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 360:  /* *fp_jcc_1_sse_only */
    case 359:  /* *fp_jcc_1_sse */
    case 358:  /* *fp_jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 357:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 356:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 355:  /* *sse_setccdf */
    case 354:  /* *sse_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 304:  /* x86_shrd_1 */
    case 293:  /* x86_shld_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 320:  /* lshrdi3_1 */
    case 302:  /* ashrdi3_1 */
    case 291:  /* ashldi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 290:  /* *one_cmplqi2_2 */
    case 288:  /* *one_cmplhi2_2 */
    case 286:  /* *one_cmplsi2_2 */
    case 250:  /* *negqi2_cmpz */
    case 248:  /* *neghi2_cmpz */
    case 246:  /* *negsi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 243:  /* *xorqi_cc_ext_1 */
    case 212:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 241:  /* *xorqi_2_slp */
    case 224:  /* *iorqi_2_slp */
    case 210:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 202:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 201:  /* *testqi_ext_2 */
    case 200:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 199:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 194:  /* *udivmodsi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 193:  /* udivmodsi4 */
    case 192:  /* divmodhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 195:  /* *udivmodhi_noext */
    case 191:  /* *divmodsi_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 190:  /* *divmodsi4_cltd */
    case 189:  /* *divmodsi4_nocltd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 186:  /* *smulsi3_highpart_insn */
    case 185:  /* *umulsi3_highpart_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 184:  /* *mulsidi3_insn */
    case 183:  /* *umulsidi3_insn */
    case 182:  /* *mulqihi3_insn */
    case 181:  /* *umulqihi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 177:  /* *subqi_3 */
    case 173:  /* *subhi_3 */
    case 170:  /* *subsi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 167:  /* subsi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 239:  /* *xorqi_ext_2 */
    case 238:  /* *xorqi_ext_1 */
    case 228:  /* *iorqi_ext_2 */
    case 227:  /* *iorqi_ext_1 */
    case 214:  /* *andqi_ext_2 */
    case 213:  /* *andqi_ext_1 */
    case 165:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 237:  /* xorqi_ext_0 */
    case 226:  /* iorqi_ext_0 */
    case 211:  /* andqi_ext_0 */
    case 164:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 351:  /* *rotrqi3_1_slp */
    case 349:  /* *rotrqi3_1_one_bit_slp */
    case 342:  /* *rotlqi3_1_slp */
    case 340:  /* *rotlqi3_1_one_bit_slp */
    case 333:  /* *lshrqi3_1_slp */
    case 331:  /* *lshrqi3_1_one_bit_slp */
    case 317:  /* *ashrqi3_1_slp */
    case 315:  /* *ashrqi3_1_one_bit_slp */
    case 236:  /* *xorqi_1_slp */
    case 222:  /* *iorqi_1_slp */
    case 208:  /* *andqi_1_slp */
    case 175:  /* *subqi_1_slp */
    case 159:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 242:  /* *xorqi_cc_2 */
    case 234:  /* *xorhi_3 */
    case 231:  /* *xorsi_3 */
    case 225:  /* *iorqi_3 */
    case 220:  /* *iorhi_3 */
    case 217:  /* *iorsi_3 */
    case 163:  /* *addqi_5 */
    case 156:  /* *addhi_5 */
    case 150:  /* *addsi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 162:  /* *addqi_4 */
    case 155:  /* *addhi_4 */
    case 149:  /* *addsi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 161:  /* *addqi_3 */
    case 154:  /* *addhi_3 */
    case 148:  /* *addsi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 335:  /* *lshrqi2_cmp */
    case 334:  /* *lshrqi2_one_bit_cmp */
    case 329:  /* *lshrhi3_cmp */
    case 328:  /* *lshrhi3_one_bit_cmp */
    case 325:  /* *lshrsi3_cmp */
    case 324:  /* *lshrsi3_one_bit_cmp */
    case 319:  /* *ashrqi3_cmp */
    case 318:  /* *ashrqi3_one_bit_cmp */
    case 313:  /* *ashrhi3_cmp */
    case 312:  /* *ashrhi3_one_bit_cmp */
    case 309:  /* *ashrsi3_cmp */
    case 308:  /* *ashrsi3_one_bit_cmp */
    case 301:  /* *ashlqi3_cmp */
    case 298:  /* *ashlhi3_cmp */
    case 295:  /* *ashlsi3_cmp */
    case 240:  /* *xorqi_cc_1 */
    case 233:  /* *xorhi_2 */
    case 230:  /* *xorsi_2 */
    case 223:  /* *iorqi_2 */
    case 219:  /* *iorhi_2 */
    case 216:  /* *iorsi_2 */
    case 209:  /* *andqi_2 */
    case 206:  /* *andhi_2 */
    case 204:  /* *andsi_2 */
    case 176:  /* *subqi_2 */
    case 172:  /* *subhi_2 */
    case 169:  /* *subsi_2 */
    case 160:  /* *addqi_2 */
    case 153:  /* *addhi_2 */
    case 147:  /* *addsi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 145:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 144:  /* *lea_general_2 */
    case 143:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 141:  /* addqi3_cc */
    case 140:  /* *addsi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 139:  /* *addsi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 480:  /* *pro_epilogue_adjust_stack_1 */
    case 350:  /* *rotrqi3_1 */
    case 348:  /* *rotrqi3_1_one_bit */
    case 347:  /* *rotrhi3 */
    case 346:  /* *rotrhi3_one_bit */
    case 345:  /* *rotrsi3_1 */
    case 344:  /* *rotrsi3_1_one_bit */
    case 343:  /* *rotlqi3_1 */
    case 341:  /* *rotlqi3_1_one_bit */
    case 339:  /* *rotlhi3_1 */
    case 338:  /* *rotlhi3_1_one_bit */
    case 337:  /* *rotlsi3_1 */
    case 336:  /* *rotlsi3_1_one_bit */
    case 332:  /* *lshrqi3_1 */
    case 330:  /* *lshrqi3_1_one_bit */
    case 327:  /* *lshrhi3_1 */
    case 326:  /* *lshrhi3_1_one_bit */
    case 323:  /* *lshrsi3_1 */
    case 322:  /* *lshrsi3_1_one_bit */
    case 321:  /* *lshrdi3_2 */
    case 316:  /* *ashrqi3_1 */
    case 314:  /* *ashrqi3_1_one_bit */
    case 311:  /* *ashrhi3_1 */
    case 310:  /* *ashrhi3_1_one_bit */
    case 307:  /* *ashrsi3_1 */
    case 306:  /* *ashrsi3_1_one_bit */
    case 305:  /* ashrsi3_31 */
    case 303:  /* *ashrdi3_2 */
    case 300:  /* *ashlqi3_1 */
    case 299:  /* *ashlqi3_1_lea */
    case 297:  /* *ashlhi3_1 */
    case 296:  /* *ashlhi3_1_lea */
    case 294:  /* *ashlsi3_1 */
    case 292:  /* *ashldi3_2 */
    case 235:  /* *xorqi_1 */
    case 232:  /* *xorhi_1 */
    case 229:  /* *xorsi_1 */
    case 221:  /* *iorqi_1 */
    case 218:  /* *iorhi_1 */
    case 215:  /* *iorsi_1 */
    case 207:  /* *andqi_1 */
    case 205:  /* *andhi_1 */
    case 203:  /* *andsi_1 */
    case 188:  /* udivqi3 */
    case 187:  /* divqi3 */
    case 180:  /* *mulqi3_1 */
    case 179:  /* *mulhi3_1 */
    case 178:  /* *mulsi3_1 */
    case 174:  /* *subqi_1 */
    case 171:  /* *subhi_1 */
    case 168:  /* *subsi_1 */
    case 166:  /* *subdi3_1 */
    case 158:  /* *addqi_1 */
    case 157:  /* *addqi_1_lea */
    case 152:  /* *addhi_1 */
    case 151:  /* *addhi_1_lea */
    case 146:  /* *addsi_1 */
    case 138:  /* *adddi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 120:  /* fix_trunchi_memory */
    case 115:  /* fix_truncsi_memory */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 119:  /* fix_trunchi_nomemory */
    case 114:  /* fix_truncsi_nomemory */
    case 112:  /* fix_truncdi_memory */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 111:  /* fix_truncdi_nomemory */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 272:  /* absdf2_ifs */
    case 269:  /* abssf2_ifs */
    case 255:  /* negdf2_ifs */
    case 252:  /* negsf2_ifs */
    case 108:  /* *trunctfdf2_1 */
    case 106:  /* *truncxfdf2_1 */
    case 104:  /* *trunctfsf2_1 */
    case 102:  /* *truncxfsf2_1 */
    case 98:  /* *truncdfsf2_1_sse */
    case 97:  /* *truncdfsf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 87:  /* *extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 275:  /* *abstf2_if */
    case 274:  /* *absxf2_if */
    case 273:  /* *absdf2_if */
    case 271:  /* absdf2_memory */
    case 270:  /* *abssf2_if */
    case 268:  /* abssf2_memory */
    case 258:  /* *negtf2_if */
    case 257:  /* *negxf2_if */
    case 256:  /* *negdf2_if */
    case 254:  /* negdf2_memory */
    case 253:  /* *negsf2_if */
    case 251:  /* negsf2_memory */
    case 249:  /* *negqi2_1 */
    case 247:  /* *neghi2_1 */
    case 245:  /* *negsi2_1 */
    case 244:  /* *negdi2_1 */
    case 86:  /* zero_extendsidi2_32 */
    case 84:  /* *zero_extendqisi2_movzbw_and */
    case 83:  /* *zero_extendqisi2_and */
    case 81:  /* *zero_extendqihi2_movzbw_and */
    case 80:  /* *zero_extendqihi2_and */
    case 78:  /* zero_extendhisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 57:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 841:  /* movddup */
    case 818:  /* sse2_loadd */
    case 817:  /* sse2_movq */
    case 738:  /* cvtps2pd */
    case 732:  /* cvtsd2si */
    case 727:  /* cvtpd2dq */
    case 726:  /* cvtdq2pd */
    case 604:  /* cvtss2siq */
    case 603:  /* cvtss2si */
    case 600:  /* cvtps2pi */
    case 436:  /* *sqrtextendsftf2 */
    case 435:  /* *sqrtextendsfxf2 */
    case 434:  /* *sqrtextenddftf2 */
    case 433:  /* *sqrtextenddfxf2 */
    case 430:  /* *sqrtextendsfdf2 */
    case 284:  /* *absextendsftf2 */
    case 283:  /* *absextenddftf2 */
    case 281:  /* *absextendsfxf2 */
    case 280:  /* *absextenddfxf2 */
    case 278:  /* *absextendsfdf2 */
    case 267:  /* *negextendsftf2 */
    case 266:  /* *negextenddftf2 */
    case 264:  /* *negextendsfxf2 */
    case 263:  /* *negextenddfxf2 */
    case 261:  /* *negextendsfdf2 */
    case 55:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 840:  /* loadddup */
    case 824:  /* sse2_storesd */
    case 819:  /* sse2_stored */
    case 816:  /* sse2_movq2dq */
    case 815:  /* sse2_movdq2q */
    case 731:  /* cvtpi2pd */
    case 729:  /* cvtpd2pi */
    case 724:  /* cvtps2dq */
    case 723:  /* cvtdq2ps */
    case 708:  /* sqrtv2df2 */
    case 693:  /* pswapdv2sf2 */
    case 692:  /* pswapdv2si2 */
    case 684:  /* floatv2si2 */
    case 678:  /* pf2id */
    case 559:  /* sqrtv4sf2 */
    case 545:  /* sse_storess */
    case 432:  /* sqrttf2 */
    case 431:  /* sqrtxf2 */
    case 429:  /* sqrtdf2_i387 */
    case 428:  /* sqrtdf2_1_sse_only */
    case 427:  /* sqrtdf2_1 */
    case 426:  /* sqrtsf2_i387 */
    case 425:  /* sqrtsf2_1_sse_only */
    case 424:  /* sqrtsf2_1 */
    case 289:  /* *one_cmplqi2_1 */
    case 287:  /* *one_cmplhi2_1 */
    case 285:  /* *one_cmplsi2_1 */
    case 282:  /* *abstf2_1 */
    case 279:  /* *absxf2_1 */
    case 277:  /* *absdf2_1 */
    case 276:  /* *abssf2_1 */
    case 265:  /* *negtf2_1 */
    case 262:  /* *negxf2_1 */
    case 260:  /* *negdf2_1 */
    case 259:  /* *negsf2_1 */
    case 137:  /* floatditf2 */
    case 136:  /* floatdixf2 */
    case 135:  /* floatsitf2 */
    case 134:  /* floatsixf2 */
    case 133:  /* floathitf2 */
    case 132:  /* floathixf2 */
    case 131:  /* *floatdidf2_sse */
    case 130:  /* *floatdidf2_i387_only */
    case 129:  /* *floatsidf2_sse */
    case 128:  /* *floatsidf2_i387 */
    case 127:  /* floathidf2 */
    case 126:  /* *floatdisf2_i387_only */
    case 125:  /* *floatsisf2_sse */
    case 124:  /* *floatsisf2_i387 */
    case 123:  /* floathisf2 */
    case 118:  /* *fix_trunchi_1 */
    case 117:  /* fix_truncdfsi_sse */
    case 116:  /* fix_truncsfsi_sse */
    case 113:  /* *fix_truncsi_1 */
    case 110:  /* *fix_truncdi_1 */
    case 109:  /* *trunctfdf2_2 */
    case 107:  /* *truncxfdf2_2 */
    case 105:  /* *trunctfsf2_2 */
    case 103:  /* *truncxfsf2_2 */
    case 101:  /* truncdfsf2_sse_only */
    case 100:  /* truncdfsf2_3 */
    case 99:  /* *truncdfsf2_2 */
    case 96:  /* *extenddftf2_1 */
    case 95:  /* *extenddfxf2_1 */
    case 94:  /* *extendsftf2_1 */
    case 93:  /* *extendsfxf2_1 */
    case 92:  /* *extendsfdf2_1_sse_only */
    case 91:  /* *extendsfdf2_1 */
    case 90:  /* extendqisi2 */
    case 89:  /* extendqihi2 */
    case 88:  /* extendhisi2 */
    case 85:  /* *zero_extendqisi2_movzbw */
    case 82:  /* *zero_extendqihi2_movzbw */
    case 79:  /* *zero_extendhisi2_movzwl */
    case 54:  /* *movsi_extzv_1 */
    case 53:  /* *movqi_extv_1 */
    case 52:  /* *movhi_extv_1 */
    case 51:  /* *movsi_extv_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 50:  /* *movstrictqi_xor */
    case 45:  /* *movstricthi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 375:  /* *call_1 */
    case 374:  /* *call_0 */
    case 353:  /* setcc_2 */
    case 56:  /* movsi_insv_1 */
    case 49:  /* *movstrictqi_1 */
    case 44:  /* *movstricthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 77:  /* swaptf */
    case 76:  /* swapxf */
    case 67:  /* *swapdf */
    case 62:  /* *swapsf */
    case 48:  /* *swapqi */
    case 43:  /* *swaphi_2 */
    case 42:  /* *swaphi_1 */
    case 39:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 461:  /* x86_movsicc_0_m1 */
    case 381:  /* set_got */
    case 35:  /* popsi1 */
    case 34:  /* *popsi1_epilogue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 37:  /* *movsi_or */
    case 36:  /* *movsi_xor */
    case 33:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 695:  /* *prefetch_3dnow */
    case 531:  /* movti_internal */
    case 530:  /* *pushv2sf */
    case 529:  /* *pushv8qi */
    case 528:  /* *pushv4hi */
    case 527:  /* *pushv2si */
    case 526:  /* *pushv4si */
    case 525:  /* *pushv4sf */
    case 524:  /* *pushv16qi */
    case 523:  /* *pushv8hi */
    case 522:  /* *pushv2di */
    case 521:  /* *pushv2df */
    case 520:  /* *pushti */
    case 519:  /* *pushv2sf */
    case 518:  /* *pushv8qi */
    case 517:  /* *pushv4hi */
    case 516:  /* *pushv2si */
    case 515:  /* *pushv4si */
    case 514:  /* *pushv4sf */
    case 513:  /* *pushv16qi */
    case 512:  /* *pushv8hi */
    case 511:  /* *pushv2di */
    case 510:  /* *pushv2df */
    case 509:  /* movv16qi_internal */
    case 508:  /* movv8hi_internal */
    case 507:  /* movv2df_internal */
    case 506:  /* movv2sf_internal */
    case 505:  /* movv2si_internal */
    case 504:  /* movv4hi_internal */
    case 503:  /* movv8qi_internal */
    case 502:  /* movv2di_internal */
    case 501:  /* movv4si_internal */
    case 500:  /* movv4sf_internal */
    case 499:  /* *conditional_trap_1 */
    case 352:  /* *setcc_1 */
    case 142:  /* *lea_1 */
    case 75:  /* *movtf_integer */
    case 74:  /* *movxf_integer */
    case 73:  /* *movtf_nointeger */
    case 72:  /* *movxf_nointeger */
    case 71:  /* *pushtf_integer */
    case 70:  /* *pushxf_integer */
    case 69:  /* *pushtf_nointeger */
    case 68:  /* *pushxf_nointeger */
    case 66:  /* *movdf_integer */
    case 65:  /* *movdf_nointeger */
    case 64:  /* *pushdf_integer */
    case 63:  /* *pushdf_nointeger */
    case 61:  /* *movsf_1 */
    case 60:  /* *pushsf */
    case 59:  /* *movdi_2 */
    case 58:  /* *pushdi */
    case 47:  /* *movqi_1 */
    case 46:  /* *pushqi2 */
    case 41:  /* *movhi_1 */
    case 40:  /* *pushhi2 */
    case 38:  /* *movsi_1 */
    case 32:  /* *pushsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 122:  /* x86_fldcw_1 */
    case 25:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 761:  /* sse2_clrti */
    case 666:  /* stmxcsr */
    case 628:  /* mmx_clrdi */
    case 586:  /* sse_clrv2df */
    case 585:  /* sse_clrv4sf */
    case 121:  /* x86_fnstcw_1 */
    case 24:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 654:  /* mmx_ashldi3 */
    case 651:  /* mmx_lshrdi3 */
    case 629:  /* mmx_anddi3 */
    case 627:  /* mmx_xordi3 */
    case 626:  /* mmx_iordi3 */
    case 617:  /* mmx_subdi3 */
    case 609:  /* mmx_adddi3 */
    case 23:  /* *cmpfp_2u_1 */
    case 21:  /* *cmpfp_2_tf_1 */
    case 20:  /* *cmpfp_2_xf_1 */
    case 17:  /* *cmpfp_2_df_1 */
    case 15:  /* *cmpfp_2_sf_1 */
    case 13:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 12:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 11:  /* cmpqi_ext_3_insn */
    case 10:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 198:  /* *testqi_1 */
    case 197:  /* *testhi_1 */
    case 196:  /* testsi_1 */
    case 8:  /* *cmpqi_minus_1 */
    case 4:  /* *cmphi_minus_1 */
    case 1:  /* *cmpsi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 31:  /* *cmpfp_iu_sse_only */
    case 30:  /* *cmpfp_iu_sse */
    case 29:  /* *cmpfp_iu */
    case 28:  /* *cmpfp_i_sse_only */
    case 27:  /* *cmpfp_i_sse */
    case 26:  /* *cmpfp_i */
    case 22:  /* *cmpfp_2u */
    case 19:  /* *cmpfp_2_tf */
    case 18:  /* *cmpfp_2_xf */
    case 16:  /* *cmpfp_2_df */
    case 14:  /* *cmpfp_2_sf */
    case 7:  /* *cmpqi_1 */
    case 6:  /* *cmpqi_ccno_1 */
    case 5:  /* *cmphi_1 */
    case 3:  /* *cmphi_ccno_1 */
    case 2:  /* *cmpsi_1_insn */
    case 0:  /* *cmpsi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    default:
      abort ();
    }
}
