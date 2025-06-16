
/* WARNING: Removing unreachable block (ram,0x00780047) */
/* WARNING: Removing unreachable block (ram,0x0077f99b) */
/* WARNING: Removing unreachable block (ram,0x0077f8cd) */
/* WARNING: Removing unreachable block (ram,0x0077f7f6) */
/* WARNING: Removing unreachable block (ram,0x0077f8df) */
/* WARNING: Removing unreachable block (ram,0x0077fa3e) */
/* WARNING: Removing unreachable block (ram,0x00780064) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
UndefinedFunction_0077f60f
          (int param_1,undefined1 *param_2,code *param_3,short *param_4,char param_5)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  short *psVar7;
  ushort *puVar8;
  short *psVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  code *pcVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  short ***pppsVar19;
  undefined4 uVar20;
  short **ppsStack_5e8;
  short **ppsStack_5e4;
  uint uStack_5e0;
  int iStack_5dc;
  int *piStack_5d8;
  short **ppsStack_5d4;
  short ***pppsStack_5d0;
  short *psStack_5cc;
  short *psStack_5c8;
  short *psStack_5c4;
  short *psStack_5c0;
  short **ppsStack_5bc;
  int aiStack_5b8 [2];
  code *pcStack_5b0;
  short *psStack_5ac;
  short *psStack_5a8;
  int iStack_5a4;
  short *psStack_5a0;
  int iStack_59c;
  undefined4 uStack_58c;
  int iStack_588;
  undefined4 uStack_584;
  int iStack_57c;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  uint uStack_568;
  undefined4 uStack_4ec;
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [20];
  undefined4 auStack_4bc [5];
  short *apsStack_4a8 [5];
  short *apsStack_494 [5];
  undefined4 uStack_480;
  short asStack_46c [6];
  undefined1 auStack_460 [516];
  undefined4 uStack_25c;
  short asStack_258 [8];
  short **ppsStack_248;
  short **ppsStack_22c;
  
  if ((((param_2 == (undefined1 *)0x0) || (param_3 == (code *)0x0)) || (*(short *)param_3 == 0)) ||
     ((param_4 == (short *)0x0 || (*param_4 == 0)))) {
    return 0;
  }
  iStack_59c = 0xffffffff;
  psStack_5a0 = (short *)param_2;
  psStack_5a8 = (short *)(param_1 + 0x11a);
  iStack_5a4 = 0x80;
  psStack_5ac = (short *)0x77f66d;
  iStack_57c = param_1;
  func_0x0074e8da();
  psStack_5ac = (short *)&DAT_ffffffff;
  pcStack_5b0 = param_3;
  aiStack_5b8[0] = param_1 + 0x21a;
  aiStack_5b8[1] = 0x28;
  ppsStack_5bc = (short **)0x77f67e;
  func_0x0074e8da();
  ppsStack_5bc = (short **)0xffffffff;
  psStack_5c0 = param_4;
  psStack_5c8 = (short *)(param_1 + 0x26a);
  psStack_5c4 = (short *)0x80;
  psStack_5cc = (short *)0x77f692;
  func_0x0074e8da();
  *(undefined2 *)(param_1 + 0x5022) = 0;
  *(undefined4 *)(param_1 + 0x5280) = 0;
  *(undefined4 *)(param_1 + 0x5284) = 0;
  *(undefined2 *)(param_1 + 0x5122) = 0;
  *(undefined2 *)(param_1 + 0x5172) = 0;
  psVar9 = (short *)(param_1 + 0x36a);
  if ((*psVar9 == 0) && (param_5 != '\0')) {
    iStack_59c = 0x103;
    psStack_5a0 = (short *)auStack_460;
    uStack_570 = 0xffffffff;
    iStack_5a4 = 0;
    uStack_574 = 0x174ba48;
    psStack_5a8 = (short *)0x77f6f5;
    iVar4 = (*_api_indirectEntry)();
    if ((iVar4 != 0) && (asStack_46c[0] != 0)) {
      psStack_5a8 = (short *)0x7ff;
      pcStack_5b0 = (code *)asStack_46c;
      aiStack_5b8[1] = 0x77f723;
      psStack_5ac = psVar9;
      cVar3 = func_0x00775c5f();
      if (cVar3 != '\0') {
        pcStack_5b0 = (code *)0x77f736;
        psStack_5ac = psVar9;
        func_0x0077ee6f();
        psStack_5a8 = (short *)0x7e;
        pcStack_5b0 = (code *)((int)&uStack_56c + 2);
        psStack_5ac = (short *)0x0;
        aiStack_5b8[1] = 0x77f744;
        internal_memsetOptimized();
        psVar7 = (short *)&uStack_56c;
        uVar12 = 0x3f;
        if (psVar9 == (short *)0x0) {
LAB_0077f7fd:
          uStack_56c = uStack_56c & 0xffff0000;
        }
        else {
          psStack_5a8 = (short *)&ptr_bigAskPrice;
          uStack_56c = uStack_56c & 0xffff0000;
          pcStack_5b0 = (code *)0x77f76a;
          psStack_5ac = psVar9;
          iVar4 = func_0x00743f57();
          if (iVar4 == 0) goto LAB_0077f7fd;
          sVar2 = *(short *)(iVar4 + 0x16);
          psVar9 = (short *)(iVar4 + 0x16);
          for (; (((sVar2 != 0 && (sVar2 != 0x7c)) && (sVar2 != 0x26)) &&
                 (((sVar2 != 0xd && (sVar2 != 10)) && (1 < uVar12)))); uVar12 = uVar12 - 1) {
            psVar9 = psVar9 + 1;
            *psVar7 = sVar2;
            psVar7 = psVar7 + 1;
            sVar2 = *psVar9;
          }
          psVar9 = (short *)&uStack_56c;
          *psVar7 = 0;
          do {
            sVar2 = *psVar9;
            psVar9 = psVar9 + 1;
          } while (sVar2 != 0);
          if ((uint)((int)psVar9 - ((int)&uStack_56c + 2) >> 1) < 8) goto LAB_0077f7fd;
          psStack_5a8 = (short *)&uStack_56c;
          psStack_5ac = (short *)0x77f7ed;
          lVar16 = func_0x0074faee();
          if (lVar16 < 10000) goto LAB_0077f7fd;
        }
        psVar9 = asStack_46c;
        uVar12 = 0x103;
        if ((short *)(iStack_588 + 0x36a) != (short *)0x0) {
          psStack_5a8 = (short *)0x174ee2c;
          asStack_46c[0] = 0;
          pcStack_5b0 = (code *)0x77f834;
          psStack_5ac = (short *)(iStack_588 + 0x36a);
          iVar4 = func_0x00743f57();
          if (iVar4 != 0) {
            sVar2 = *(short *)(iVar4 + 0x2c);
            psVar7 = (short *)(iVar4 + 0x2c);
            for (; ((sVar2 != 0 && (sVar2 != 0x7c)) &&
                   ((sVar2 != 0x26 && (((sVar2 != 0xd && (sVar2 != 10)) && (1 < uVar12))))));
                uVar12 = uVar12 - 1) {
              psVar7 = psVar7 + 1;
              *psVar9 = sVar2;
              psVar9 = psVar9 + 1;
              sVar2 = *psVar7;
            }
            *psVar9 = 0;
            if (asStack_46c[0] != 0) {
              psStack_5a8 = asStack_46c;
              psStack_5ac = (short *)0x77f8a5;
              lVar16 = func_0x0074faee();
              psStack_5a8 = (short *)0x0;
              psStack_5ac = (short *)0x77f8b3;
              lVar17 = func_0x0074fbd5();
              if ((CONCAT44((int)((ulonglong)lVar17 >> 0x20) - (uint)((uint)lVar17 < 0x1c20),
                            (uint)lVar17 - 0x1c20) <= lVar16) && (lVar16 <= lVar17)) {
                if ((ushort)uStack_56c == 0) goto LAB_0077fcd7;
                psStack_5a8 = (short *)0x7c;
                pcStack_5b0 = (code *)auStack_4e8;
                psStack_5ac = (short *)0x0;
                aiStack_5b8[1] = 0x77f904;
                internal_memsetOptimized();
                pcVar10 = _api_sendOrder;
                psStack_5a8 = (short *)&stack0xfffffa6c;
                uStack_4ec = 0;
                uStack_58c = 0;
                psStack_5ac = (short *)0x20119;
                pcStack_5b0 = (code *)0x0;
                aiStack_5b8[1] = 0x174f94c;
                aiStack_5b8[0] = -0x7ffffffe;
                ppsStack_5bc = (short **)0x77f948;
                iVar4 = (*_api_sendOrder)();
                pcVar13 = _api_postMarketUpdate/api_commitOrderState;
                if (iVar4 == 0) {
                  psStack_5a8 = (short *)&stack0xfffffa70;
                  psStack_5ac = (short *)&uStack_4ec;
                  pcStack_5b0 = (code *)&uStack_58c;
                  aiStack_5b8[1] = 0;
                  aiStack_5b8[0] = 0x174c844;
                  ppsStack_5bc = (short **)0x0;
                  psStack_5c0 = (short *)0x77f96f;
                  iVar4 = (*_api_getMarketData)();
                  pcVar13 = _api_postMarketUpdate/api_commitOrderState;
                  psStack_5c0 = psStack_5ac;
                  psStack_5c4 = (short *)0x77f97d;
                  (*_api_postMarketUpdate/api_commitOrderState)();
                  if (iVar4 != 0) goto LAB_0077f9ae;
                  psStack_5a8 = (short *)&uStack_4ec;
                  psStack_5ac = (short *)0x77f98e;
                  lVar16 = func_0x0074faee();
                  if (lVar16 < 10000) goto LAB_0077f9ae;
LAB_0077fa49:
                  if ((ushort)uStack_4ec != 0) {
                    psVar9 = asStack_46c;
                    asStack_46c[0] = 0;
                    uVar12 = 0x103;
                    psStack_5ac = (short *)(iStack_588 + 0x36a);
                    psStack_5a8 = (short *)0x174ee5c;
                    pcStack_5b0 = (code *)0x77fa82;
                    iVar4 = func_0x00743f57();
                    if (iVar4 == 0) goto LAB_0077fcd7;
                    sVar2 = *(short *)(iVar4 + 0x26);
                    psVar7 = (short *)(iVar4 + 0x26);
                    for (; ((sVar2 != 0 && (sVar2 != 0x7c)) &&
                           ((sVar2 != 0x26 && (((sVar2 != 0xd && (sVar2 != 10)) && (1 < uVar12))))))
                        ; uVar12 = uVar12 - 1) {
                      psVar7 = psVar7 + 1;
                      *psVar9 = sVar2;
                      psVar9 = psVar9 + 1;
                      sVar2 = *psVar7;
                    }
                    *psVar9 = 0;
                    pcVar10 = _api_sendOrder;
                  }
                }
                else {
LAB_0077f9ae:
                  psStack_5a8 = (short *)&stack0xfffffa6c;
                  psStack_5ac = (short *)0x20119;
                  pcStack_5b0 = (code *)0x0;
                  aiStack_5b8[1] = 0x174f94c;
                  aiStack_5b8[0] = -0x7fffffff;
                  uStack_4ec = 0;
                  uStack_58c = 0;
                  ppsStack_5bc = (short **)0x77f9e9;
                  iVar4 = (*pcVar10)();
                  if (iVar4 == 0) {
                    psStack_5a8 = (short *)&stack0xfffffa70;
                    psStack_5ac = (short *)&uStack_4ec;
                    pcStack_5b0 = (code *)&uStack_58c;
                    aiStack_5b8[1] = 0;
                    aiStack_5b8[0] = 0x174c844;
                    ppsStack_5bc = (short **)0x0;
                    psStack_5c0 = (short *)0x77fa14;
                    iVar4 = (*_api_getMarketData)();
                    psStack_5c0 = psStack_5ac;
                    psStack_5c4 = (short *)0x77fa1c;
                    (*pcVar13)();
                    if (iVar4 == 0) {
                      psStack_5a8 = (short *)&uStack_4ec;
                      psStack_5ac = (short *)0x77fa31;
                      lVar16 = func_0x0074faee();
                      if (9999 < lVar16) goto LAB_0077fa49;
                    }
                  }
                  uStack_4ec = uStack_4ec & 0xffff0000;
                }
                puVar8 = (ushort *)&uStack_56c;
                puVar5 = (ushort *)&uStack_4ec;
                do {
                  uVar1 = *puVar5;
                  bVar15 = uVar1 < *puVar8;
                  if (uVar1 != *puVar8) {
LAB_0077fb1b:
                    uVar12 = -(uint)bVar15 | 1;
                    goto LAB_0077fb20;
                  }
                  if (uVar1 == 0) break;
                  uVar1 = puVar5[1];
                  bVar15 = uVar1 < puVar8[1];
                  if (uVar1 != puVar8[1]) goto LAB_0077fb1b;
                  puVar5 = puVar5 + 2;
                  puVar8 = puVar8 + 2;
                } while (uVar1 != 0);
                uVar12 = 0;
LAB_0077fb20:
                if (uVar12 == 0) goto LAB_0077fcd7;
                psStack_5a8 = (short *)0x77fb32;
                cVar3 = func_0x005b420f();
                pcVar13 = _LAB_01710042+2;
                if (cVar3 == '\0') {
                  psStack_5a8 = (short *)&stack0xfffffa6c;
                  psStack_5ac = (short *)0x20106;
                  pcStack_5b0 = (code *)0x0;
                  aiStack_5b8[1] = 0x174f94c;
                  aiStack_5b8[0] = -0x7ffffffe;
                  ppsStack_5bc = (short **)0x77fb5c;
                  iVar4 = (*pcVar10)();
                  if (iVar4 != 0) {
                    psStack_5a8 = (short *)0x0;
                    psStack_5ac = (short *)&stack0xfffffa6c;
                    pcStack_5b0 = (code *)0x0;
                    aiStack_5b8[1] = 0x100;
                    aiStack_5b8[0] = 0;
                    ppsStack_5bc = (short **)0x0;
                    psStack_5c0 = (short *)0x0;
                    psStack_5c4 = (short *)0x174f94c;
                    psStack_5c8 = (short *)0x80000002;
                    psStack_5cc = (short *)0x77fb80;
                    iVar4 = (*pcVar13)();
                    if (iVar4 != 0) goto LAB_0077fb8e;
                  }
                  psStack_5ac = (short *)0x77fb8e;
                  psStack_5a8 = (short *)0x0;
                  (*_api_postMarketUpdate/api_commitOrderState)();
                }
LAB_0077fb8e:
                pcVar10 = _MQL_OrderComment;
                psVar9 = (short *)&uStack_56c;
                do {
                  sVar2 = *psVar9;
                  psVar9 = psVar9 + 1;
                } while (sVar2 != 0);
                psVar9 = (short *)(((int)psVar9 - ((int)&uStack_56c + 2) >> 1) * 2 + 2);
                if (psVar9 != (short *)0x0) {
                  psStack_5a8 = (short *)&stack0xfffffa6c;
                  psStack_5ac = (short *)0x20106;
                  pcStack_5b0 = (code *)0x0;
                  aiStack_5b8[1] = 0x174f94c;
                  aiStack_5b8[0] = -0x7ffffffe;
                  ppsStack_5bc = (short **)0x77fbd9;
                  iVar4 = (*_api_sendOrder)();
                  if (iVar4 == 0) {
                    psStack_5ac = (short *)&uStack_56c;
                    pcStack_5b0 = FUN_00000001;
                    aiStack_5b8[1] = 0;
                    aiStack_5b8[0] = 0x174c844;
                    ppsStack_5bc = (short **)0x0;
                    psStack_5c0 = (short *)0x77fbf2;
                    psStack_5a8 = psVar9;
                    (*pcVar10)();
                    psStack_5c0 = psStack_5ac;
                    psStack_5c4 = (short *)0x77fbfc;
                    (*_api_postMarketUpdate/api_commitOrderState)();
                  }
                }
                psStack_5a8 = (short *)0x77fc06;
                cVar3 = func_0x005b420f();
                pcVar14 = _api_postMarketUpdate/api_commitOrderState;
                if (cVar3 == '\0') {
                  psStack_5a8 = (short *)&stack0xfffffa6c;
                  psStack_5ac = (short *)0x20106;
                  pcStack_5b0 = (code *)0x0;
                  aiStack_5b8[1] = 0x174f94c;
                  aiStack_5b8[0] = -0x7fffffff;
                  ppsStack_5bc = (short **)0x77fc2e;
                  iVar4 = (*_api_sendOrder)();
                  if (iVar4 != 0) {
                    psStack_5a8 = (short *)0x0;
                    psStack_5ac = (short *)&stack0xfffffa6c;
                    pcStack_5b0 = (code *)0x0;
                    aiStack_5b8[1] = 0x100;
                    aiStack_5b8[0] = 0;
                    ppsStack_5bc = (short **)0x0;
                    psStack_5c0 = (short *)0x0;
                    psStack_5c4 = (short *)0x174f94c;
                    psStack_5c8 = (short *)0x80000001;
                    psStack_5cc = (short *)0x77fc52;
                    iVar4 = (*pcVar13)();
                    pcVar14 = _api_postMarketUpdate/api_commitOrderState;
                    if (iVar4 != 0) goto LAB_0077fc6a;
                  }
                  pcVar14 = _api_postMarketUpdate/api_commitOrderState;
                  psStack_5ac = (short *)0x77fc62;
                  psStack_5a8 = (short *)0x0;
                  (*_api_postMarketUpdate/api_commitOrderState)();
                }
LAB_0077fc6a:
                psVar9 = (short *)&uStack_56c;
                do {
                  sVar2 = *psVar9;
                  psVar9 = psVar9 + 1;
                } while (sVar2 != 0);
                psVar9 = (short *)(((int)psVar9 - ((int)&uStack_56c + 2) >> 1) * 2 + 2);
                if (psVar9 != (short *)0x0) {
                  psStack_5a8 = (short *)&stack0xfffffa6c;
                  psStack_5ac = (short *)0x20106;
                  pcStack_5b0 = (code *)0x0;
                  aiStack_5b8[1] = 0x174f94c;
                  aiStack_5b8[0] = -0x7fffffff;
                  ppsStack_5bc = (short **)0x77fcaf;
                  iVar4 = (*_api_sendOrder)();
                  if (iVar4 == 0) {
                    psStack_5ac = (short *)&uStack_56c;
                    pcStack_5b0 = FUN_00000001;
                    aiStack_5b8[1] = 0;
                    aiStack_5b8[0] = 0x174c844;
                    ppsStack_5bc = (short **)0x0;
                    psStack_5c0 = (short *)0x77fcc8;
                    psStack_5a8 = psVar9;
                    (*pcVar10)();
                    psStack_5c0 = psStack_5ac;
                    psStack_5c4 = (short *)0x77fcce;
                    (*pcVar14)();
                  }
                }
                goto LAB_0077fcd7;
              }
            }
          }
        }
        uStack_56c = uStack_56c & 0xffff0000;
      }
    }
LAB_0077fcd7:
    psStack_5a8 = (short *)0x77fce0;
    func_0x00775ddf();
  }
  if (*(short *)(iStack_57c + 0x136a) != 0) goto LAB_00780168;
  iStack_59c = 0x77fcfe;
  init_fileHandleStruct();
  uStack_584 = 0;
  iStack_59c = 0x77fd0f;
  func_0x005b40af();
  uStack_574 = 0;
  uStack_570 = 0;
  uStack_56c = 0;
  iStack_59c = 0x77fd2d;
  uStack_568 = (*_LAB_0171066a+6)();
  iStack_59c = 0x1346e70;
  psStack_5a0 = (short *)0x10;
  uStack_568 = uStack_568 & 0xffff;
  iStack_5a4 = 0xb8;
  psStack_5ac = (short *)&uStack_574;
  psStack_5a8 = (short *)0x1753f50;
  pcStack_5b0 = (code *)0x77fd4f;
  iVar4 = func_0x00753533();
  if ((iVar4 == 0) || (psStack_5a8 = *(short **)(iVar4 + 4), psStack_5a8 == (short *)0x0)) {
    iStack_59c = -1;
    psStack_5a0 = (short *)&DAT_0174ee84;
    psStack_5a8 = asStack_258;
    iStack_5a4 = 0x1f;
    psStack_5ac = (short *)0x77fd8c;
    func_0x0074e8da();
  }
  else {
    iStack_59c = 0x1f;
    psStack_5a0 = asStack_258;
    iStack_5a4 = -1;
    psStack_5ac = (short *)0x0;
    pcStack_5b0 = (code *)0x0;
    aiStack_5b8[1] = 0x77fd74;
    (*_DAT_01710658)();
  }
  aiStack_5b8[1] = 0x77fda2;
  func_0x0078757f();
  aiStack_5b8[1] = 0x77fdae;
  func_0x005b3fef();
  pcVar10 = _DAT_01710c1c;
  aiStack_5b8[1] = 1;
  aiStack_5b8[0] = 0x77fdbc;
  psVar9 = (short *)(*_DAT_01710c1c)();
  aiStack_5b8[0] = 0;
  ppsStack_5bc = (short **)0x77fdc2;
  psStack_5cc = (short *)(*pcVar10)();
  ppsStack_5bc = ppsStack_22c;
  psStack_5c0 = (short *)(iStack_5a4 + 0xffU & 0xfffff00);
  psStack_5c4 = psStack_5a0;
  pppsStack_5d0 = (short ***)0x174ee90;
  ppsStack_5d4 = (short **)0x1ff;
  iVar11 = iStack_59c + 0x136a;
  iStack_5dc = 0x77fdf4;
  piStack_5d8 = (int *)iVar11;
  psStack_5c8 = psVar9;
  func_0x005b402f();
  pcVar10 = _api_sendOrder;
  ppsStack_5bc = &psStack_5a8;
  iStack_5a4 = 0x206;
  uStack_480 = 0;
  psStack_5a8 = (short *)0x0;
  psStack_5a0 = (short *)0x0;
  psStack_5c0 = (short *)0x20119;
  psStack_5c4 = (short *)0x0;
  psStack_5c8 = (short *)0x174ef20;
  psStack_5cc = (short *)0x80000002;
  pppsStack_5d0 = (short ***)0x77fe38;
  iVar4 = (*_api_sendOrder)();
  if (iVar4 == 0) {
    pppsStack_5d0 = (short ***)aiStack_5b8;
    ppsStack_5d4 = apsStack_494;
    piStack_5d8 = aiStack_5b8 + 1;
    iStack_5dc = 0;
    uStack_5e0 = 0x174eef8;
    ppsStack_5e4 = ppsStack_5bc;
    ppsStack_5e8 = (short **)0x77fe63;
    iVar4 = (*_api_getMarketData)();
    ppsStack_5e8 = ppsStack_5d4;
    (*_api_postMarketUpdate/api_commitOrderState)();
    if (iVar4 == 0) {
      pppsStack_5d0 = (short ***)apsStack_494;
      ppsStack_5d4 = (short **)0x77fe80;
      uVar12 = func_0x0077c72f();
      if (3 < uVar12) {
        pppsStack_5d0 = (short ***)0x77fe98;
        func_0x0078757f();
        pppsStack_5d0 = (short ***)0xffffffff;
        ppsStack_5d4 = (short **)0x174ef64;
        piStack_5d8 = (int *)0x200;
        uStack_5e0 = 0x77feaa;
        iStack_5dc = iVar11;
        func_0x0074fd26();
        uStack_5e0 = 0xffffffff;
        ppsStack_5e4 = ppsStack_248;
        ppsStack_5e8 = (short **)0x200;
        func_0x0074fd26(iVar11);
      }
    }
  }
  pppsStack_5d0 = &ppsStack_5bc;
  aiStack_5b8[0] = 0x206;
  ppsStack_5d4 = (short **)0x20119;
  piStack_5d8 = (int *)0x0;
  iStack_5dc = 0x174ef20;
  uStack_5e0 = 0x80000002;
  apsStack_494[0] = (short *)0x0;
  ppsStack_5bc = (short **)0x0;
  aiStack_5b8[1] = 0;
  ppsStack_5e4 = (short **)0x77fefc;
  iVar4 = (*pcVar10)();
  if (iVar4 == 0) {
    ppsStack_5e4 = &psStack_5cc;
    ppsStack_5e8 = apsStack_4a8;
    iVar4 = (*_api_getMarketData)(pppsStack_5d0,0x174f928,0,&psStack_5c8);
    (*_api_postMarketUpdate/api_commitOrderState)(ppsStack_5e8);
    if (iVar4 == 0) {
      ppsStack_5e4 = apsStack_4a8;
      ppsStack_5e8 = (short **)0x77ff44;
      uVar12 = func_0x0077c72f();
      if (3 < uVar12) {
        ppsStack_5e4 = (short **)0x77ff5c;
        func_0x0078757f();
        ppsStack_5e4 = (short **)0xffffffff;
        ppsStack_5e8 = (short **)0x174ef84;
        func_0x0074fd26(iVar11,0x200);
        func_0x0074fd26(iVar11,0x200,uStack_25c,0xffffffff);
      }
    }
  }
  ppsStack_5e4 = (short **)0x0;
  ppsStack_5e8 = (short **)0x77ff8c;
  uVar18 = func_0x0074fbd5();
  pppsStack_5d0 = (short ***)((ulonglong)uVar18 >> 0x20);
  psVar9 = (short *)uVar18;
  ppsStack_5e4 = &psStack_5c8;
  psStack_5ac = (short *)0x206;
  ppsStack_5e8 = (short **)0x20119;
  iVar4 = 0;
  uVar20 = 0x80000001;
  apsStack_4a8[0] = (short *)0x0;
  psStack_5c8 = (short *)0x0;
  psStack_5c0 = (short *)0x0;
  psStack_5cc = psVar9;
  ppsStack_5bc = (short **)pppsStack_5d0;
  iVar6 = (*_api_sendOrder)(0x80000001,0x174f94c);
  lVar16 = CONCAT44(ppsStack_5e4,psVar9);
  if (iVar6 == 0) {
    iVar6 = (*_api_getMarketData)(iStack_5dc,0x174efa4,0,&ppsStack_5d4,auStack_4bc,&psStack_5c0);
    (*_api_postMarketUpdate/api_commitOrderState)(uVar20);
    lVar16 = CONCAT44(ppsStack_5e4,psVar9);
    if ((iVar6 == 0) && (lVar16 = CONCAT44(ppsStack_5e4,psVar9), (short)auStack_4bc[0] != 0)) {
      lVar16 = func_0x0074faee(auStack_4bc);
      lVar17 = CONCAT44(pppsStack_5d0,uStack_5e0);
      if (lVar17 < lVar16) {
        lVar16 = CONCAT44(pppsStack_5d0,uStack_5e0);
      }
      ppsStack_5e4 = (short **)((ulonglong)lVar16 >> 0x20);
      if (lVar16 + 0x128a1800 < lVar17) {
        lVar16 = lVar17;
      }
    }
  }
  func_0x005b402f(auStack_4bc,0x103,0x174efc0,lVar16);
  func_0x0074fd26(iVar11,0x200,auStack_4bc,0xffffffff);
  pppsStack_5d0 = (short ***)0x206;
  auStack_4bc[0] = 0;
  uStack_5e0 = 0;
  ppsStack_5d4 = (short **)0x0;
  iVar6 = (*_api_sendOrder)(0x80000001,0x174efe8,0,0x20119,&uStack_5e0);
  if (iVar6 == 0) {
    pppsVar19 = &ppsStack_5e4;
    iVar6 = (*_api_getMarketData)(uVar20,0x174efe0,0,&ppsStack_5e8,auStack_4d0,pppsVar19);
    (*_api_postMarketUpdate/api_commitOrderState)(pppsVar19);
    if (iVar6 != 0) goto LAB_0078011c;
  }
  else {
LAB_0078011c:
    uVar12 = func_0x0077c72f(auStack_4d0);
    if (0x10 < uVar12) {
      func_0x0074fd26(iVar11,0x200,0x174f05c,0xffffffff);
      func_0x0074fd26(iVar11,0x200,auStack_4d0,0xffffffff);
    }
  }
  func_0x005af8ef();
  iStack_57c = iVar4;
LAB_00780168:
  *(undefined1 *)(iStack_57c + 0x18) = 1;
  return 1;
}