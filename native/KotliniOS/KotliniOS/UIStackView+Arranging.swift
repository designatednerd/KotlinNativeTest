//
//  UIStackView+Arranging.swift
//  KotliniOS
//
//  Created by Ellen Shapiro on 10/15/18.
//  Copyright © 2018 Bakken & Baeck. All rights reserved.
//

import UIKit

extension UIStackView {
    
    func clear() {
        self.arrangedSubviews.forEach { $0.removeFromSuperview() }
    }
}
