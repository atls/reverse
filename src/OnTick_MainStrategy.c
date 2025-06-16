
/* WARNING: Removing unreachable block (ram,0x00a6098d) */
/* WARNING: Removing unreachable block (ram,0x00a60964) */
/* WARNING: Removing unreachable block (ram,0x00a60991) */
/* WARNING: Removing unreachable block (ram,0x00a6099c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char OnTick_MainStrategy(void)

{
  undefined2 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_3df4 [4];
  int local_3df0;
  char local_3ddc [192];
  int local_3d1c;
  undefined4 local_3c94;
  undefined8 local_3c8c;
  char local_7c0 [356];
  int local_65c;
  undefined4 local_5d4;
  undefined2 *local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined2 local_5c4 [260];
  undefined4 local_3bc;
  undefined2 *local_3b8;
  undefined4 local_3b4;
  int local_3b0;
  undefined2 local_3ac [260];
  undefined4 local_1a4;
  undefined2 *local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined2 local_194 [128];
  undefined1 local_94 [80];
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined2 *local_34;
  undefined1 *local_30;
  undefined8 local_2c;
  int local_24;
  undefined1 **local_20;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_10 = *unaff_FS_OFFSET;
  uStack_c = 0x170aa2a;
  *unaff_FS_OFFSET = &local_10;
  func_0x00742c9f();
  local_3b8 = local_3ac;
  local_3b4 = 0;
  local_3b0 = 0x104;
  local_3ac[0] = 0;
  local_3bc = 0x174ba44;
  local_8 = 0;
  local_20 = (undefined1 **)&local_3bc;
  local_24 = 0xa60719;
  cVar5 = MQL_Encrypt_And_Store_Session_Data();
  if (cVar5 == '\0') {
    cVar5 = '\0';
  }
  else {
    local_20 = (undefined1 **)0x3820;
    local_24 = 0;
    local_2c = (double)CONCAT44(local_3df4,0xa60737);
    internal_memsetOptimized();
    local_30 = (undefined1 *)0x0;
    local_2c = 0.0;
    local_20 = &local_30;
    local_24 = 0xa60779;
    local_20 = (undefined1 **)MQL_decode_unicode();
    local_24 = 0x17c3464;
    local_2c = (double)CONCAT44(&stack0xffffffe4,0xa6078b);
    MQL_Format_String();
    iVar7 = _DAT_0188d204;
    local_3b4 = 0;
    if (local_3b8 != (undefined2 *)0x0) {
      puVar1 = local_3b8;
      for (iVar6 = local_3b0 * 2; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar1 = 0;
        puVar1 = (undefined2 *)((int)puVar1 + 1);
      }
    }
    iVar6 = _DAT_0188d204 + 8;
    local_24 = 0xa607ca;
    local_20 = (undefined1 **)iVar6;
    (*_LAB_01710668)();
    local_24 = 0x3820;
    local_2c = (double)CONCAT44(iVar7 + 0x20,local_3df4);
    local_30 = (undefined1 *)0xa607df;
    MQL_CopyMemory_Optimized();
    pcVar2 = _MQL_Obfuscated_Core_Logic;
    local_2c = (double)CONCAT44(0xa607eb,(undefined4)local_2c);
    local_24 = iVar6;
    (*_MQL_Obfuscated_Core_Logic)();
    if (local_3df0 != 0) {
      local_30 = &stack0xffffffe4;
      local_2c = (double)CONCAT44(local_3df0,0x17672ec);
      local_34 = (undefined2 *)0xa60808;
      MQL_Format_String();
      pcVar10 = local_3ddc;
      do {
        cVar5 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar5 != '\0');
      local_2c = (double)ZEXT48(&local_30);
      local_30 = (undefined1 *)0xa6082e;
      local_30 = (undefined1 *)MQL_RetrieveAndProcessStringProperty();
      puStack_38 = &stack0xffffffe4;
      local_34 = (undefined2 *)0x17c3184;
      uStack_3c = 0xa6083d;
      MQL_Format_String();
      iVar7 = _DAT_0188d204;
      cVar5 = '\0';
      local_2c._4_4_ = _DAT_0188d204 + 8;
      local_2c._0_4_ = 0xa60852;
      (*_LAB_01710668)();
      if ((*(byte *)(iVar7 + 0x3688) & 0x30) != 0) {
        local_2c._0_4_ = 0xa60863;
        cVar5 = IsRealAccountOrContestMode();
      }
      local_2c = (double)CONCAT44(local_2c._4_4_,iVar7 + 8);
      local_30 = (undefined1 *)0xa6086b;
      (*pcVar2)();
      if (cVar5 == '\0') {
        iVar7 = 0;
      }
      else {
        local_2c = (double)CONCAT44(0xa60878,(undefined4)local_2c);
        cVar5 = CheckIfAllowedToTrade();
        iVar7 = 2 - (uint)(cVar5 != '\0');
      }
      local_30 = &stack0xffffffe4;
      local_2c = (double)CONCAT44(iVar7,0x17c3190);
      local_34 = (undefined2 *)0xa60891;
      MQL_Format_String();
      local_34 = (undefined2 *)&stack0xffffffe4;
      local_2c = (double)local_3c8c;
      local_30 = (undefined1 *)0x17c319c;
      puStack_38 = (undefined1 *)0xa608af;
      MQL_Format_String();
      puStack_38 = (undefined1 *)local_3c94;
      puStack_40 = &stack0xffffffe4;
      uStack_3c = 0x17c31ac;
      uStack_44 = 0xa608c3;
      MQL_Format_String();
      pcVar10 = local_7c0;
      do {
        cVar5 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar5 != '\0');
      local_2c = (double)ZEXT48(&local_30);
      local_30 = (undefined1 *)0xa608e9;
      local_30 = (undefined1 *)MQL_RetrieveAndProcessStringProperty();
      puStack_38 = &stack0xffffffe4;
      local_34 = (undefined2 *)0x17c31bc;
      uStack_3c = 0xa608f8;
      MQL_Format_String();
      if (local_3d1c == 1) {
        uVar8 = 1;
      }
      else if (local_3d1c == 2) {
        uVar8 = 2;
      }
      else {
        uVar8 = 0;
      }
      local_30 = &stack0xffffffe4;
      local_2c = (double)CONCAT44(uVar8,0x17c31cc);
      local_34 = (undefined2 *)0xa6092a;
      MQL_Format_String();
      local_34 = (undefined2 *)&stack0xffffffe4;
      local_2c = (double)local_65c / _DAT_017d8690;
      local_30 = (undefined1 *)0x17c31dc;
      puStack_38 = (undefined1 *)0xa60954;
      MQL_Format_String();
    }
    local_2c = 1.1543469570847076e-301;
    local_30 = (undefined1 *)0xa60980;
    puVar9 = (undefined4 *)MQL_Allocate_Buffer();
    puVar11 = (undefined4 *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = _DAT_017660f0;
      *(undefined1 *)(puVar9 + 1) = DAT_017660f4;
      puVar11 = puVar9;
    }
    local_1a0 = local_194;
    local_19c = 0;
    local_198 = 0x80;
    local_194[0] = 0;
    local_1a4 = 0x1763ed4;
    local_8._0_1_ = 4;
    local_2c = (double)CONCAT44(&local_1a4,&local_30);
    local_30 = &stack0xffffffe4;
    local_34 = (undefined2 *)0xa60a18;
    cVar5 = MQL_Process_API_Or_License_Response();
    puVar3 = local_30;
    if (cVar5 == '\0') {
      cVar5 = '\0';
    }
    else {
      local_2c = (double)CONCAT44(0xa60a31,(undefined4)local_2c);
      MQL_Init_DataNode();
      local_8._0_1_ = 5;
      local_2c = (double)(CONCAT44((int)((ulonglong)local_2c >> 1),puVar3) & 0x7fffffffffffffff);
      local_30 = (undefined1 *)0xa60a47;
      cVar5 = MQL_CollectionManager_Process();
      if (cVar5 != '\0') {
        local_34 = local_1a0;
        local_2c = (double)CONCAT44(local_94,0xa60a69);
        cVar5 = EA_Configuration_LoadAndProcess();
        if (cVar5 != '\0') {
          if (_MQL_GlobalContext != 0) {
            local_2c = (double)ZEXT48(&local_24);
            local_30 = (undefined1 *)0x0;
            local_34 = (undefined2 *)0x17c32b4;
            puStack_38 = (undefined1 *)0xa60a98;
            cVar5 = EA_ParamNode_Search();
            ppuVar4 = local_20;
            if (cVar5 != '\0') {
              local_2c = (double)CONCAT44((int)local_20 + 0x878,local_24);
              local_30 = (undefined1 *)0xa60ab4;
              EA_GetParamDoubleValue();
            }
            local_2c = (double)ZEXT48(&local_24);
            local_30 = (undefined1 *)0x0;
            local_34 = (undefined2 *)0x17c32cc;
            puStack_38 = (undefined1 *)0xa60acc;
            cVar5 = EA_ParamNode_Search();
            if (cVar5 != '\0') {
              local_2c = 1.48219693752374e-323;
              local_30 = (undefined1 *)((int)ppuVar4 + 0x880);
              local_34 = (undefined2 *)local_24;
              puStack_38 = (undefined1 *)0xa60ae9;
              EA_GetParamStringValue();
            }
            local_2c = (double)ZEXT48(&local_24);
            local_30 = (undefined1 *)0x0;
            local_34 = (undefined2 *)0x1764c20;
            puStack_38 = (undefined1 *)0xa60b01;
            cVar5 = EA_ParamNode_Search();
            if (cVar5 == '\0') {
              local_2c = 2.12199677959063e-314;
              local_30 = (undefined1 *)0xa60b7f;
              (**(code **)(*(int *)(_MQL_GlobalContext + 0x40) + 0x14))();
            }
            else {
              local_5d0 = local_5c4;
              local_5cc = 0;
              local_5c8 = 0x104;
              local_5c4[0] = 0;
              local_5d4 = 0x174ba44;
              local_8._0_1_ = 6;
              local_2c = (double)CONCAT44(&local_5d4,0xa60b48);
              MQL_Encrypt_And_Store_Session_Data();
              local_2c = (double)CONCAT44(local_5d0,1);
              local_30 = (undefined1 *)0xa60b55;
              MQL_AccountMonitor_And_API_Handler();
              local_8._0_1_ = 5;
              if (local_5d0 != (undefined2 *)0x0) {
                *local_5d0 = 0;
              }
            }
          }
          local_2c = (double)CONCAT44(local_94,0xa60b8b);
          cVar5 = HandleTradingOperations();
        }
        local_2c = (double)CONCAT44(local_34,local_94);
        local_30 = (undefined1 *)0xa60b9c;
        MQL_LicenseManager_VerifyAndStore();
      }
      local_2c = (double)CONCAT44(0xa60ba7,(undefined4)local_2c);
      MQL_MemoryManager_CleanupStructure();
    }
    local_1a4 = 0x174ba40;
    local_19c = 0;
    if (local_1a0 != (undefined2 *)0x0) {
      *local_1a0 = 0;
    }
    if (puVar3 != (undefined1 *)0x0) {
      local_2c = (double)CONCAT44(puVar3,0xa60bd4);
      MQL_Free_Buffer();
    }
    if (puVar11 != (undefined4 *)0x0) {
      local_2c = (double)CONCAT44(puVar11,0xa60be1);
      MQL_Free_Buffer();
    }
  }
  if (local_3b8 != (undefined2 *)0x0) {
    *local_3b8 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return cVar5;
}

