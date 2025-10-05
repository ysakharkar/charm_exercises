/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::checkDone_2_closure : public SDAG::Closure {
            int index;
            int isPrimeResult;


      checkDone_2_closure() {
        init();
      }
      checkDone_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return index;}
            int & getP1() { return isPrimeResult;}
      void pup(PUP::er& __p) {
        __p | index;
        __p | isPrimeResult;
        packClosure(__p);
      }
      virtual ~checkDone_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(checkDone_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void checkDone(int index, int isPrimeResult);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  new (impl_obj_void) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkDone(int index, int isPrimeResult);
 */
void CProxy_Main::checkDone(int index, int isPrimeResult, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int index, int isPrimeResult
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|index;
    implP|isPrimeResult;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|index;
    implP|isPrimeResult;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_checkDone_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_checkDone_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_checkDone_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_checkDone_marshall2() {
  int epidx = CkRegisterEp("checkDone(int index, int isPrimeResult)",
      reinterpret_cast<CkCallFnPtr>(_call_checkDone_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_checkDone_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_checkDone_marshall2);

  return epidx;
}

void CkIndex_Main::_call_checkDone_marshall2(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int index, int isPrimeResult*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> index;
  implP|index;
  PUP::detail::TemporaryObjectHolder<int> isPrimeResult;
  implP|isPrimeResult;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->checkDone(std::move(index.t), std::move(isPrimeResult.t));
}
int CkIndex_Main::_callmarshall_checkDone_marshall2(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int index, int isPrimeResult*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> index;
  implP|index;
  PUP::detail::TemporaryObjectHolder<int> isPrimeResult;
  implP|isPrimeResult;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->checkDone(std::move(index.t), std::move(isPrimeResult.t));
  return implP.size();
}
void CkIndex_Main::_marshallmessagepup_checkDone_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int index, int isPrimeResult*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> index;
  implP|index;
  PUP::detail::TemporaryObjectHolder<int> isPrimeResult;
  implP|isPrimeResult;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("index");
  implDestP|index;
  if (implDestP.hasComments()) implDestP.comment("isPrimeResult");
  implDestP|isPrimeResult;
}
PUPable_def(SINGLE_ARG(Closure_Main::checkDone_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void checkDone(int index, int isPrimeResult);
  idx_checkDone_marshall2();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare checkPrimality: Chare{
void checkPrimality(int index, int number, const CProxy_Main &m);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_checkPrimality::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkPrimality(int index, int number, const CProxy_Main &m);
 */
CkChareID CProxy_checkPrimality::ckNew(int index, int number, const CProxy_Main &m, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int index, int number, const CProxy_Main &m
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|index;
    implP|number;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)m;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|index;
    implP|number;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)m;
  }
  CkChareID impl_ret;
  CkCreateChare(CkIndex_checkPrimality::__idx, CkIndex_checkPrimality::idx_checkPrimality_marshall1(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_checkPrimality::ckNew(int index, int number, const CProxy_Main &m, CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int index, int number, const CProxy_Main &m
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|index;
    implP|number;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)m;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|index;
    implP|number;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)m;
  }
  CkCreateChare(CkIndex_checkPrimality::__idx, CkIndex_checkPrimality::idx_checkPrimality_marshall1(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_checkPrimality::reg_checkPrimality_marshall1() {
  int epidx = CkRegisterEp("checkPrimality(int index, int number, const CProxy_Main &m)",
      reinterpret_cast<CkCallFnPtr>(_call_checkPrimality_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_checkPrimality_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_checkPrimality_marshall1);

  return epidx;
}

void CkIndex_checkPrimality::_call_checkPrimality_marshall1(void* impl_msg, void* impl_obj_void)
{
  checkPrimality* impl_obj = static_cast<checkPrimality*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int index, int number, const CProxy_Main &m*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> index;
  implP|index;
  PUP::detail::TemporaryObjectHolder<int> number;
  implP|number;
  PUP::detail::TemporaryObjectHolder<CProxy_Main> m;
  implP|m;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) checkPrimality(std::move(index.t), std::move(number.t), std::move(m.t));
}
int CkIndex_checkPrimality::_callmarshall_checkPrimality_marshall1(char* impl_buf, void* impl_obj_void) {
  checkPrimality* impl_obj = static_cast<checkPrimality*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int index, int number, const CProxy_Main &m*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> index;
  implP|index;
  PUP::detail::TemporaryObjectHolder<int> number;
  implP|number;
  PUP::detail::TemporaryObjectHolder<CProxy_Main> m;
  implP|m;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) checkPrimality(std::move(index.t), std::move(number.t), std::move(m.t));
  return implP.size();
}
void CkIndex_checkPrimality::_marshallmessagepup_checkPrimality_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int index, int number, const CProxy_Main &m*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> index;
  implP|index;
  PUP::detail::TemporaryObjectHolder<int> number;
  implP|number;
  PUP::detail::TemporaryObjectHolder<CProxy_Main> m;
  implP|m;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("index");
  implDestP|index;
  if (implDestP.hasComments()) implDestP.comment("number");
  implDestP|number;
  if (implDestP.hasComments()) implDestP.comment("m");
  implDestP|m;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_checkPrimality::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: void checkPrimality(int index, int number, const CProxy_Main &m);
  idx_checkPrimality_marshall1();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPrimality(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void checkDone(int index, int isPrimeResult);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: chare checkPrimality: Chare{
void checkPrimality(int index, int number, const CProxy_Main &m);
};
*/
  CkIndex_checkPrimality::__register("checkPrimality", sizeof(checkPrimality));

}
extern "C" void CkRegisterMainModule(void) {
  _registerPrimality();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main>(dynamic_cast<Main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_checkPrimality::virtual_pup(PUP::er &p) {
    recursive_pup<checkPrimality>(dynamic_cast<checkPrimality*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
