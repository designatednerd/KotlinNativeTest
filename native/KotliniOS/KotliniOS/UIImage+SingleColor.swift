//
//  UIImage+SingleColor.swift
//  KotliniOS
//
//  Created by Ellen Shapiro on 10/18/18.
//  Copyright © 2018 Bakken & Baeck. All rights reserved.
//

import UIKit

extension UIImage {
    
    static func from(color: UIColor, size: CGSize = CGSize(width: 1, height: 1)) -> UIImage {
        
        UIGraphicsBeginImageContext(size)
        guard let context = UIGraphicsGetCurrentContext() else {
            assertionFailure("Could not get current context!")
            return UIImage()
        }
        
        context.setFillColor(color.cgColor)
        context.fill(CGRect(origin: .zero, size: size))
        
        defer {
            UIGraphicsEndImageContext()
        }
        
        guard let image = UIGraphicsGetImageFromCurrentImageContext() else {
            assertionFailure("Couldn't get image from color!")
            return UIImage()
        }
        
        return image
    }
}

