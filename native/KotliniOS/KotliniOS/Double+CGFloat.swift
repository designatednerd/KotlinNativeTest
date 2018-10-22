//
//  Double+CGFloat.swift
//  KotliniOS
//
//  Created by Ellen Shapiro on 10/18/18.
//  Copyright © 2018 Bakken & Baeck. All rights reserved.
//

import UIKit
import SharedCode

extension Double {
    
    var toCGFloat: CGFloat {
        return CGFloat(self)
    }
}

extension Size {
    
    var toCGFloat: CGFloat {
        return value.toCGFloat
    }
}
