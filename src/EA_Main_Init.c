
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UndefinedFunction_00a6fe9f(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 auStack_18 [2];
  undefined8 uStack_10;
  
  if (_DAT_0188d210 == 0) {
    return;
  }
  cVar2 = func_0x00a63a1f(param_1 + 0x2558);
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = func_0x007ab39f(param_1 + 0x28,0x174ba3c);
  if (cVar2 == '\0') {
    return;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x2560) != 0) {
    do {
      iVar3 = *(int *)(param_1 + 0x2568) * uVar5 + *(int *)(param_1 + 0x255c);
      if (((iVar3 == 0) || (*(int *)(param_1 + 0x28) == 0 && *(int *)(param_1 + 0x2c) == 0)) ||
         (*(int *)(param_1 + 0x2b0) == 0)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = func_0x00a96d7f(iVar3,0x1bb,1);
        if ((cVar2 != '\0') && (cVar2 = func_0x00a6eb8f(), cVar2 != '\0')) {
          cVar2 = func_0x00a6377f();
          if (cVar2 == '\0') {
            func_0x00a6393f(*(int *)(param_1 + 0x2568) * uVar5 + *(int *)(param_1 + 0x255c));
            cVar2 = '\0';
          }
          else {
            cVar2 = func_0x0078d6af(0);
            if (cVar2 != '\0') goto LAB_00a6ffb8;
            cVar2 = '\0';
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x2560));
    if (cVar2 != '\0') {
LAB_00a6ffb8:
      cVar2 = func_0x00a6dd7f(param_2);
      if (((cVar2 != '\0') && (cVar2 = func_0x007cc82f(), cVar2 != '\0')) &&
         (cVar2 = func_0x007cc78f(), cVar2 != '\0')) {
        auStack_18[0] = 0;
        uStack_10 = 0;
        (**(code **)(*(int *)(param_1 + 8) + 0x14))(0,auStack_18);
      }
      goto LAB_00a70013;
    }
  }
  iVar3 = _DAT_0188d204;
  if (_DAT_0188d204 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = _DAT_0188d204 + 8;
    (*_LAB_01710668)(iVar1);
    uVar4 = *(undefined4 *)(iVar3 + 0x24);
    (*_MQL_Obfuscated_Core_Logic)(iVar1);
  }
  func_0x00a3a10f(0x18c9fb0,1,0x17c3bf0,uVar4);
LAB_00a70013:
  func_0x007ab25f(param_1 + 0x28,0,1);
  return;
}