import Foundation
#if canImport(AppKit)
import AppKit
#endif
#if canImport(UIKit)
import UIKit
#endif
#if canImport(SwiftUI)
import SwiftUI
#endif
#if canImport(DeveloperToolsSupport)
import DeveloperToolsSupport
#endif

#if SWIFT_PACKAGE
private let resourceBundle = Foundation.Bundle.module
#else
private class ResourceBundleClass {}
private let resourceBundle = Foundation.Bundle(for: ResourceBundleClass.self)
#endif

// MARK: - Color Symbols -

@available(iOS 11.0, macOS 10.13, tvOS 11.0, *)
extension ColorResource {

    /// The "backgroundColor" asset catalog color resource.
    static let background = ColorResource(name: "backgroundColor", bundle: resourceBundle)

    /// The "textColor" asset catalog color resource.
    static let text = ColorResource(name: "textColor", bundle: resourceBundle)

}

// MARK: - Image Symbols -

@available(iOS 11.0, macOS 10.7, tvOS 11.0, *)
extension ImageResource {

    /// The "LaunchLogo" asset catalog image resource.
    static let launchLogo = ImageResource(name: "LaunchLogo", bundle: resourceBundle)

    /// The "assets" asset catalog resource namespace.
    enum Assets {

        /// The "assets/images" asset catalog resource namespace.
        enum Images {

            /// The "assets/images/X_logo" asset catalog image resource.
            static let xLogo = ImageResource(name: "assets/images/X_logo", bundle: resourceBundle)

            /// The "assets/images/X_new" asset catalog image resource.
            static let xNew = ImageResource(name: "assets/images/X_new", bundle: resourceBundle)

            /// The "assets/images/X_neww" asset catalog image resource.
            static let xNeww = ImageResource(name: "assets/images/X_neww", bundle: resourceBundle)

            /// The "assets/images/home" asset catalog image resource.
            static let home = ImageResource(name: "assets/images/home", bundle: resourceBundle)

            /// The "assets/images/messages" asset catalog image resource.
            static let messages = ImageResource(name: "assets/images/messages", bundle: resourceBundle)

            /// The "assets/images/notification" asset catalog image resource.
            static let notification = ImageResource(name: "assets/images/notification", bundle: resourceBundle)

            /// The "assets/images/search" asset catalog image resource.
            static let search = ImageResource(name: "assets/images/search", bundle: resourceBundle)

            /// The "assets/images/tab1" asset catalog image resource.
            static let tab1 = ImageResource(name: "assets/images/tab1", bundle: resourceBundle)

            /// The "assets/images/tab2" asset catalog image resource.
            static let tab2 = ImageResource(name: "assets/images/tab2", bundle: resourceBundle)

        }

    }

}

// MARK: - Backwards Deployment Support -

/// A color resource.
struct ColorResource: Swift.Hashable, Swift.Sendable {

    /// An asset catalog color resource name.
    fileprivate let name: Swift.String

    /// An asset catalog color resource bundle.
    fileprivate let bundle: Foundation.Bundle

    /// Initialize a `ColorResource` with `name` and `bundle`.
    init(name: Swift.String, bundle: Foundation.Bundle) {
        self.name = name
        self.bundle = bundle
    }

}

/// An image resource.
struct ImageResource: Swift.Hashable, Swift.Sendable {

    /// An asset catalog image resource name.
    fileprivate let name: Swift.String

    /// An asset catalog image resource bundle.
    fileprivate let bundle: Foundation.Bundle

    /// Initialize an `ImageResource` with `name` and `bundle`.
    init(name: Swift.String, bundle: Foundation.Bundle) {
        self.name = name
        self.bundle = bundle
    }

}

#if canImport(AppKit)
@available(macOS 10.13, *)
@available(macCatalyst, unavailable)
extension AppKit.NSColor {

    /// Initialize a `NSColor` with a color resource.
    convenience init(resource: ColorResource) {
        self.init(named: NSColor.Name(resource.name), bundle: resource.bundle)!
    }

}

protocol _ACResourceInitProtocol {}
extension AppKit.NSImage: _ACResourceInitProtocol {}

@available(macOS 10.7, *)
@available(macCatalyst, unavailable)
extension _ACResourceInitProtocol {

    /// Initialize a `NSImage` with an image resource.
    init(resource: ImageResource) {
        self = resource.bundle.image(forResource: NSImage.Name(resource.name))! as! Self
    }

}
#endif

#if canImport(UIKit)
@available(iOS 11.0, tvOS 11.0, *)
@available(watchOS, unavailable)
extension UIKit.UIColor {

    /// Initialize a `UIColor` with a color resource.
    convenience init(resource: ColorResource) {
#if !os(watchOS)
        self.init(named: resource.name, in: resource.bundle, compatibleWith: nil)!
#else
        self.init()
#endif
    }

}

@available(iOS 11.0, tvOS 11.0, *)
@available(watchOS, unavailable)
extension UIKit.UIImage {

    /// Initialize a `UIImage` with an image resource.
    convenience init(resource: ImageResource) {
#if !os(watchOS)
        self.init(named: resource.name, in: resource.bundle, compatibleWith: nil)!
#else
        self.init()
#endif
    }

}
#endif

#if canImport(SwiftUI)
@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension SwiftUI.Color {

    /// Initialize a `Color` with a color resource.
    init(_ resource: ColorResource) {
        self.init(resource.name, bundle: resource.bundle)
    }

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension SwiftUI.Image {

    /// Initialize an `Image` with an image resource.
    init(_ resource: ImageResource) {
        self.init(resource.name, bundle: resource.bundle)
    }

}
#endif