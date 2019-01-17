// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TENSOR_ORG_APACHE_ARROW_FLATBUF_H_
#define FLATBUFFERS_GENERATED_TENSOR_ORG_APACHE_ARROW_FLATBUF_H_

#include "flatbuffers/flatbuffers.h"

#include "Schema_generated.h"

namespace org {
namespace apache {
namespace arrow {
namespace flatbuf {

struct TensorDim;

struct Tensor;

/// Shape data for a single axis in a tensor
struct TensorDim FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SIZE = 4,
    VT_NAME = 6
  };
  /// Length of dimension
  int64_t size() const {
    return GetField<int64_t>(VT_SIZE, 0);
  }
  /// Name of the dimension, optional
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int64_t>(verifier, VT_SIZE) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
};

struct TensorDimBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_size(int64_t size) {
    fbb_.AddElement<int64_t>(TensorDim::VT_SIZE, size, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(TensorDim::VT_NAME, name);
  }
  explicit TensorDimBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TensorDimBuilder &operator=(const TensorDimBuilder &);
  flatbuffers::Offset<TensorDim> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TensorDim>(end);
    return o;
  }
};

inline flatbuffers::Offset<TensorDim> CreateTensorDim(
    flatbuffers::FlatBufferBuilder &_fbb,
    int64_t size = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0) {
  TensorDimBuilder builder_(_fbb);
  builder_.add_size(size);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<TensorDim> CreateTensorDimDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int64_t size = 0,
    const char *name = nullptr) {
  return org::apache::arrow::flatbuf::CreateTensorDim(
      _fbb,
      size,
      name ? _fbb.CreateString(name) : 0);
}

struct Tensor FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TYPE_TYPE = 4,
    VT_TYPE = 6,
    VT_SHAPE = 8,
    VT_STRIDES = 10,
    VT_DATA = 12
  };
  Type type_type() const {
    return static_cast<Type>(GetField<uint8_t>(VT_TYPE_TYPE, 0));
  }
  /// The type of data contained in a value cell. Currently only fixed-width
  /// value types are supported, no strings or nested types
  const void *type() const {
    return GetPointer<const void *>(VT_TYPE);
  }
  template<typename T> const T *type_as() const;
  const Null *type_as_Null() const {
    return type_type() == Type_Null ? static_cast<const Null *>(type()) : nullptr;
  }
  const Int *type_as_Int() const {
    return type_type() == Type_Int ? static_cast<const Int *>(type()) : nullptr;
  }
  const FloatingPoint *type_as_FloatingPoint() const {
    return type_type() == Type_FloatingPoint ? static_cast<const FloatingPoint *>(type()) : nullptr;
  }
  const Binary *type_as_Binary() const {
    return type_type() == Type_Binary ? static_cast<const Binary *>(type()) : nullptr;
  }
  const Utf8 *type_as_Utf8() const {
    return type_type() == Type_Utf8 ? static_cast<const Utf8 *>(type()) : nullptr;
  }
  const Bool *type_as_Bool() const {
    return type_type() == Type_Bool ? static_cast<const Bool *>(type()) : nullptr;
  }
  const Decimal *type_as_Decimal() const {
    return type_type() == Type_Decimal ? static_cast<const Decimal *>(type()) : nullptr;
  }
  const Date *type_as_Date() const {
    return type_type() == Type_Date ? static_cast<const Date *>(type()) : nullptr;
  }
  const Time *type_as_Time() const {
    return type_type() == Type_Time ? static_cast<const Time *>(type()) : nullptr;
  }
  const Timestamp *type_as_Timestamp() const {
    return type_type() == Type_Timestamp ? static_cast<const Timestamp *>(type()) : nullptr;
  }
  const Interval *type_as_Interval() const {
    return type_type() == Type_Interval ? static_cast<const Interval *>(type()) : nullptr;
  }
  const List *type_as_List() const {
    return type_type() == Type_List ? static_cast<const List *>(type()) : nullptr;
  }
  const Struct_ *type_as_Struct_() const {
    return type_type() == Type_Struct_ ? static_cast<const Struct_ *>(type()) : nullptr;
  }
  const Union *type_as_Union() const {
    return type_type() == Type_Union ? static_cast<const Union *>(type()) : nullptr;
  }
  const FixedSizeBinary *type_as_FixedSizeBinary() const {
    return type_type() == Type_FixedSizeBinary ? static_cast<const FixedSizeBinary *>(type()) : nullptr;
  }
  const FixedSizeList *type_as_FixedSizeList() const {
    return type_type() == Type_FixedSizeList ? static_cast<const FixedSizeList *>(type()) : nullptr;
  }
  const Map *type_as_Map() const {
    return type_type() == Type_Map ? static_cast<const Map *>(type()) : nullptr;
  }
  /// The dimensions of the tensor, optionally named
  const flatbuffers::Vector<flatbuffers::Offset<TensorDim>> *shape() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TensorDim>> *>(VT_SHAPE);
  }
  /// Non-negative byte offsets to advance one value cell along each dimension
  const flatbuffers::Vector<int64_t> *strides() const {
    return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_STRIDES);
  }
  /// The location and size of the tensor's data
  const Buffer *data() const {
    return GetStruct<const Buffer *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_TYPE_TYPE) &&
           VerifyOffset(verifier, VT_TYPE) &&
           VerifyType(verifier, type(), type_type()) &&
           VerifyOffset(verifier, VT_SHAPE) &&
           verifier.VerifyVector(shape()) &&
           verifier.VerifyVectorOfTables(shape()) &&
           VerifyOffset(verifier, VT_STRIDES) &&
           verifier.VerifyVector(strides()) &&
           VerifyField<Buffer>(verifier, VT_DATA) &&
           verifier.EndTable();
  }
};

template<> inline const Null *Tensor::type_as<Null>() const {
  return type_as_Null();
}

template<> inline const Int *Tensor::type_as<Int>() const {
  return type_as_Int();
}

template<> inline const FloatingPoint *Tensor::type_as<FloatingPoint>() const {
  return type_as_FloatingPoint();
}

template<> inline const Binary *Tensor::type_as<Binary>() const {
  return type_as_Binary();
}

template<> inline const Utf8 *Tensor::type_as<Utf8>() const {
  return type_as_Utf8();
}

template<> inline const Bool *Tensor::type_as<Bool>() const {
  return type_as_Bool();
}

template<> inline const Decimal *Tensor::type_as<Decimal>() const {
  return type_as_Decimal();
}

template<> inline const Date *Tensor::type_as<Date>() const {
  return type_as_Date();
}

template<> inline const Time *Tensor::type_as<Time>() const {
  return type_as_Time();
}

template<> inline const Timestamp *Tensor::type_as<Timestamp>() const {
  return type_as_Timestamp();
}

template<> inline const Interval *Tensor::type_as<Interval>() const {
  return type_as_Interval();
}

template<> inline const List *Tensor::type_as<List>() const {
  return type_as_List();
}

template<> inline const Struct_ *Tensor::type_as<Struct_>() const {
  return type_as_Struct_();
}

template<> inline const Union *Tensor::type_as<Union>() const {
  return type_as_Union();
}

template<> inline const FixedSizeBinary *Tensor::type_as<FixedSizeBinary>() const {
  return type_as_FixedSizeBinary();
}

template<> inline const FixedSizeList *Tensor::type_as<FixedSizeList>() const {
  return type_as_FixedSizeList();
}

template<> inline const Map *Tensor::type_as<Map>() const {
  return type_as_Map();
}

struct TensorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type_type(Type type_type) {
    fbb_.AddElement<uint8_t>(Tensor::VT_TYPE_TYPE, static_cast<uint8_t>(type_type), 0);
  }
  void add_type(flatbuffers::Offset<void> type) {
    fbb_.AddOffset(Tensor::VT_TYPE, type);
  }
  void add_shape(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TensorDim>>> shape) {
    fbb_.AddOffset(Tensor::VT_SHAPE, shape);
  }
  void add_strides(flatbuffers::Offset<flatbuffers::Vector<int64_t>> strides) {
    fbb_.AddOffset(Tensor::VT_STRIDES, strides);
  }
  void add_data(const Buffer *data) {
    fbb_.AddStruct(Tensor::VT_DATA, data);
  }
  explicit TensorBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TensorBuilder &operator=(const TensorBuilder &);
  flatbuffers::Offset<Tensor> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Tensor>(end);
    return o;
  }
};

inline flatbuffers::Offset<Tensor> CreateTensor(
    flatbuffers::FlatBufferBuilder &_fbb,
    Type type_type = Type_NONE,
    flatbuffers::Offset<void> type = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TensorDim>>> shape = 0,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> strides = 0,
    const Buffer *data = 0) {
  TensorBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_strides(strides);
  builder_.add_shape(shape);
  builder_.add_type(type);
  builder_.add_type_type(type_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<Tensor> CreateTensorDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    Type type_type = Type_NONE,
    flatbuffers::Offset<void> type = 0,
    const std::vector<flatbuffers::Offset<TensorDim>> *shape = nullptr,
    const std::vector<int64_t> *strides = nullptr,
    const Buffer *data = 0) {
  return org::apache::arrow::flatbuf::CreateTensor(
      _fbb,
      type_type,
      type,
      shape ? _fbb.CreateVector<flatbuffers::Offset<TensorDim>>(*shape) : 0,
      strides ? _fbb.CreateVector<int64_t>(*strides) : 0,
      data);
}

inline const org::apache::arrow::flatbuf::Tensor *GetTensor(const void *buf) {
  return flatbuffers::GetRoot<org::apache::arrow::flatbuf::Tensor>(buf);
}

inline const org::apache::arrow::flatbuf::Tensor *GetSizePrefixedTensor(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<org::apache::arrow::flatbuf::Tensor>(buf);
}

inline bool VerifyTensorBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<org::apache::arrow::flatbuf::Tensor>(nullptr);
}

inline bool VerifySizePrefixedTensorBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<org::apache::arrow::flatbuf::Tensor>(nullptr);
}

inline void FinishTensorBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<org::apache::arrow::flatbuf::Tensor> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTensorBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<org::apache::arrow::flatbuf::Tensor> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flatbuf
}  // namespace arrow
}  // namespace apache
}  // namespace org

#endif  // FLATBUFFERS_GENERATED_TENSOR_ORG_APACHE_ARROW_FLATBUF_H_
