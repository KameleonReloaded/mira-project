// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RPC_MIRA_RPC_H_
#define FLATBUFFERS_GENERATED_RPC_MIRA_RPC_H_

#include "flatbuffers/flatbuffers.h"

namespace Mira {
namespace Rpc {

struct RpcHeader;

enum RpcMagics {
  RpcMagics_Version1 = 2,
  RpcMagics_Version2 = 572662306,
  RpcMagics_MIN = RpcMagics_Version1,
  RpcMagics_MAX = RpcMagics_Version2
};

inline const RpcMagics (&EnumValuesRpcMagics())[2] {
  static const RpcMagics values[] = {
    RpcMagics_Version1,
    RpcMagics_Version2
  };
  return values;
}

inline const char *EnumNameRpcMagics(RpcMagics e) {
  switch (e) {
    case RpcMagics_Version1: return "Version1";
    case RpcMagics_Version2: return "Version2";
    default: return "";
  }
}

enum RpcCategory {
  RpcCategory_NONE = 0,
  RpcCategory_SYSTEM = 1,
  RpcCategory_LOG = 2,
  RpcCategory_DEBUG = 3,
  RpcCategory_FILE = 4,
  RpcCategory_COMMAND = 5,
  RpcCategory_MIN = RpcCategory_NONE,
  RpcCategory_MAX = RpcCategory_COMMAND
};

inline const RpcCategory (&EnumValuesRpcCategory())[6] {
  static const RpcCategory values[] = {
    RpcCategory_NONE,
    RpcCategory_SYSTEM,
    RpcCategory_LOG,
    RpcCategory_DEBUG,
    RpcCategory_FILE,
    RpcCategory_COMMAND
  };
  return values;
}

inline const char * const *EnumNamesRpcCategory() {
  static const char * const names[] = {
    "NONE",
    "SYSTEM",
    "LOG",
    "DEBUG",
    "FILE",
    "COMMAND",
    nullptr
  };
  return names;
}

inline const char *EnumNameRpcCategory(RpcCategory e) {
  if (e < RpcCategory_NONE || e > RpcCategory_COMMAND) return "";
  const size_t index = static_cast<int>(e);
  return EnumNamesRpcCategory()[index];
}

struct RpcHeader FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MAGIC = 4,
    VT_CATEGORY = 6,
    VT_TYPE = 8,
    VT_AUX = 10,
    VT_ERROR = 12,
    VT_DATA = 14
  };
  uint32_t magic() const {
    return GetField<uint32_t>(VT_MAGIC, 0);
  }
  RpcCategory category() const {
    return static_cast<RpcCategory>(GetField<uint32_t>(VT_CATEGORY, 0));
  }
  uint32_t type() const {
    return GetField<uint32_t>(VT_TYPE, 0);
  }
  uint32_t aux() const {
    return GetField<uint32_t>(VT_AUX, 0);
  }
  int64_t error() const {
    return GetField<int64_t>(VT_ERROR, 0);
  }
  const flatbuffers::Vector<uint8_t> *data() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_MAGIC) &&
           VerifyField<uint32_t>(verifier, VT_CATEGORY) &&
           VerifyField<uint32_t>(verifier, VT_TYPE) &&
           VerifyField<uint32_t>(verifier, VT_AUX) &&
           VerifyField<int64_t>(verifier, VT_ERROR) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.VerifyVector(data()) &&
           verifier.EndTable();
  }
};

struct RpcHeaderBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_magic(uint32_t magic) {
    fbb_.AddElement<uint32_t>(RpcHeader::VT_MAGIC, magic, 0);
  }
  void add_category(RpcCategory category) {
    fbb_.AddElement<uint32_t>(RpcHeader::VT_CATEGORY, static_cast<uint32_t>(category), 0);
  }
  void add_type(uint32_t type) {
    fbb_.AddElement<uint32_t>(RpcHeader::VT_TYPE, type, 0);
  }
  void add_aux(uint32_t aux) {
    fbb_.AddElement<uint32_t>(RpcHeader::VT_AUX, aux, 0);
  }
  void add_error(int64_t error) {
    fbb_.AddElement<int64_t>(RpcHeader::VT_ERROR, error, 0);
  }
  void add_data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(RpcHeader::VT_DATA, data);
  }
  explicit RpcHeaderBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RpcHeaderBuilder &operator=(const RpcHeaderBuilder &);
  flatbuffers::Offset<RpcHeader> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RpcHeader>(end);
    return o;
  }
};

inline flatbuffers::Offset<RpcHeader> CreateRpcHeader(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t magic = 0,
    RpcCategory category = RpcCategory_NONE,
    uint32_t type = 0,
    uint32_t aux = 0,
    int64_t error = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data = 0) {
  RpcHeaderBuilder builder_(_fbb);
  builder_.add_error(error);
  builder_.add_data(data);
  builder_.add_aux(aux);
  builder_.add_type(type);
  builder_.add_category(category);
  builder_.add_magic(magic);
  return builder_.Finish();
}

inline flatbuffers::Offset<RpcHeader> CreateRpcHeaderDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t magic = 0,
    RpcCategory category = RpcCategory_NONE,
    uint32_t type = 0,
    uint32_t aux = 0,
    int64_t error = 0,
    const std::vector<uint8_t> *data = nullptr) {
  auto data__ = data ? _fbb.CreateVector<uint8_t>(*data) : 0;
  return Mira::Rpc::CreateRpcHeader(
      _fbb,
      magic,
      category,
      type,
      aux,
      error,
      data__);
}

inline const Mira::Rpc::RpcHeader *GetRpcHeader(const void *buf) {
  return flatbuffers::GetRoot<Mira::Rpc::RpcHeader>(buf);
}

inline const Mira::Rpc::RpcHeader *GetSizePrefixedRpcHeader(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Mira::Rpc::RpcHeader>(buf);
}

inline bool VerifyRpcHeaderBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Mira::Rpc::RpcHeader>(nullptr);
}

inline bool VerifySizePrefixedRpcHeaderBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Mira::Rpc::RpcHeader>(nullptr);
}

inline void FinishRpcHeaderBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Mira::Rpc::RpcHeader> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRpcHeaderBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Mira::Rpc::RpcHeader> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Rpc
}  // namespace Mira

#endif  // FLATBUFFERS_GENERATED_RPC_MIRA_RPC_H_
