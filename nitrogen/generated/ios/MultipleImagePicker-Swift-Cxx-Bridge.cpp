///
/// MultipleImagePicker-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "MultipleImagePicker-Swift-Cxx-Bridge.hpp"

// Include C++ implementation defined types
#include "HybridMultipleImagePickerSpecSwift.hpp"
#include "MultipleImagePicker-Swift-Cxx-Umbrella.hpp"
#include <NitroModules/HybridContext.hpp>

namespace margelo::nitro::multipleimagepicker::bridge::swift {

  // pragma MARK: std::shared_ptr<margelo::nitro::multipleimagepicker::HybridMultipleImagePickerSpec>
  std::shared_ptr<margelo::nitro::multipleimagepicker::HybridMultipleImagePickerSpec> create_std__shared_ptr_margelo__nitro__multipleimagepicker__HybridMultipleImagePickerSpec_(void* _Nonnull swiftUnsafePointer) {
    MultipleImagePicker::HybridMultipleImagePickerSpecCxx swiftPart = MultipleImagePicker::HybridMultipleImagePickerSpecCxxUnsafe::fromUnsafe(swiftUnsafePointer);
    return HybridContext::getOrCreate<margelo::nitro::multipleimagepicker::HybridMultipleImagePickerSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__multipleimagepicker__HybridMultipleImagePickerSpec_(std__shared_ptr_margelo__nitro__multipleimagepicker__HybridMultipleImagePickerSpec_ cppType) {
    std::shared_ptr<margelo::nitro::multipleimagepicker::HybridMultipleImagePickerSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::multipleimagepicker::HybridMultipleImagePickerSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridMultipleImagePickerSpec\" is not implemented in Swift!");
    }
  #endif
    MultipleImagePicker::HybridMultipleImagePickerSpecCxx swiftPart = swiftWrapper->getSwiftPart();
    return MultipleImagePicker::HybridMultipleImagePickerSpecCxxUnsafe::toUnsafe(swiftPart);
  }

} // namespace margelo::nitro::multipleimagepicker::bridge::swift
