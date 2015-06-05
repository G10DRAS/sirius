/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef CommandCenter_H
#define CommandCenter_H

#include <thrift/TDispatchProcessor.h>
#include "commandCenter_types.h"



class CommandCenterIf {
 public:
  virtual ~CommandCenterIf() {}

  /**
   * A method definition looks like C code. It has a return type, arguments,
   * and optionally a list of exceptions that it may throw. Note that argument
   * lists and exception lists are specified using the exact same syntax as
   * field lists in struct or exception definitions.
   */
  virtual bool ping() = 0;
  virtual void sendRequest(std::string& _return, const Request_Type::type type, const std::map<std::string, std::string> & data) = 0;

  /**
   * This method has a oneway modifier. That means the client only makes
   * a request and does not listen for any response at all. Oneway methods
   * must be void.
   * 
   * @param type
   * @param ip
   * @param port
   */
  virtual void registerService(const Service_Type::type type, const std::string& ip, const std::string& port) = 0;
};

class CommandCenterIfFactory {
 public:
  typedef CommandCenterIf Handler;

  virtual ~CommandCenterIfFactory() {}

  virtual CommandCenterIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(CommandCenterIf* /* handler */) = 0;
};

class CommandCenterIfSingletonFactory : virtual public CommandCenterIfFactory {
 public:
  CommandCenterIfSingletonFactory(const boost::shared_ptr<CommandCenterIf>& iface) : iface_(iface) {}
  virtual ~CommandCenterIfSingletonFactory() {}

  virtual CommandCenterIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(CommandCenterIf* /* handler */) {}

 protected:
  boost::shared_ptr<CommandCenterIf> iface_;
};

class CommandCenterNull : virtual public CommandCenterIf {
 public:
  virtual ~CommandCenterNull() {}
  bool ping() {
    bool _return = false;
    return _return;
  }
  void sendRequest(std::string& /* _return */, const Request_Type::type /* type */, const std::map<std::string, std::string> & /* data */) {
    return;
  }
  void registerService(const Service_Type::type /* type */, const std::string& /* ip */, const std::string& /* port */) {
    return;
  }
};


class CommandCenter_ping_args {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  CommandCenter_ping_args(const CommandCenter_ping_args&);
  CommandCenter_ping_args& operator=(const CommandCenter_ping_args&);
  CommandCenter_ping_args() {
  }

  virtual ~CommandCenter_ping_args() throw();

  bool operator == (const CommandCenter_ping_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const CommandCenter_ping_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CommandCenter_ping_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_ping_args& obj);

};


class CommandCenter_ping_pargs {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~CommandCenter_ping_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_ping_pargs& obj);

};

typedef struct _CommandCenter_ping_result__isset {
  _CommandCenter_ping_result__isset() : success(false) {}
  bool success :1;
} _CommandCenter_ping_result__isset;

class CommandCenter_ping_result {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};

  CommandCenter_ping_result(const CommandCenter_ping_result&);
  CommandCenter_ping_result& operator=(const CommandCenter_ping_result&);
  CommandCenter_ping_result() : success(0) {
  }

  virtual ~CommandCenter_ping_result() throw();
  bool success;

  _CommandCenter_ping_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const CommandCenter_ping_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CommandCenter_ping_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CommandCenter_ping_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_ping_result& obj);

};

typedef struct _CommandCenter_ping_presult__isset {
  _CommandCenter_ping_presult__isset() : success(false) {}
  bool success :1;
} _CommandCenter_ping_presult__isset;

class CommandCenter_ping_presult {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};


  virtual ~CommandCenter_ping_presult() throw();
  bool* success;

  _CommandCenter_ping_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_ping_presult& obj);

};

typedef struct _CommandCenter_sendRequest_args__isset {
  _CommandCenter_sendRequest_args__isset() : type(false), data(false) {}
  bool type :1;
  bool data :1;
} _CommandCenter_sendRequest_args__isset;

class CommandCenter_sendRequest_args {
 public:

  static const char* ascii_fingerprint; // = "B089C846F881A6F18D64AA924E6643EF";
  static const uint8_t binary_fingerprint[16]; // = {0xB0,0x89,0xC8,0x46,0xF8,0x81,0xA6,0xF1,0x8D,0x64,0xAA,0x92,0x4E,0x66,0x43,0xEF};

  CommandCenter_sendRequest_args(const CommandCenter_sendRequest_args&);
  CommandCenter_sendRequest_args& operator=(const CommandCenter_sendRequest_args&);
  CommandCenter_sendRequest_args() : type((Request_Type::type)0) {
  }

  virtual ~CommandCenter_sendRequest_args() throw();
  Request_Type::type type;
  std::map<std::string, std::string>  data;

  _CommandCenter_sendRequest_args__isset __isset;

  void __set_type(const Request_Type::type val);

  void __set_data(const std::map<std::string, std::string> & val);

  bool operator == (const CommandCenter_sendRequest_args & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(data == rhs.data))
      return false;
    return true;
  }
  bool operator != (const CommandCenter_sendRequest_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CommandCenter_sendRequest_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_sendRequest_args& obj);

};


class CommandCenter_sendRequest_pargs {
 public:

  static const char* ascii_fingerprint; // = "B089C846F881A6F18D64AA924E6643EF";
  static const uint8_t binary_fingerprint[16]; // = {0xB0,0x89,0xC8,0x46,0xF8,0x81,0xA6,0xF1,0x8D,0x64,0xAA,0x92,0x4E,0x66,0x43,0xEF};


  virtual ~CommandCenter_sendRequest_pargs() throw();
  const Request_Type::type* type;
  const std::map<std::string, std::string> * data;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_sendRequest_pargs& obj);

};

typedef struct _CommandCenter_sendRequest_result__isset {
  _CommandCenter_sendRequest_result__isset() : success(false) {}
  bool success :1;
} _CommandCenter_sendRequest_result__isset;

class CommandCenter_sendRequest_result {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};

  CommandCenter_sendRequest_result(const CommandCenter_sendRequest_result&);
  CommandCenter_sendRequest_result& operator=(const CommandCenter_sendRequest_result&);
  CommandCenter_sendRequest_result() : success() {
  }

  virtual ~CommandCenter_sendRequest_result() throw();
  std::string success;

  _CommandCenter_sendRequest_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const CommandCenter_sendRequest_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CommandCenter_sendRequest_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CommandCenter_sendRequest_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_sendRequest_result& obj);

};

typedef struct _CommandCenter_sendRequest_presult__isset {
  _CommandCenter_sendRequest_presult__isset() : success(false) {}
  bool success :1;
} _CommandCenter_sendRequest_presult__isset;

class CommandCenter_sendRequest_presult {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};


  virtual ~CommandCenter_sendRequest_presult() throw();
  std::string* success;

  _CommandCenter_sendRequest_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_sendRequest_presult& obj);

};

typedef struct _CommandCenter_registerService_args__isset {
  _CommandCenter_registerService_args__isset() : type(false), ip(false), port(false) {}
  bool type :1;
  bool ip :1;
  bool port :1;
} _CommandCenter_registerService_args__isset;

class CommandCenter_registerService_args {
 public:

  static const char* ascii_fingerprint; // = "38C252E94E93B69D04EB3A6EE2F9EDFB";
  static const uint8_t binary_fingerprint[16]; // = {0x38,0xC2,0x52,0xE9,0x4E,0x93,0xB6,0x9D,0x04,0xEB,0x3A,0x6E,0xE2,0xF9,0xED,0xFB};

  CommandCenter_registerService_args(const CommandCenter_registerService_args&);
  CommandCenter_registerService_args& operator=(const CommandCenter_registerService_args&);
  CommandCenter_registerService_args() : type((Service_Type::type)0), ip(), port() {
  }

  virtual ~CommandCenter_registerService_args() throw();
  Service_Type::type type;
  std::string ip;
  std::string port;

  _CommandCenter_registerService_args__isset __isset;

  void __set_type(const Service_Type::type val);

  void __set_ip(const std::string& val);

  void __set_port(const std::string& val);

  bool operator == (const CommandCenter_registerService_args & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(ip == rhs.ip))
      return false;
    if (!(port == rhs.port))
      return false;
    return true;
  }
  bool operator != (const CommandCenter_registerService_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CommandCenter_registerService_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_registerService_args& obj);

};


class CommandCenter_registerService_pargs {
 public:

  static const char* ascii_fingerprint; // = "38C252E94E93B69D04EB3A6EE2F9EDFB";
  static const uint8_t binary_fingerprint[16]; // = {0x38,0xC2,0x52,0xE9,0x4E,0x93,0xB6,0x9D,0x04,0xEB,0x3A,0x6E,0xE2,0xF9,0xED,0xFB};


  virtual ~CommandCenter_registerService_pargs() throw();
  const Service_Type::type* type;
  const std::string* ip;
  const std::string* port;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const CommandCenter_registerService_pargs& obj);

};

class CommandCenterClient : virtual public CommandCenterIf {
 public:
  CommandCenterClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  CommandCenterClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool ping();
  void send_ping();
  bool recv_ping();
  void sendRequest(std::string& _return, const Request_Type::type type, const std::map<std::string, std::string> & data);
  void send_sendRequest(const Request_Type::type type, const std::map<std::string, std::string> & data);
  void recv_sendRequest(std::string& _return);
  void registerService(const Service_Type::type type, const std::string& ip, const std::string& port);
  void send_registerService(const Service_Type::type type, const std::string& ip, const std::string& port);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class CommandCenterProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<CommandCenterIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (CommandCenterProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ping(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_sendRequest(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_registerService(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  CommandCenterProcessor(boost::shared_ptr<CommandCenterIf> iface) :
    iface_(iface) {
    processMap_["ping"] = &CommandCenterProcessor::process_ping;
    processMap_["sendRequest"] = &CommandCenterProcessor::process_sendRequest;
    processMap_["registerService"] = &CommandCenterProcessor::process_registerService;
  }

  virtual ~CommandCenterProcessor() {}
};

class CommandCenterProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  CommandCenterProcessorFactory(const ::boost::shared_ptr< CommandCenterIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< CommandCenterIfFactory > handlerFactory_;
};

class CommandCenterMultiface : virtual public CommandCenterIf {
 public:
  CommandCenterMultiface(std::vector<boost::shared_ptr<CommandCenterIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~CommandCenterMultiface() {}
 protected:
  std::vector<boost::shared_ptr<CommandCenterIf> > ifaces_;
  CommandCenterMultiface() {}
  void add(boost::shared_ptr<CommandCenterIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool ping() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ping();
    }
    return ifaces_[i]->ping();
  }

  void sendRequest(std::string& _return, const Request_Type::type type, const std::map<std::string, std::string> & data) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->sendRequest(_return, type, data);
    }
    ifaces_[i]->sendRequest(_return, type, data);
    return;
  }

  void registerService(const Service_Type::type type, const std::string& ip, const std::string& port) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->registerService(type, ip, port);
    }
    ifaces_[i]->registerService(type, ip, port);
  }

};



#endif