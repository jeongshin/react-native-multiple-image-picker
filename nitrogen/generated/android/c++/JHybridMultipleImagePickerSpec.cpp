///
/// JHybridMultipleImagePickerSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridMultipleImagePickerSpec.hpp"

// Forward declaration of `NitroConfig` to properly resolve imports.
namespace margelo::nitro::imagepicker { struct NitroConfig; }
// Forward declaration of `MediaType` to properly resolve imports.
namespace margelo::nitro::imagepicker { enum class MediaType; }
// Forward declaration of `Result` to properly resolve imports.
namespace margelo::nitro::imagepicker { struct Result; }
// Forward declaration of `SelectBoxStyle` to properly resolve imports.
namespace margelo::nitro::imagepicker { enum class SelectBoxStyle; }
// Forward declaration of `SelectMode` to properly resolve imports.
namespace margelo::nitro::imagepicker { enum class SelectMode; }
// Forward declaration of `Presentation` to properly resolve imports.
namespace margelo::nitro::imagepicker { enum class Presentation; }
// Forward declaration of `Text` to properly resolve imports.
namespace margelo::nitro::imagepicker { struct Text; }
// Forward declaration of `Language` to properly resolve imports.
namespace margelo::nitro::imagepicker { enum class Language; }

#include "NitroConfig.hpp"
#include "JNitroConfig.hpp"
#include "MediaType.hpp"
#include "JMediaType.hpp"
#include <vector>
#include "Result.hpp"
#include "JResult.hpp"
#include <string>
#include <optional>
#include "SelectBoxStyle.hpp"
#include "JSelectBoxStyle.hpp"
#include "SelectMode.hpp"
#include "JSelectMode.hpp"
#include "Presentation.hpp"
#include "JPresentation.hpp"
#include "Text.hpp"
#include "JText.hpp"
#include "Language.hpp"
#include "JLanguage.hpp"
#include <functional>
#include "JFunc_void_std__vector_Result_.hpp"
#include "JFunc_void_double.hpp"

namespace margelo::nitro::imagepicker {

  jni::local_ref<JHybridMultipleImagePickerSpec::jhybriddata> JHybridMultipleImagePickerSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridMultipleImagePickerSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridMultipleImagePickerSpec::initHybrid),
    });
  }

  size_t JHybridMultipleImagePickerSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  void JHybridMultipleImagePickerSpec::openPicker(const NitroConfig& config, const std::function<void(const std::vector<Result>& /* result */)>& resolved, const std::function<void(double /* reject */)>& rejected) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JNitroConfig> /* config */, jni::alias_ref<JFunc_void_std__vector_Result_::javaobject> /* resolved */, jni::alias_ref<JFunc_void_double::javaobject> /* rejected */)>("openPicker");
    method(_javaPart, JNitroConfig::fromCpp(config), JFunc_void_std__vector_Result_::fromCpp(resolved), JFunc_void_double::fromCpp(rejected));
  }

} // namespace margelo::nitro::imagepicker
