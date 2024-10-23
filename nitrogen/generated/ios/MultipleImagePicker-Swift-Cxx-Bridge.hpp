///
/// MultipleImagePicker-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declarations of C++ defined types
// Forward declaration of `HybridMultipleImagePickerSpec` to properly resolve imports.
namespace margelo::nitro::imagepicker { class HybridMultipleImagePickerSpec; }
// Forward declaration of `Result` to properly resolve imports.
namespace margelo::nitro::imagepicker { struct Result; }
// Forward declaration of `Text` to properly resolve imports.
namespace margelo::nitro::imagepicker { struct Text; }

// Forward declarations of Swift defined types
// Forward declaration of `HybridMultipleImagePickerSpecCxx` to properly resolve imports.
namespace MultipleImagePicker { class HybridMultipleImagePickerSpecCxx; }

// Include C++ defined types
#include "HybridMultipleImagePickerSpec.hpp"
#include "Result.hpp"
#include "Text.hpp"
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::imagepicker::bridge::swift {

  // pragma MARK: std::optional<double>
  /**
   * Specialized version of `std::optional<double>`.
   */
  using std__optional_double_ = std::optional<double>;
  inline std::optional<double> create_std__optional_double_(const double& value) {
    return std::optional<double>(value);
  }
  
  // pragma MARK: std::optional<std::string>
  /**
   * Specialized version of `std::optional<std::string>`.
   */
  using std__optional_std__string_ = std::optional<std::string>;
  inline std::optional<std::string> create_std__optional_std__string_(const std::string& value) {
    return std::optional<std::string>(value);
  }
  
  // pragma MARK: std::vector<Result>
  /**
   * Specialized version of `std::vector<Result>`.
   */
  using std__vector_Result_ = std::vector<Result>;
  inline std::vector<Result> create_std__vector_Result_(size_t size) {
    std::vector<Result> vector;
    vector.reserve(size);
    return vector;
  }
  
  // pragma MARK: std::optional<bool>
  /**
   * Specialized version of `std::optional<bool>`.
   */
  using std__optional_bool_ = std::optional<bool>;
  inline std::optional<bool> create_std__optional_bool_(const bool& value) {
    return std::optional<bool>(value);
  }
  
  // pragma MARK: std::optional<Text>
  /**
   * Specialized version of `std::optional<Text>`.
   */
  using std__optional_Text_ = std::optional<Text>;
  inline std::optional<Text> create_std__optional_Text_(const Text& value) {
    return std::optional<Text>(value);
  }
  
  // pragma MARK: std::function<void(const std::vector<Result>& /* result */)>
  /**
   * Specialized version of `std::function<void(const std::vector<Result>&)>`.
   */
  using Func_void_std__vector_Result_ = std::function<void(const std::vector<Result>& /* result */)>;
  /**
   * Wrapper class for a `std::function<void(const std::vector<Result>& / * result * /)>`, this can be used from Swift.
   */
  class Func_void_std__vector_Result__Wrapper final {
  public:
    explicit Func_void_std__vector_Result__Wrapper(const std::function<void(const std::vector<Result>& /* result */)>& func): _function(func) {}
    explicit Func_void_std__vector_Result__Wrapper(std::function<void(const std::vector<Result>& /* result */)>&& func): _function(std::move(func)) {}
    inline void call(std::vector<Result> result) const {
      _function(result);
    }
  private:
    std::function<void(const std::vector<Result>& /* result */)> _function;
  };
  inline Func_void_std__vector_Result_ create_Func_void_std__vector_Result_(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */, std::vector<Result>), void(* NONNULL destroy)(void* NONNULL)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__vector_Result_([sharedClosureHolder, call](const std::vector<Result>& result) -> void {
      call(sharedClosureHolder.get(), result);
    });
  }
  inline std::shared_ptr<Func_void_std__vector_Result__Wrapper> share_Func_void_std__vector_Result_(const Func_void_std__vector_Result_& value) {
    return std::make_shared<Func_void_std__vector_Result__Wrapper>(value);
  }
  
  // pragma MARK: std::function<void(double /* reject */)>
  /**
   * Specialized version of `std::function<void(double)>`.
   */
  using Func_void_double = std::function<void(double /* reject */)>;
  /**
   * Wrapper class for a `std::function<void(double / * reject * /)>`, this can be used from Swift.
   */
  class Func_void_double_Wrapper final {
  public:
    explicit Func_void_double_Wrapper(const std::function<void(double /* reject */)>& func): _function(func) {}
    explicit Func_void_double_Wrapper(std::function<void(double /* reject */)>&& func): _function(std::move(func)) {}
    inline void call(double reject) const {
      _function(reject);
    }
  private:
    std::function<void(double /* reject */)> _function;
  };
  inline Func_void_double create_Func_void_double(void* NONNULL closureHolder, void(* NONNULL call)(void* NONNULL /* closureHolder */, double), void(* NONNULL destroy)(void* NONNULL)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_double([sharedClosureHolder, call](double reject) -> void {
      call(sharedClosureHolder.get(), reject);
    });
  }
  inline std::shared_ptr<Func_void_double_Wrapper> share_Func_void_double(const Func_void_double& value) {
    return std::make_shared<Func_void_double_Wrapper>(value);
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::imagepicker::HybridMultipleImagePickerSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::imagepicker::HybridMultipleImagePickerSpec>`.
   */
  using std__shared_ptr_margelo__nitro__imagepicker__HybridMultipleImagePickerSpec_ = std::shared_ptr<margelo::nitro::imagepicker::HybridMultipleImagePickerSpec>;
  std::shared_ptr<margelo::nitro::imagepicker::HybridMultipleImagePickerSpec> create_std__shared_ptr_margelo__nitro__imagepicker__HybridMultipleImagePickerSpec_(void* NONNULL swiftUnsafePointer);
  void* NONNULL get_std__shared_ptr_margelo__nitro__imagepicker__HybridMultipleImagePickerSpec_(std__shared_ptr_margelo__nitro__imagepicker__HybridMultipleImagePickerSpec_ cppType);

} // namespace margelo::nitro::imagepicker::bridge::swift
