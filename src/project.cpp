/*
 * @Description:
 * @Solution:
 * @Version: 2.0
 * @Author: happytraveller-alone
 * @Date: 2021-04-29 23:32:45
 * @LastEditors: happytraveller-alone
 * @LastEditTime: 2021-04-30 20:25:10
 */
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <fstream>
#include <iomanip>
#include <iostream>

#include "LexAnalysis.h"
#include "SynAnalysis.h"

int main() {
  // 词法分析的部分
  initKeyMapping();
  initOperMapping();
  initLimitMapping();
  initAddMap();
  initNode();
  scanner();
  BraMappingError();
  printNodeLink();
  printErrorLink();
  printIdentLink();
  printNode1();
  printNode2();

  // LL(1)语法分析过程
  initGrammer();
  First();
  Follow();
  Select();
  MTable();
  Analysis();
  return 0;
}