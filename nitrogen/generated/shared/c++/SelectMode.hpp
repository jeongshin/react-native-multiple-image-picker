///
/// SelectMode.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/NitroHash.hpp>)
#include <NitroModules/NitroHash.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

namespace margelo::nitro::imagepicker {

  /**
   * An enum which can be represented as a JavaScript union (SelectMode).
   */
  enum class SelectMode {
    SINGLE      SWIFT_NAME(single) = 0,
    MULTIPLE      SWIFT_NAME(multiple) = 1,
  } CLOSED_ENUM;

} // namespace margelo::nitro::imagepicker

namespace margelo::nitro {

  using namespace margelo::nitro::imagepicker;

  // C++ SelectMode <> JS SelectMode (union)
  template <>
  struct JSIConverter<SelectMode> {
    static inline SelectMode fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, arg);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("single"): return SelectMode::SINGLE;
        case hashString("multiple"): return SelectMode::MULTIPLE;
        default: [[unlikely]]
          throw std::invalid_argument("Cannot convert \"" + unionValue + "\" to enum SelectMode - invalid value!");
      }
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, SelectMode arg) {
      switch (arg) {
        case SelectMode::SINGLE: return JSIConverter<std::string>::toJSI(runtime, "single");
        case SelectMode::MULTIPLE: return JSIConverter<std::string>::toJSI(runtime, "multiple");
        default: [[unlikely]]
          throw std::invalid_argument("Cannot convert SelectMode to JS - invalid value: "
                                    + std::to_string(static_cast<int>(arg)) + "!");
      }
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isString()) {
        return false;
      }
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, value);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("single"):
        case hashString("multiple"):
          return true;
        default:
          return false;
      }
    }
  };

} // namespace margelo::nitro
