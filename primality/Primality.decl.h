#ifndef _DECL_Primality_H_
#define _DECL_Primality_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void checkDone(int index, int isPrimeResult);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void checkDone(int index, int isPrimeResult);
     */
    // Entry point registration at startup
    
    static int reg_checkDone_marshall2();
    // Entry point index lookup
    
    inline static int idx_checkDone_marshall2() {
      static int epidx = reg_checkDone_marshall2();
      return epidx;
    }

    
    inline static int idx_checkDone(void (Main::*)(int index, int isPrimeResult) ) {
      return idx_checkDone_marshall2();
    }


    
    static int checkDone(int index, int isPrimeResult) { return idx_checkDone_marshall2(); }
    
    static void _call_checkDone_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_checkDone_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_checkDone_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_checkDone_marshall2(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void checkDone(int index, int isPrimeResult);
 */
    
    void checkDone(int index, int isPrimeResult, const CkEntryOptions *impl_e_opts=NULL);

};
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: chare checkPrimality: Chare{
void checkPrimality(int index, int number, const CProxy_Main &m);
};
 */
 class checkPrimality;
 class CkIndex_checkPrimality;
 class CProxy_checkPrimality;
/* --------------- index object ------------------ */
class CkIndex_checkPrimality:public CkIndex_Chare{
  public:
    typedef checkPrimality local_t;
    typedef CkIndex_checkPrimality index_t;
    typedef CProxy_checkPrimality proxy_t;
    typedef CProxy_checkPrimality element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void checkPrimality(int index, int number, const CProxy_Main &m);
     */
    // Entry point registration at startup
    
    static int reg_checkPrimality_marshall1();
    // Entry point index lookup
    
    inline static int idx_checkPrimality_marshall1() {
      static int epidx = reg_checkPrimality_marshall1();
      return epidx;
    }

    
    static int ckNew(int index, int number, const CProxy_Main &m) { return idx_checkPrimality_marshall1(); }
    
    static void _call_checkPrimality_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_checkPrimality_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_checkPrimality_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_checkPrimality_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxy_checkPrimality:public CProxy_Chare{
  public:
    typedef checkPrimality local_t;
    typedef CkIndex_checkPrimality index_t;
    typedef CProxy_checkPrimality proxy_t;
    typedef CProxy_checkPrimality element_t;

    CProxy_checkPrimality(void) {};
    CProxy_checkPrimality(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_checkPrimality(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    checkPrimality *ckLocal(void) const
    { return (checkPrimality *)CkLocalChare(&ckGetChareID()); }
/* DECLS: void checkPrimality(int index, int number, const CProxy_Main &m);
 */
    static CkChareID ckNew(int index, int number, const CProxy_Main &m, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(int index, int number, const CProxy_Main &m, CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

};
#define checkPrimality_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_checkPrimality>CBase_checkPrimality;

/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct checkDone_2_closure;

};

/* ---------------- method closures -------------- */
class Closure_checkPrimality {
  public:

};

extern void _registerPrimality(void);
extern "C" void CkRegisterMainModule(void);
#endif
