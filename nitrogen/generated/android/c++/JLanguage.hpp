///
/// JLanguage.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "Language.hpp"

namespace margelo::nitro::imagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "Language" and the the Kotlin enum "Language".
   */
  struct JLanguage final: public jni::JavaClass<JLanguage> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/imagepicker/Language;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum Language.
     */
    [[maybe_unused]]
    Language toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<Language>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JLanguage> fromCpp(Language value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldSYSTEM = clazz->getStaticField<JLanguage>("SYSTEM");
      static const auto fieldSIMPLIFIEDCHINESE = clazz->getStaticField<JLanguage>("SIMPLIFIEDCHINESE");
      static const auto fieldTRADITIONALCHINESE = clazz->getStaticField<JLanguage>("TRADITIONALCHINESE");
      static const auto fieldJAPANESE = clazz->getStaticField<JLanguage>("JAPANESE");
      static const auto fieldKOREAN = clazz->getStaticField<JLanguage>("KOREAN");
      static const auto fieldENGLISH = clazz->getStaticField<JLanguage>("ENGLISH");
      static const auto fieldTHAI = clazz->getStaticField<JLanguage>("THAI");
      static const auto fieldINDONESIA = clazz->getStaticField<JLanguage>("INDONESIA");
      static const auto fieldVIETNAMESE = clazz->getStaticField<JLanguage>("VIETNAMESE");
      static const auto fieldRUSSIAN = clazz->getStaticField<JLanguage>("RUSSIAN");
      static const auto fieldGERMAN = clazz->getStaticField<JLanguage>("GERMAN");
      static const auto fieldFRENCH = clazz->getStaticField<JLanguage>("FRENCH");
      static const auto fieldARABIC = clazz->getStaticField<JLanguage>("ARABIC");
      
      switch (value) {
        case Language::SYSTEM:
          return clazz->getStaticFieldValue(fieldSYSTEM);
        case Language::SIMPLIFIEDCHINESE:
          return clazz->getStaticFieldValue(fieldSIMPLIFIEDCHINESE);
        case Language::TRADITIONALCHINESE:
          return clazz->getStaticFieldValue(fieldTRADITIONALCHINESE);
        case Language::JAPANESE:
          return clazz->getStaticFieldValue(fieldJAPANESE);
        case Language::KOREAN:
          return clazz->getStaticFieldValue(fieldKOREAN);
        case Language::ENGLISH:
          return clazz->getStaticFieldValue(fieldENGLISH);
        case Language::THAI:
          return clazz->getStaticFieldValue(fieldTHAI);
        case Language::INDONESIA:
          return clazz->getStaticFieldValue(fieldINDONESIA);
        case Language::VIETNAMESE:
          return clazz->getStaticFieldValue(fieldVIETNAMESE);
        case Language::RUSSIAN:
          return clazz->getStaticFieldValue(fieldRUSSIAN);
        case Language::GERMAN:
          return clazz->getStaticFieldValue(fieldGERMAN);
        case Language::FRENCH:
          return clazz->getStaticFieldValue(fieldFRENCH);
        case Language::ARABIC:
          return clazz->getStaticFieldValue(fieldARABIC);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::invalid_argument("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::imagepicker
