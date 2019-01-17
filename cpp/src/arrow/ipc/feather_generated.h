// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FEATHER_ARROW_IPC_FEATHER_FBS_H_
#define FLATBUFFERS_GENERATED_FEATHER_ARROW_IPC_FEATHER_FBS_H_

#include "flatbuffers/flatbuffers.h"

namespace arrow {
namespace ipc {
namespace feather {
namespace fbs {

struct PrimitiveArray;

struct CategoryMetadata;

struct TimestampMetadata;

struct DateMetadata;

struct TimeMetadata;

struct Column;

struct CTable;

/// Feather is an experimental serialization format implemented using
/// techniques from Apache Arrow. It was created as a proof-of-concept of an
/// interoperable file format for storing data frames originating in Python or
/// R. It enabled the developers to sidestep some of the open design questions
/// in Arrow from early 2016 and instead create something simple and useful for
/// the intended use cases.
enum Type {
  Type_BOOL = 0,
  Type_INT8 = 1,
  Type_INT16 = 2,
  Type_INT32 = 3,
  Type_INT64 = 4,
  Type_UINT8 = 5,
  Type_UINT16 = 6,
  Type_UINT32 = 7,
  Type_UINT64 = 8,
  Type_FLOAT = 9,
  Type_DOUBLE = 10,
  Type_UTF8 = 11,
  Type_BINARY = 12,
  Type_CATEGORY = 13,
  Type_TIMESTAMP = 14,
  Type_DATE = 15,
  Type_TIME = 16,
  Type_MIN = Type_BOOL,
  Type_MAX = Type_TIME
};

inline const Type (&EnumValuesType())[17] {
  static const Type values[] = {
    Type_BOOL,
    Type_INT8,
    Type_INT16,
    Type_INT32,
    Type_INT64,
    Type_UINT8,
    Type_UINT16,
    Type_UINT32,
    Type_UINT64,
    Type_FLOAT,
    Type_DOUBLE,
    Type_UTF8,
    Type_BINARY,
    Type_CATEGORY,
    Type_TIMESTAMP,
    Type_DATE,
    Type_TIME
  };
  return values;
}

inline const char * const *EnumNamesType() {
  static const char * const names[] = {
    "BOOL",
    "INT8",
    "INT16",
    "INT32",
    "INT64",
    "UINT8",
    "UINT16",
    "UINT32",
    "UINT64",
    "FLOAT",
    "DOUBLE",
    "UTF8",
    "BINARY",
    "CATEGORY",
    "TIMESTAMP",
    "DATE",
    "TIME",
    nullptr
  };
  return names;
}

inline const char *EnumNameType(Type e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesType()[index];
}

enum Encoding {
  Encoding_PLAIN = 0  /// Data is stored dictionary-encoded
  /// dictionary size: <INT32 Dictionary size>
  /// dictionary data: <TYPE primitive array>
  /// dictionary index: <INT32 primitive array>
  ///
  /// TODO: do we care about storing the index values in a smaller typeclass
,
  Encoding_DICTIONARY = 1,
  Encoding_MIN = Encoding_PLAIN,
  Encoding_MAX = Encoding_DICTIONARY
};

inline const Encoding (&EnumValuesEncoding())[2] {
  static const Encoding values[] = {
    Encoding_PLAIN,
    Encoding_DICTIONARY
  };
  return values;
}

inline const char * const *EnumNamesEncoding() {
  static const char * const names[] = {
    "PLAIN",
    "DICTIONARY",
    nullptr
  };
  return names;
}

inline const char *EnumNameEncoding(Encoding e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesEncoding()[index];
}

enum TimeUnit {
  TimeUnit_SECOND = 0,
  TimeUnit_MILLISECOND = 1,
  TimeUnit_MICROSECOND = 2,
  TimeUnit_NANOSECOND = 3,
  TimeUnit_MIN = TimeUnit_SECOND,
  TimeUnit_MAX = TimeUnit_NANOSECOND
};

inline const TimeUnit (&EnumValuesTimeUnit())[4] {
  static const TimeUnit values[] = {
    TimeUnit_SECOND,
    TimeUnit_MILLISECOND,
    TimeUnit_MICROSECOND,
    TimeUnit_NANOSECOND
  };
  return values;
}

inline const char * const *EnumNamesTimeUnit() {
  static const char * const names[] = {
    "SECOND",
    "MILLISECOND",
    "MICROSECOND",
    "NANOSECOND",
    nullptr
  };
  return names;
}

inline const char *EnumNameTimeUnit(TimeUnit e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesTimeUnit()[index];
}

enum TypeMetadata {
  TypeMetadata_NONE = 0,
  TypeMetadata_CategoryMetadata = 1,
  TypeMetadata_TimestampMetadata = 2,
  TypeMetadata_DateMetadata = 3,
  TypeMetadata_TimeMetadata = 4,
  TypeMetadata_MIN = TypeMetadata_NONE,
  TypeMetadata_MAX = TypeMetadata_TimeMetadata
};

inline const TypeMetadata (&EnumValuesTypeMetadata())[5] {
  static const TypeMetadata values[] = {
    TypeMetadata_NONE,
    TypeMetadata_CategoryMetadata,
    TypeMetadata_TimestampMetadata,
    TypeMetadata_DateMetadata,
    TypeMetadata_TimeMetadata
  };
  return values;
}

inline const char * const *EnumNamesTypeMetadata() {
  static const char * const names[] = {
    "NONE",
    "CategoryMetadata",
    "TimestampMetadata",
    "DateMetadata",
    "TimeMetadata",
    nullptr
  };
  return names;
}

inline const char *EnumNameTypeMetadata(TypeMetadata e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesTypeMetadata()[index];
}

template<typename T> struct TypeMetadataTraits {
  static const TypeMetadata enum_value = TypeMetadata_NONE;
};

template<> struct TypeMetadataTraits<CategoryMetadata> {
  static const TypeMetadata enum_value = TypeMetadata_CategoryMetadata;
};

template<> struct TypeMetadataTraits<TimestampMetadata> {
  static const TypeMetadata enum_value = TypeMetadata_TimestampMetadata;
};

template<> struct TypeMetadataTraits<DateMetadata> {
  static const TypeMetadata enum_value = TypeMetadata_DateMetadata;
};

template<> struct TypeMetadataTraits<TimeMetadata> {
  static const TypeMetadata enum_value = TypeMetadata_TimeMetadata;
};

bool VerifyTypeMetadata(flatbuffers::Verifier &verifier, const void *obj, TypeMetadata type);
bool VerifyTypeMetadataVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct PrimitiveArray FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TYPE = 4,
    VT_ENCODING = 6,
    VT_OFFSET = 8,
    VT_LENGTH = 10,
    VT_NULL_COUNT = 12,
    VT_TOTAL_BYTES = 14
  };
  Type type() const {
    return static_cast<Type>(GetField<int8_t>(VT_TYPE, 0));
  }
  Encoding encoding() const {
    return static_cast<Encoding>(GetField<int8_t>(VT_ENCODING, 0));
  }
  /// Relative memory offset of the start of the array data excluding the size
  /// of the metadata
  int64_t offset() const {
    return GetField<int64_t>(VT_OFFSET, 0);
  }
  /// The number of logical values in the array
  int64_t length() const {
    return GetField<int64_t>(VT_LENGTH, 0);
  }
  /// The number of observed nulls
  int64_t null_count() const {
    return GetField<int64_t>(VT_NULL_COUNT, 0);
  }
  /// The total size of the actual data in the file
  int64_t total_bytes() const {
    return GetField<int64_t>(VT_TOTAL_BYTES, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_TYPE) &&
           VerifyField<int8_t>(verifier, VT_ENCODING) &&
           VerifyField<int64_t>(verifier, VT_OFFSET) &&
           VerifyField<int64_t>(verifier, VT_LENGTH) &&
           VerifyField<int64_t>(verifier, VT_NULL_COUNT) &&
           VerifyField<int64_t>(verifier, VT_TOTAL_BYTES) &&
           verifier.EndTable();
  }
};

struct PrimitiveArrayBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(Type type) {
    fbb_.AddElement<int8_t>(PrimitiveArray::VT_TYPE, static_cast<int8_t>(type), 0);
  }
  void add_encoding(Encoding encoding) {
    fbb_.AddElement<int8_t>(PrimitiveArray::VT_ENCODING, static_cast<int8_t>(encoding), 0);
  }
  void add_offset(int64_t offset) {
    fbb_.AddElement<int64_t>(PrimitiveArray::VT_OFFSET, offset, 0);
  }
  void add_length(int64_t length) {
    fbb_.AddElement<int64_t>(PrimitiveArray::VT_LENGTH, length, 0);
  }
  void add_null_count(int64_t null_count) {
    fbb_.AddElement<int64_t>(PrimitiveArray::VT_NULL_COUNT, null_count, 0);
  }
  void add_total_bytes(int64_t total_bytes) {
    fbb_.AddElement<int64_t>(PrimitiveArray::VT_TOTAL_BYTES, total_bytes, 0);
  }
  explicit PrimitiveArrayBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PrimitiveArrayBuilder &operator=(const PrimitiveArrayBuilder &);
  flatbuffers::Offset<PrimitiveArray> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PrimitiveArray>(end);
    return o;
  }
};

inline flatbuffers::Offset<PrimitiveArray> CreatePrimitiveArray(
    flatbuffers::FlatBufferBuilder &_fbb,
    Type type = Type_BOOL,
    Encoding encoding = Encoding_PLAIN,
    int64_t offset = 0,
    int64_t length = 0,
    int64_t null_count = 0,
    int64_t total_bytes = 0) {
  PrimitiveArrayBuilder builder_(_fbb);
  builder_.add_total_bytes(total_bytes);
  builder_.add_null_count(null_count);
  builder_.add_length(length);
  builder_.add_offset(offset);
  builder_.add_encoding(encoding);
  builder_.add_type(type);
  return builder_.Finish();
}

struct CategoryMetadata FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_LEVELS = 4,
    VT_ORDERED = 6
  };
  /// The category codes are presumed to be integers that are valid indexes into
  /// the levels array
  const PrimitiveArray *levels() const {
    return GetPointer<const PrimitiveArray *>(VT_LEVELS);
  }
  bool ordered() const {
    return GetField<uint8_t>(VT_ORDERED, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LEVELS) &&
           verifier.VerifyTable(levels()) &&
           VerifyField<uint8_t>(verifier, VT_ORDERED) &&
           verifier.EndTable();
  }
};

struct CategoryMetadataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_levels(flatbuffers::Offset<PrimitiveArray> levels) {
    fbb_.AddOffset(CategoryMetadata::VT_LEVELS, levels);
  }
  void add_ordered(bool ordered) {
    fbb_.AddElement<uint8_t>(CategoryMetadata::VT_ORDERED, static_cast<uint8_t>(ordered), 0);
  }
  explicit CategoryMetadataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CategoryMetadataBuilder &operator=(const CategoryMetadataBuilder &);
  flatbuffers::Offset<CategoryMetadata> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CategoryMetadata>(end);
    return o;
  }
};

inline flatbuffers::Offset<CategoryMetadata> CreateCategoryMetadata(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<PrimitiveArray> levels = 0,
    bool ordered = false) {
  CategoryMetadataBuilder builder_(_fbb);
  builder_.add_levels(levels);
  builder_.add_ordered(ordered);
  return builder_.Finish();
}

struct TimestampMetadata FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_UNIT = 4,
    VT_TIMEZONE = 6
  };
  TimeUnit unit() const {
    return static_cast<TimeUnit>(GetField<int8_t>(VT_UNIT, 0));
  }
  /// Timestamp data is assumed to be UTC, but the time zone is stored here for
  /// presentation as localized
  const flatbuffers::String *timezone() const {
    return GetPointer<const flatbuffers::String *>(VT_TIMEZONE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_UNIT) &&
           VerifyOffset(verifier, VT_TIMEZONE) &&
           verifier.VerifyString(timezone()) &&
           verifier.EndTable();
  }
};

struct TimestampMetadataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_unit(TimeUnit unit) {
    fbb_.AddElement<int8_t>(TimestampMetadata::VT_UNIT, static_cast<int8_t>(unit), 0);
  }
  void add_timezone(flatbuffers::Offset<flatbuffers::String> timezone) {
    fbb_.AddOffset(TimestampMetadata::VT_TIMEZONE, timezone);
  }
  explicit TimestampMetadataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TimestampMetadataBuilder &operator=(const TimestampMetadataBuilder &);
  flatbuffers::Offset<TimestampMetadata> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TimestampMetadata>(end);
    return o;
  }
};

inline flatbuffers::Offset<TimestampMetadata> CreateTimestampMetadata(
    flatbuffers::FlatBufferBuilder &_fbb,
    TimeUnit unit = TimeUnit_SECOND,
    flatbuffers::Offset<flatbuffers::String> timezone = 0) {
  TimestampMetadataBuilder builder_(_fbb);
  builder_.add_timezone(timezone);
  builder_.add_unit(unit);
  return builder_.Finish();
}

inline flatbuffers::Offset<TimestampMetadata> CreateTimestampMetadataDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    TimeUnit unit = TimeUnit_SECOND,
    const char *timezone = nullptr) {
  return arrow::ipc::feather::fbs::CreateTimestampMetadata(
      _fbb,
      unit,
      timezone ? _fbb.CreateString(timezone) : 0);
}

struct DateMetadata FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct DateMetadataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  explicit DateMetadataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DateMetadataBuilder &operator=(const DateMetadataBuilder &);
  flatbuffers::Offset<DateMetadata> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DateMetadata>(end);
    return o;
  }
};

inline flatbuffers::Offset<DateMetadata> CreateDateMetadata(
    flatbuffers::FlatBufferBuilder &_fbb) {
  DateMetadataBuilder builder_(_fbb);
  return builder_.Finish();
}

struct TimeMetadata FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_UNIT = 4
  };
  TimeUnit unit() const {
    return static_cast<TimeUnit>(GetField<int8_t>(VT_UNIT, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_UNIT) &&
           verifier.EndTable();
  }
};

struct TimeMetadataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_unit(TimeUnit unit) {
    fbb_.AddElement<int8_t>(TimeMetadata::VT_UNIT, static_cast<int8_t>(unit), 0);
  }
  explicit TimeMetadataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TimeMetadataBuilder &operator=(const TimeMetadataBuilder &);
  flatbuffers::Offset<TimeMetadata> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TimeMetadata>(end);
    return o;
  }
};

inline flatbuffers::Offset<TimeMetadata> CreateTimeMetadata(
    flatbuffers::FlatBufferBuilder &_fbb,
    TimeUnit unit = TimeUnit_SECOND) {
  TimeMetadataBuilder builder_(_fbb);
  builder_.add_unit(unit);
  return builder_.Finish();
}

struct Column FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NAME = 4,
    VT_VALUES = 6,
    VT_METADATA_TYPE = 8,
    VT_METADATA = 10,
    VT_USER_METADATA = 12
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const PrimitiveArray *values() const {
    return GetPointer<const PrimitiveArray *>(VT_VALUES);
  }
  TypeMetadata metadata_type() const {
    return static_cast<TypeMetadata>(GetField<uint8_t>(VT_METADATA_TYPE, 0));
  }
  const void *metadata() const {
    return GetPointer<const void *>(VT_METADATA);
  }
  template<typename T> const T *metadata_as() const;
  const CategoryMetadata *metadata_as_CategoryMetadata() const {
    return metadata_type() == TypeMetadata_CategoryMetadata ? static_cast<const CategoryMetadata *>(metadata()) : nullptr;
  }
  const TimestampMetadata *metadata_as_TimestampMetadata() const {
    return metadata_type() == TypeMetadata_TimestampMetadata ? static_cast<const TimestampMetadata *>(metadata()) : nullptr;
  }
  const DateMetadata *metadata_as_DateMetadata() const {
    return metadata_type() == TypeMetadata_DateMetadata ? static_cast<const DateMetadata *>(metadata()) : nullptr;
  }
  const TimeMetadata *metadata_as_TimeMetadata() const {
    return metadata_type() == TypeMetadata_TimeMetadata ? static_cast<const TimeMetadata *>(metadata()) : nullptr;
  }
  /// This should (probably) be JSON
  const flatbuffers::String *user_metadata() const {
    return GetPointer<const flatbuffers::String *>(VT_USER_METADATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_VALUES) &&
           verifier.VerifyTable(values()) &&
           VerifyField<uint8_t>(verifier, VT_METADATA_TYPE) &&
           VerifyOffset(verifier, VT_METADATA) &&
           VerifyTypeMetadata(verifier, metadata(), metadata_type()) &&
           VerifyOffset(verifier, VT_USER_METADATA) &&
           verifier.VerifyString(user_metadata()) &&
           verifier.EndTable();
  }
};

template<> inline const CategoryMetadata *Column::metadata_as<CategoryMetadata>() const {
  return metadata_as_CategoryMetadata();
}

template<> inline const TimestampMetadata *Column::metadata_as<TimestampMetadata>() const {
  return metadata_as_TimestampMetadata();
}

template<> inline const DateMetadata *Column::metadata_as<DateMetadata>() const {
  return metadata_as_DateMetadata();
}

template<> inline const TimeMetadata *Column::metadata_as<TimeMetadata>() const {
  return metadata_as_TimeMetadata();
}

struct ColumnBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Column::VT_NAME, name);
  }
  void add_values(flatbuffers::Offset<PrimitiveArray> values) {
    fbb_.AddOffset(Column::VT_VALUES, values);
  }
  void add_metadata_type(TypeMetadata metadata_type) {
    fbb_.AddElement<uint8_t>(Column::VT_METADATA_TYPE, static_cast<uint8_t>(metadata_type), 0);
  }
  void add_metadata(flatbuffers::Offset<void> metadata) {
    fbb_.AddOffset(Column::VT_METADATA, metadata);
  }
  void add_user_metadata(flatbuffers::Offset<flatbuffers::String> user_metadata) {
    fbb_.AddOffset(Column::VT_USER_METADATA, user_metadata);
  }
  explicit ColumnBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ColumnBuilder &operator=(const ColumnBuilder &);
  flatbuffers::Offset<Column> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Column>(end);
    return o;
  }
};

inline flatbuffers::Offset<Column> CreateColumn(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<PrimitiveArray> values = 0,
    TypeMetadata metadata_type = TypeMetadata_NONE,
    flatbuffers::Offset<void> metadata = 0,
    flatbuffers::Offset<flatbuffers::String> user_metadata = 0) {
  ColumnBuilder builder_(_fbb);
  builder_.add_user_metadata(user_metadata);
  builder_.add_metadata(metadata);
  builder_.add_values(values);
  builder_.add_name(name);
  builder_.add_metadata_type(metadata_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<Column> CreateColumnDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    flatbuffers::Offset<PrimitiveArray> values = 0,
    TypeMetadata metadata_type = TypeMetadata_NONE,
    flatbuffers::Offset<void> metadata = 0,
    const char *user_metadata = nullptr) {
  return arrow::ipc::feather::fbs::CreateColumn(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      values,
      metadata_type,
      metadata,
      user_metadata ? _fbb.CreateString(user_metadata) : 0);
}

struct CTable FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_DESCRIPTION = 4,
    VT_NUM_ROWS = 6,
    VT_COLUMNS = 8,
    VT_VERSION = 10,
    VT_METADATA = 12
  };
  /// Some text (or a name) metadata about what the file is, optional
  const flatbuffers::String *description() const {
    return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
  }
  int64_t num_rows() const {
    return GetField<int64_t>(VT_NUM_ROWS, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Column>> *columns() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Column>> *>(VT_COLUMNS);
  }
  /// Version number of the Feather format
  int32_t version() const {
    return GetField<int32_t>(VT_VERSION, 0);
  }
  /// Table metadata (likely JSON), not yet used
  const flatbuffers::String *metadata() const {
    return GetPointer<const flatbuffers::String *>(VT_METADATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_DESCRIPTION) &&
           verifier.VerifyString(description()) &&
           VerifyField<int64_t>(verifier, VT_NUM_ROWS) &&
           VerifyOffset(verifier, VT_COLUMNS) &&
           verifier.VerifyVector(columns()) &&
           verifier.VerifyVectorOfTables(columns()) &&
           VerifyField<int32_t>(verifier, VT_VERSION) &&
           VerifyOffset(verifier, VT_METADATA) &&
           verifier.VerifyString(metadata()) &&
           verifier.EndTable();
  }
};

struct CTableBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_description(flatbuffers::Offset<flatbuffers::String> description) {
    fbb_.AddOffset(CTable::VT_DESCRIPTION, description);
  }
  void add_num_rows(int64_t num_rows) {
    fbb_.AddElement<int64_t>(CTable::VT_NUM_ROWS, num_rows, 0);
  }
  void add_columns(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Column>>> columns) {
    fbb_.AddOffset(CTable::VT_COLUMNS, columns);
  }
  void add_version(int32_t version) {
    fbb_.AddElement<int32_t>(CTable::VT_VERSION, version, 0);
  }
  void add_metadata(flatbuffers::Offset<flatbuffers::String> metadata) {
    fbb_.AddOffset(CTable::VT_METADATA, metadata);
  }
  explicit CTableBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CTableBuilder &operator=(const CTableBuilder &);
  flatbuffers::Offset<CTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CTable>(end);
    return o;
  }
};

inline flatbuffers::Offset<CTable> CreateCTable(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> description = 0,
    int64_t num_rows = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Column>>> columns = 0,
    int32_t version = 0,
    flatbuffers::Offset<flatbuffers::String> metadata = 0) {
  CTableBuilder builder_(_fbb);
  builder_.add_num_rows(num_rows);
  builder_.add_metadata(metadata);
  builder_.add_version(version);
  builder_.add_columns(columns);
  builder_.add_description(description);
  return builder_.Finish();
}

inline flatbuffers::Offset<CTable> CreateCTableDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *description = nullptr,
    int64_t num_rows = 0,
    const std::vector<flatbuffers::Offset<Column>> *columns = nullptr,
    int32_t version = 0,
    const char *metadata = nullptr) {
  return arrow::ipc::feather::fbs::CreateCTable(
      _fbb,
      description ? _fbb.CreateString(description) : 0,
      num_rows,
      columns ? _fbb.CreateVector<flatbuffers::Offset<Column>>(*columns) : 0,
      version,
      metadata ? _fbb.CreateString(metadata) : 0);
}

inline bool VerifyTypeMetadata(flatbuffers::Verifier &verifier, const void *obj, TypeMetadata type) {
  switch (type) {
    case TypeMetadata_NONE: {
      return true;
    }
    case TypeMetadata_CategoryMetadata: {
      auto ptr = reinterpret_cast<const CategoryMetadata *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case TypeMetadata_TimestampMetadata: {
      auto ptr = reinterpret_cast<const TimestampMetadata *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case TypeMetadata_DateMetadata: {
      auto ptr = reinterpret_cast<const DateMetadata *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case TypeMetadata_TimeMetadata: {
      auto ptr = reinterpret_cast<const TimeMetadata *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return false;
  }
}

inline bool VerifyTypeMetadataVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyTypeMetadata(
        verifier,  values->Get(i), types->GetEnum<TypeMetadata>(i))) {
      return false;
    }
  }
  return true;
}

inline const arrow::ipc::feather::fbs::CTable *GetCTable(const void *buf) {
  return flatbuffers::GetRoot<arrow::ipc::feather::fbs::CTable>(buf);
}

inline const arrow::ipc::feather::fbs::CTable *GetSizePrefixedCTable(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<arrow::ipc::feather::fbs::CTable>(buf);
}

inline bool VerifyCTableBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<arrow::ipc::feather::fbs::CTable>(nullptr);
}

inline bool VerifySizePrefixedCTableBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<arrow::ipc::feather::fbs::CTable>(nullptr);
}

inline void FinishCTableBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<arrow::ipc::feather::fbs::CTable> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedCTableBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<arrow::ipc::feather::fbs::CTable> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace fbs
}  // namespace feather
}  // namespace ipc
}  // namespace arrow

#endif  // FLATBUFFERS_GENERATED_FEATHER_ARROW_IPC_FEATHER_FBS_H_
