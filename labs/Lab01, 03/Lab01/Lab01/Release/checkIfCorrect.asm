﻿; Listing generated by Microsoft (R) Optimizing Compiler Version 19.33.31630.0 

	TITLE	d:\учеба\constructure of software\labs\spring semester\lab01, 03\lab01\lab01\release\checkifcorrect.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB OLDNAMES

PUBLIC	??_C@_0BD@OMMIGNEP@Wrong?5month?5format@	; `string'
PUBLIC	??_C@_0BF@PDOGNPGA@Wrong?5amount?5of?5data@	; `string'
PUBLIC	??_C@_0BF@DGBFLKOM@Incorrect?5day?5format@	; `string'
PUBLIC	??_C@_0BF@BPJPLNGN@Incorrext?5day?5format@	; `string'
EXTRN	__imp_?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ:PROC
EXTRN	__imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ:PROC
EXTRN	__imp_?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z:PROC
EXTRN	__imp_?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z:PROC
EXTRN	__imp_?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ:PROC
EXTRN	__imp_?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ:PROC
EXTRN	__imp_?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ:PROC
EXTRN	__imp_?rdstate@ios_base@std@@QBEHXZ:PROC
EXTRN	__imp_?good@ios_base@std@@QBE_NXZ:PROC
EXTRN	__imp_?uncaught_exception@std@@YA_NXZ:PROC
EXTRN	__imp_?width@ios_base@std@@QAE_J_J@Z:PROC
EXTRN	__imp_?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z:PROC
EXTRN	__imp_?flags@ios_base@std@@QBEHXZ:PROC
EXTRN	__imp_?width@ios_base@std@@QBE_JXZ:PROC
EXTRN	__imp____std_terminate:PROC
EXTRN	__imp__exit:PROC
EXTRN	__imp_?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A:BYTE
EXTRN	@__security_check_cookie@4:PROC
EXTRN	__imp____CxxFrameHandler3:PROC
?_Fake_alloc@std@@3U_Fake_allocator@1@B	ORG $+1		; std::_Fake_alloc
CONST	ENDS
;	COMDAT ??_C@_0BF@BPJPLNGN@Incorrext?5day?5format@
CONST	SEGMENT
??_C@_0BF@BPJPLNGN@Incorrext?5day?5format@ DB 'Incorrext day format', 00H ; `string'
CONST	ENDS
;	COMDAT ??_C@_0BF@DGBFLKOM@Incorrect?5day?5format@
CONST	SEGMENT
??_C@_0BF@DGBFLKOM@Incorrect?5day?5format@ DB 'Incorrect day format', 00H ; `string'
CONST	ENDS
;	COMDAT ??_C@_0BF@PDOGNPGA@Wrong?5amount?5of?5data@
CONST	SEGMENT
??_C@_0BF@PDOGNPGA@Wrong?5amount?5of?5data@ DB 'Wrong amount of data', 00H ; `string'
CONST	ENDS
;	COMDAT ??_C@_0BD@OMMIGNEP@Wrong?5month?5format@
CONST	SEGMENT
??_C@_0BD@OMMIGNEP@Wrong?5month?5format@ DB 'Wrong month format', 00H ; `string'
CONST	ENDS
PUBLIC	?length@?$_Narrow_char_traits@DH@std@@SAIQBD@Z	; std::_Narrow_char_traits<char,int>::length
PUBLIC	?eq_int_type@?$_Narrow_char_traits@DH@std@@SA_NABH0@Z ; std::_Narrow_char_traits<char,int>::eq_int_type
PUBLIC	?eof@?$_Narrow_char_traits@DH@std@@SAHXZ	; std::_Narrow_char_traits<char,int>::eof
PUBLIC	??0_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z ; std::basic_ostream<char,std::char_traits<char> >::_Sentry_base::_Sentry_base
PUBLIC	??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ ; std::basic_ostream<char,std::char_traits<char> >::_Sentry_base::~_Sentry_base
PUBLIC	??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z ; std::basic_ostream<char,std::char_traits<char> >::sentry::sentry
PUBLIC	??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ ; std::basic_ostream<char,std::char_traits<char> >::sentry::~sentry
PUBLIC	??Bsentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QBE_NXZ ; std::basic_ostream<char,std::char_traits<char> >::sentry::operator bool
PUBLIC	??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z ; std::operator<<<std::char_traits<char> >
PUBLIC	?checkIfCorrect@@YAHHHHHHQAH@Z			; checkIfCorrect
PUBLIC	__xmm@0000001e0000001f0000001c0000001f
PUBLIC	__xmm@0000001f0000001e0000001f0000001e
PUBLIC	__xmm@0000001f0000001f0000001e0000001f
EXTRN	___std_terminate:PROC
EXTRN	__CxxThrowException@8:PROC
EXTRN	___CxxFrameHandler3:PROC
EXTRN	_memcpy:PROC
EXTRN	_memmove:PROC
EXTRN	___security_cookie:DWORD
;	COMDAT __xmm@0000001f0000001f0000001e0000001f
CONST	SEGMENT
__xmm@0000001f0000001f0000001e0000001f DB 01fH, 00H, 00H, 00H, 01eH, 00H, 00H
	DB	00H, 01fH, 00H, 00H, 00H, 01fH, 00H, 00H, 00H
CONST	ENDS
;	COMDAT __xmm@0000001f0000001e0000001f0000001e
CONST	SEGMENT
__xmm@0000001f0000001e0000001f0000001e DB 01eH, 00H, 00H, 00H, 01fH, 00H, 00H
	DB	00H, 01eH, 00H, 00H, 00H, 01fH, 00H, 00H, 00H
CONST	ENDS
;	COMDAT __xmm@0000001e0000001f0000001c0000001f
CONST	SEGMENT
__xmm@0000001e0000001f0000001c0000001f DB 01fH, 00H, 00H, 00H, 01cH, 00H, 00H
	DB	00H, 01fH, 00H, 00H, 00H, 01eH, 00H, 00H, 00H
CONST	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__ehfuncinfo$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z DQ 00000000619930522r ; 1.2944e-313
	DD	FLAT:__unwindtable$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
	DD	01H
	DD	FLAT:__tryblocktable$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
	DQ	00000000000000000r		; 0
	DQ	00000000100000000r		; 2.122e-314
__unwindtable$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z DD 0ffffffffH
	DD	FLAT:__unwindfunclet$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$5
	DD	0ffffffffH
	DD	FLAT:__unwindfunclet$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$2
	DQ	00000000000000001r		; 4.94066e-324
	DQ	00000000000000001r		; 4.94066e-324
	DD	0ffffffffH
	DD	FLAT:___std_terminate
	DD	04H
	DD	FLAT:___std_terminate
__tryblocktable$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z DQ 00000000200000002r ; 4.24399e-314
	DQ	00000000100000003r		; 2.122e-314
	DD	FLAT:__catchsym$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$6
__catchsym$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$6 DQ 00000000000000040r ; 3.16202e-322
	DD	00H
	DD	FLAT:__catch$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$0
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__ehfuncinfo$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ DQ 00000000119930522r ; 2.33398e-314
	DD	FLAT:__unwindtable$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ
	DQ	00000000000000000r		; 0
	DQ	00000000000000000r		; 0
	DQ	00000000500000000r		; 1.061e-313
__unwindtable$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ DD 0ffffffffH
	DD	FLAT:___std_terminate
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__ehfuncinfo$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z DQ 00000000119930522r ; 2.33398e-314
	DD	FLAT:__unwindtable$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z
	DQ	00000000000000000r		; 0
	DQ	00000000000000000r		; 0
	DQ	00000000100000000r		; 2.122e-314
__unwindtable$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z DD 0ffffffffH
	DD	FLAT:__unwindfunclet$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z$0
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__ehfuncinfo$??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ DQ 00000000019930522r ; 2.11987e-315
	DQ	00000000000000000r		; 0
	DQ	00000000000000000r		; 0
	DQ	00000000000000000r		; 0
	DD	05H
xdata$x	ENDS
END
