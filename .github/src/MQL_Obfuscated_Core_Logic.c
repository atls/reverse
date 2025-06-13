
/* WARNING: Control flow encountered bad instruction data */

void __fastcall UndefinedFunction_01710660(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *in_EAX;
  char unaff_BH;
  
  cVar1 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *param_2 = *param_2 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}