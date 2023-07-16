//
// Generated file, do not edit! Created by nedtool 5.6 from App_pck.msg.
//

#ifndef __APP_PCK_M_H
#define __APP_PCK_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>App_pck.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet App_pck
 * {
 *     int size;
 * }
 * </pre>
 */
class App_pck : public ::omnetpp::cPacket
{
  protected:
    int size;

  private:
    void copy(const App_pck& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const App_pck&);

  public:
    App_pck(const char *name=nullptr, short kind=0);
    App_pck(const App_pck& other);
    virtual ~App_pck();
    App_pck& operator=(const App_pck& other);
    virtual App_pck *dup() const override {return new App_pck(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSize() const;
    virtual void setSize(int size);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const App_pck& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, App_pck& obj) {obj.parsimUnpack(b);}


#endif // ifndef __APP_PCK_M_H
