//
// Environment variables
//
#include "arrow/util/io-util.h"

namespace arrow {
namespace internal {

Status GetEnvVar(const char* name, std::string* out) {
#ifdef _WIN32
  // On Windows, getenv() reads an early copy of the process' environment
  // which doesn't get updated when SetEnvironmentVariable() is called.
  constexpr int32_t bufsize = 2000;
  char c_str[bufsize];
  auto res = GetEnvironmentVariableA(name, c_str, bufsize);
  if (res >= bufsize) {
    return Status::CapacityError("environment variable value too long");
  } else if (res == 0) {
    return Status::KeyError("environment variable undefined");
  }
  *out = std::string(c_str);
  return Status::OK();
#else
  char* c_str = getenv(name);
  if (c_str == nullptr) {
    return Status::KeyError("environment variable undefined");
  }
  *out = std::string(c_str);
  return Status::OK();
#endif
}

Status GetEnvVar(const std::string& name, std::string* out) {
  return GetEnvVar(name.c_str(), out);
}

Status SetEnvVar(const char* name, const char* value) {
#ifdef _WIN32
  if (SetEnvironmentVariableA(name, value)) {
    return Status::OK();
  } else {
    return Status::Invalid("failed setting environment variable");
  }
#else
  if (setenv(name, value, 1) == 0) {
    return Status::OK();
  } else {
    return Status::Invalid("failed setting environment variable");
  }
#endif
}

Status SetEnvVar(const std::string& name, const std::string& value) {
  return SetEnvVar(name.c_str(), value.c_str());
}

Status DelEnvVar(const char* name) {
#ifdef _WIN32
  if (SetEnvironmentVariableA(name, nullptr)) {
    return Status::OK();
  } else {
    return Status::Invalid("failed deleting environment variable");
  }
#else
  if (unsetenv(name) == 0) {
    return Status::OK();
  } else {
    return Status::Invalid("failed deleting environment variable");
  }
#endif
}

Status DelEnvVar(const std::string& name) { return DelEnvVar(name.c_str()); }


}
}
