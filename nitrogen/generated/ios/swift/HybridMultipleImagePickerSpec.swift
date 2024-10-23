///
/// HybridMultipleImagePickerSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the MultipleImagePicker HybridObject.
 * Implement this protocol to create Swift-based instances of MultipleImagePicker.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class HybridMultipleImagePicker : HybridMultipleImagePickerSpec {
 *   // Initialize HybridContext
 *   var hybridContext = margelo.nitro.HybridContext()
 *
 *   // Return size of the instance to inform JS GC about memory pressure
 *   var memorySize: Int {
 *     return getSizeOf(self)
 *   }
 *
 *   // ...
 * }
 * ```
 */
public protocol HybridMultipleImagePickerSpec: AnyObject, HybridObjectSpec {
  // Properties
  

  // Methods
  func openPicker(config: NitroConfig, resolved: @escaping ((_ result: [Result]) -> Void), rejected: @escaping ((_ reject: Double) -> Void)) throws -> Void
}
